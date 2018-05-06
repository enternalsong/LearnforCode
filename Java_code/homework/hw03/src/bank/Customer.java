package bank;

import java.util.Scanner;

public class Customer {
	String customer_name ;
	int money= 0  ;
	Scanner input = new Scanner(System.in);
	
	public Customer() {
		
	}
	
	public Customer(String customer_name) {
		this.customer_name = customer_name;
	}
	
	public void savemoney(int money) {
		this.money = this.money +  money;	
		show();
	}
	
	public void takemoney(int money) {
		this.money = this.money -  money;	
		show();
	}
	
	public void show() {
		System.out.println(this.customer_name + " have " + this.money +" in the bank ");
	}
	
	public void showlist() {
		System.out.println(" what you want to do?\n"
				+ "1-show the money\n"
				+ "2-save the money\n"
				+ "3-take the money\n"
				+ "4-transfer the money\n"
				+ "5-borrow the money\n"
				+ "-1 to break");	
	}
	
	public void choose(int number, int mode) {
		if(number==1)
			show();
		else if(number==2) {
			int dollors = input.nextInt();
			savemoney(dollors);
		}
		else if(number==3) {
			int dollors = input.nextInt();
			takemoney(dollors);
		}
		else if (number>3 && mode == 1) {
			error();
		}
		
	}
	
	public void error() {
		System.out.println("you don't have this method");
	}

	public void sayhi() {
		System.out.print("Hi " + customer_name);
	}
}