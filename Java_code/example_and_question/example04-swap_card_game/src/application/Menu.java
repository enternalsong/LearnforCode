package application;

import javafx.event.EventHandler;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.input.MouseEvent;

public class Menu extends Scene {
	public Menu(Main m,Parent root) {
		super(root);
		Button start = (Button)lookup("#start");
		Button exit=(Button)lookup("#exit");
		start.setOnMouseClicked(new EventHandler<MouseEvent>() {
			@Override
			public void handle(MouseEvent event) {
				m.stage.setScene(m.yeee);
			}
		});
		exit.setOnMouseClicked(new EventHandler<MouseEvent>() {
			@Override
			public void handle(MouseEvent event) {
				m.stage.close();
			}
		});
	}

}
