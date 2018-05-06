package bank;
public class CustomerTransfer extends Customer{
	//int money;
	int count=0;
	int NowTrans=0;
	String a;
	String name;
	

	CustomerTransfer(String name)
	{
		super(name);
		
	};
	
	public void  transfer( int dollors)
	{
		
		if(money<dollors)
		{
			System.out.println("You don't have enough money!!!");
		}
		else
		{ 	
			NowTrans=dollors;
			money=money-dollors;
		}
	};
	@Override
	public void show()
	{
		System.out.println(this.customer_name+" have "+money +" in the bank");
		System.out.println(this.customer_name+" transfer "+NowTrans);
	};
	
	@Override
	public void choose(int number,int mode)
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
		else if (number==4) {
			int dollors=input.nextInt();
			transfer(dollors);
			show();
		}
		else if (number==-1)
		{
			
		}
		else
		{
			//System.out.println("you don't have this method");
			error();
		}
	};
	

}
