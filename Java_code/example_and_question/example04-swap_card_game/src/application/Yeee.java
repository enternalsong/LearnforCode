package application;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import javafx.event.Event;
import javafx.event.EventHandler;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.Pane;

public class Yeee extends Scene {

	Image cardIm = new Image(getClass().getResourceAsStream("00.jpg"));
	Image card1 = new Image(getClass().getResourceAsStream("01.jpg"));
	Image card2 = new Image(getClass().getResourceAsStream("02.jpg"));
	Image card3 = new Image(getClass().getResourceAsStream("03.jpg"));
	Image card4 = new Image(getClass().getResourceAsStream("04.jpg"));
	Image card5 = new Image(getClass().getResourceAsStream("05.jpg"));
	int num=0;
	int state=1;
	int typee=0;
	Image aa;
	Image bb;
	Label touch;
	Card A;
	Card B;
	ArrayList<Card> cards;
	ArrayList<Integer> types;
	//ArrayList<Card> drawcards;
	List<ImageView> ivList=new ArrayList<>();
	boolean matched[]=new boolean[20];
	public Yeee(Main m,Parent root) {
		super(root);
		cards = new ArrayList(); 
		types = new ArrayList(); 
		//drawcards=new ArrayList();
		Button back;
		
		back = (Button)lookup("#back");
		touch=(Label)lookup("#touch");
		touch.setText("Total Hits: "+num   + "       Types("+ typee +"/10)"   );
		for (int i =1;i<6;i++) {
			types.add(i);
			types.add(i);
			types.add(i);
			types.add(i);
		}
		SceneBuild();
		back.setOnMouseClicked(new EventHandler<MouseEvent>() {
			@Override
			public void handle(MouseEvent event) {
				num=0;
				typee=0;
				touch.setText("Total Hits: "+num   + "       Types("+ typee +"/10)"   );
				SceneBuild();
				m.stage.setScene(m.menu);
			}
		});
	}
	public void SceneBuild()
	{
		GridPane gp = (GridPane)lookup("#grid");

		Collections.shuffle(types);
		for(int i =0 ;i<5;i++)
			for(int j =0 ;j<4;j++) {
			Card card = new Card(cardIm,types.get(i*4+j));
			
			cards.add(card);
			gp.add(card, i, j);
			//Card card1 = new Card(cardIm,types.get(i*4+j-1))
			card.setOnMouseClicked(new EventHandler<Event>() {
				
				
				@Override
				public void handle(Event event) {
					if(typee==10)
					{
						touch.setText("Total Hits: "+num   + "       Types("+ typee +"/10)" +"You Win!!!"  );
					}
					ImageView iv=new ImageView(cardIm);
					num=num+1;
					touch.setText("Total Hits: "+num   + "       Types("+ typee +"/10)"   );
					if(state==1)
					{
						A=card;
						A.setImage(getImageByType(card.type));
						
					}
					if(state==2)
					{
						B=card;
						B.setImage(getImageByType(card.type));
						if(A.type==B.type)
						{
							typee=typee+1;
							
							touch.setText("Total Hits: "+num   + "       Types("+ typee +"/10)"   );
						}
						
					}
					else if(state==3)
					{
						card.setImage(getImageByType(card.type));
						if(A.type!=B.type)
						{
							A.setImage(getImageByType(0));
							B.setImage(getImageByType(0));
						}
						else
						{
							A.setImage(getImageByType(A.type));
							B.setImage(getImageByType(B.type));
							
						}
						A=card;
						state=1;
					}
					state=state+1;
					


					
					
					
					} 
						} );

		}
	}
	public Image getImageByType(int type) {
		switch(type) {
		case 1:return card1;
		case 2:return card2;
		case 3:return card3;
		case 4:return card4;
		case 5:return card5;
		}
		return cardIm;
	}



	public Image getMatch(int type,int type1) {
			if(type!=type1)
			{return cardIm; }
			else if(type==type1)
			{		
				if(type==1)
				{
					return card1;
				}
				else if(type==2)
				{
					return card2;
				}
				else if(type==3)
				{
					return card3;
				}
				else if(type==4)
				{
					return card4;
				}
				else if(type==5)
				{
					return card5;
				}
			}
			return cardIm;
				
	}
}
	
