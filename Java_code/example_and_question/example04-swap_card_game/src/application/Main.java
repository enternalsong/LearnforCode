package application;
	
import javafx.application.Application;
import javafx.event.Event;
import javafx.event.EventHandler;
import javafx.fxml.FXMLLoader;
import javafx.stage.Stage;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.GridPane;

public class Main extends Application {
	Stage stage;
	Menu menu;
	Yeee yeee;
	@Override
	public void start(Stage primaryStage) {
		try {
			stage =primaryStage;
			menu =new Menu(this,FXMLLoader.load(getClass().getResource("menu.fxml")));
			
			yeee =new Yeee(this,FXMLLoader.load(getClass().getResource("yeee.fxml")));
			
			primaryStage.setScene(menu);
			primaryStage.show();
		} catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args) {
		launch(args);
	}
}
