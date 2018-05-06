
public class Main 
{    
    
    /* Main method */
    public static void main(String[] args) 
    {
        sc sc = new sc(System.in);
    	while(sc.hasNext())
    	{
    		int[] user = new int[4];
    		int[] ans  = new int[4];
    		
    		String s1 = sc.next();
    		String s2 = sc.next();
    		
    		for(int i=0;i<4;i++)
    		{
    			user[i] = s1.charAt(i)-'0';
    			ans[i] = s2.charAt(i)-'0';
    		}
    		
    		int a = 0;
    		int b = 0;
    		for(int i=0;i<4;i++)
    		{
    			if(user[i]==ans[i])
    			{
    				a++;
    				user[i]=-1;
    				ans[i]=-1;
    			}
    		}
    		
    		for(int i=0;i<4;i++)
    		{
    			for(int j=0;j<4;j++)
        		{
        			if((user[i]==ans[j]) && user[i]!=-1 && ans[i]!=-1)
        				b++;
        		}
    		}
    		
    		System.out.println(a+"A"+b+"B");
    		System.out.println("²q¼Æ: "+s1);
    		System.out.println("µª¼Æ: "+s2);
    		
    	}
    }        
}















