package hw05;
import java.util.*;
import java.math.*;
import java.lang.*;
import java.util.InputMismatchException;
public class Main {
	public static void main (String args[]) throws Exception1, Exception2
	{
		int x=1;
		int y=1;
		int ans=1;
		Scanner scanner=new Scanner(System.in);
		while(true)
		{
		ans=1;

		try {
			System.out.println("Please input X");
			x=scanner.nextInt();
			System.out.println("Please input Y");
			y=scanner.nextInt();
			if(x==0 && y==0)
				{
				throw new Exception1("Error! zero to the power of zero "
						+ "is not defined  0^0 is not integer\n");	
				}
			if(y<0)
				{
				throw new Exception2("Error!the exponent is "
						+ "negative value  (InputX)^ (InputY) is not integer"+"\n");
				}
			for(int i=0;i<y;i++)
			{
				ans=x*ans;
			}
			System.out.println("the anser is: "+ans+"\n");
		}
		
			catch(InputMismatchException e) {
				System.out.println("Error!it¡¦s not integer");
				x=1;
				scanner=new Scanner(System.in);
			}
			catch( Exception1 |Exception2 e)
			{
				continue;
			}		
		}
	}
}




