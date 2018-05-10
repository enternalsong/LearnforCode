import java.util.Arrays;
import java.util.Scanner;
public class Main 
{	
	
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);
		while(scanner.hasNext())
		{
			int n = scanner.nextInt();
			if(n==0)
				break;
			int[] a = new int[n];
			for(int i=0;i<n;i++)
				a[i] = scanner.nextInt();
			Arrays.sort(a);
			StringBuilder sb = new StringBuilder("");
			for(int i=0;i<n;i++)
			{
				sb.append(a[i]);
				if(i!=(n-1))
					sb.append(" ");

			}
			
			System.out.println(sb);
			
		}
	}
}