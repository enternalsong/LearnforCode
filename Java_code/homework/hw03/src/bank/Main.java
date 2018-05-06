package bank;

import java.util.*;

public class Main {



	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		Scanner input = new Scanner(System.in);
		
		Customer customer = null ;
		
		System.out.println("what mode customer?\n"
				+ "1-general\n"
				+ "2-can transfer\n"
				+ "3-can borrow");
		int customermode = input.nextInt();
		
		input = new Scanner(System.in);
		System.out.println("what's your name?");
		String a = input.nextLine();
		
		switch(customermode) {
			case 1 :
				customer = new Customer(a); 
				break;
			case 2:
				customer= new CustomerTransfer(a);
				break;
			case 3:
				customer = new CustomerBorrow(a);
				break;
		}
		
		customer.sayhi();
		
		int choose = 0 ;

		while(choose!=-1) {	
			customer.showlist();
			choose = input.nextInt();
			customer.choose(choose,customermode);	
		}
		
		System.out.println("Thank's for using!");		
	}
}

