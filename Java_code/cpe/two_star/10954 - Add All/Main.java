import java.util.PriorityQueue;
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) throws Exception
	{
		Scanner scanner = new Scanner(System.in);
		
		while(scanner.hasNext())
		{
			int n=scanner.nextInt();//4
			PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
			if(n==0)
			{
				break;
			}

			for(int i=0;i<n;i++)
			{
				pq.add(scanner.nextInt());
			}
			
			int total=0;
			while(pq.size() != 1)
			{
                int cost  = pq.poll() + pq.poll();
                total += cost;
                pq.add(cost);
            }

			System.out.println(total);
			
		}
	}
}



