package bank;
public class CustomerBorrow extends Customer {
	int Nowbo=0;
	int count=0;
	String a;
	CustomerBorrow(String name)
	{
	super(name);
	}
	
	public void borrow(int dollors)
	{
	
		if(money>dollors)
		{
			System.out.println("You don't need to borrow money!!!");
		}
		else 
		{	
			Nowbo=dollors;
			money=money-dollors;
		}
	}
	
	@Override
	public void show()
	{
		System.out.println(this.customer_name+" have "+money+" in the bank");
		System.out.println(this.customer_name+" borrow "+Nowbo);
	}
	@Override
	public void choose(int number,int mode )
	{
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
		else if (number==5) {
			int dollors=input.nextInt();
			borrow(dollors);
			show();
		}
		else if(number==-1)
		{
			
		}
		else
		{
		error()	;
		
		}
				
		
	}
	
	

}
