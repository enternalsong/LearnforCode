import java.util.Scanner;
public class Main 
{
//�ӤHı�o�o�D�D�`�o��+�·�...  ���_�ӫܦY�O�O���`��  �ҫܦh�{��������
//cpe似乎把這題歸類到一顆星選集  不用物件來做這題會是個苦工題  建議使用物件
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);
		while(scanner.hasNext())
		{
			
			int n = scanner.nextInt();
			boolean isPrime = true;
			
			for(int i=2;i<=Math.sqrt(n);i++)
			{
				if(n%i==0)
				{
					isPrime = false;
					break;
				}
			}
			
			
			if(isPrime)
			{
				
				StringBuilder sb = new StringBuilder(Integer.toString(n)).reverse();
				
				int m = Integer.parseInt(sb.toString());
				boolean isEmirp = true;
				
				for(int i=2;i<=Math.sqrt(m);i++)
				{
					if(m%i==0)
					{
						isEmirp = false;
						break;
					}
				}
				
				if((sb.toString()).equals(Integer.toString(n)))
					System.out.println(n+" is prime.");
				
				else if( isPrime && isEmirp )
					System.out.println(n+" is emirp.");
				
				else if( isPrime && !isEmirp )
					System.out.println(n+" is prime.");
				
			}
			else
			{
				System.out.println(n+" is not prime.");
			}
			
		}
	}
}
