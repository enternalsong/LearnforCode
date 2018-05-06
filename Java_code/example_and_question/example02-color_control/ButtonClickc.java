package hw06;
import javafx.application.Application;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.input.MouseEvent;

import javafx.scene.layout.StackPane;

import javafx.scene.paint.Color;
import javafx.stage.Stage;


	
public class ButtonClickc extends Application {
	int count=1;
	public static void main(String[] args) {
		
		launch(args);
	  }
	@Override
	public void start(Stage primaryStage) throws Exception{
		Button btn=new Button("click me");
		btn.setTextFill(Color.RED);
		
		btn.setOnMouseClicked(new EventHandler<MouseEvent>() {
			@Override
			public void handle(MouseEvent arg0) {
				
				if(count%6==1)
				{btn.setTextFill(Color.ORANGE);
				
				}
				if(count%6==2)
				btn.setTextFill(Color.YELLOW);
				if(count%6==3)
				btn.setTextFill(Color.GREEN);
			    if(count%6==4)
				btn.setTextFill(Color.BLUE);
				if(count%6==5)
				btn.setTextFill(Color.PURPLE);
				if(count%6==0)
				btn.setTextFill(Color.RED);
				count=count+1;
					
		}
			

				
				
		
		});

		
	StackPane root=new StackPane();
	root.getChildren().add(btn);
	Scene scene=new Scene(root,500,300);
	primaryStage.setScene(scene);
	primaryStage.show();
	}

}
