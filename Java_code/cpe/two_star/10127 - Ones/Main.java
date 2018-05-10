import java.math.BigInteger;
import java.util.Scanner;

public class Main 
{	
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);
		while(scanner.hasNext())
		{
			
			BigInteger n = scanner.nextBigInteger();//3
			BigInteger test = new BigInteger("11");
			long len = 2;
			while(true)
			{
				
				if(test.mod(n).equals(BigInteger.ZERO))
				{
					break;
				}
				else
				{
					test = test.multiply(BigInteger.TEN).add(BigInteger.ONE);
					len++;
				}
				
			}
			
			System.out.println(len);
			
		}
	}
}