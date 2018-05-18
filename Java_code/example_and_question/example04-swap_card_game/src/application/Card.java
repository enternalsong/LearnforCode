package application;

import javafx.scene.image.Image;
import javafx.scene.image.ImageView;

public class Card extends ImageView {
	public int type;
	
	public Card(Image im,int type) {
		super(im);
		this.type= type;
		setFitWidth(64);
		setFitHeight(95);
	}

}
