import java.util.Scanner;
public class Main 
{

	
	public static void main(String[] args) 
	{
		
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt();
		for(int i=0;i<num;i++)
		{
			int[][] n = new int[9][9];
			
			for(int j=0;j<9;j+=2)
				for(int k=0;k<=j;k+=2)
					n[j][k] = scanner.nextInt();
				
			for(int j=8;j>=2;j-=2)
			{
				int count = 0;
				for(int k=0;k<=8-count;k+=2)
				{
					if(k==8)
						break;
					n[j][k+1] = (n[j-2][k]-n[j][k]-n[j][k+2])/2;//c
					n[j-1][k] = n[j][k+1] + n[j][k];
					n[j-1][k+1] = n[j][k+1] + n[j][k+2];
				}
				count+=2;
			}
			
			StringBuilder sb = new StringBuilder();
			for(int j=0;j<9;j++)
			{
				for(int k=0;k<=j;k++)
				{
					sb.append(n[j][k]+" ");
				}
				sb.deleteCharAt(sb.length()-1);
				sb.append("\n");
			}
			System.out.print(sb);
			
		}	
	}
}









