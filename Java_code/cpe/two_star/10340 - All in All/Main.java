import java.util.Scanner;

public class Main 
{	
	public static void main(String[] args) 
	{
		//這題看起來很難  其實有簡單的方法
		Scanner scanner = new Scanner(System.in);
		while(scanner.hasNext())
		{
			
			String s = scanner.next();
			String t = scanner.next();
			
			int count =0;
			for(int i=0; i<t.length() && count<s.length() ;i++)
			{
				if(t.charAt(i)==s.charAt(count))
					count++;
			}
			
			System.out.println(count==s.length()?"Yes":"No");
			
		}
	}
}