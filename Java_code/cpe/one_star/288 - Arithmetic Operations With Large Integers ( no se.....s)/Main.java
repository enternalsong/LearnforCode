import java.util.Scanner;
import java.math.BigInteger;
import java.lang.StringBuilder;
//288 - Arithmetic Operations With Large Integers
//http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=224
public class Main
{
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);
		while(scanner.hasNext())
		{
			//	   12345678*129876+2**1993
			//e.g. a op b op ( c op d )
			BigInteger[] num = new BigInteger[300];
			StringBuilder sb = new StringBuilder("");
			String ss=scanner.next();
			sb.append(ss);
			if(ss.equals("0"))
			{
				break;
			}
			StringBuilder s = new StringBuilder("");
			StringBuilder oper = new StringBuilder("");
			int index=0;
			for(int i=0;i<sb.length();i++)
			{
				/////////////////////////////////////////////
				if(Character.isDigit(sb.charAt(i)))
				{
					s.append(sb.charAt(i));
				}	
				else if(!(Character.isDigit(sb.charAt(i))))
				{
					if(s.length()==0)
					{
						//oper.append("p");
						continue;
					}
					
					if(sb.charAt(i)=='*')
					{
						if(sb.charAt(i)=='*' && sb.charAt(i+1)!='*')
						{
							oper.append(sb.charAt(i));
							num[index]=new BigInteger(s.toString());
							s=new StringBuilder("");
							index++;
							continue;
						}
						else if(sb.charAt(i)=='*' && sb.charAt(i+1)=='*')
						{
							oper.append("p");
							num[index]=new BigInteger(s.toString());
							s=new StringBuilder("");
							index++;
							continue;
						}	
					}
					oper.append(sb.charAt(i));
					num[index]=new BigInteger(s.toString());
					s=new StringBuilder("");
					index++;
				}
				if(i==sb.length()-1)
				{
					num[index]=new BigInteger(s.toString());
					s=new StringBuilder("");
				}
			}
			
			// a op b    or    op b
			// oper (sb)
			//num[300] ( BI )
			//System.out.println(oper);
			
			
			//BigInteger ans = new BigInteger(num[0]);
			
			//System.out.println(num[0]);
			
			
			
			//System.out.println(num[250]);
			//System.out.println(num[0]);
			//System.out.println(num[1]);
			//System.out.println(num[2]);
			//System.out.println(num[3]);
			
			index=1;
			StringBuilder newoper=new StringBuilder("");
			num[250]=new BigInteger(num[0].toString());
			/*
			 [0]12345678
			 [1]129876
			 [2]2
			 [3]1993
			 */
			BigInteger[] newnum = new BigInteger[100];
			for(int i=0,p=0;i<oper.length();i++)
			{
				if(oper.charAt(i)=='*')
				{
					newnum[index-1]=new BigInteger("0");
					newnum[p]=num[index-1].multiply(num[index]);
					index++;
					p++;
				}else if(oper.charAt(i)=='p')
				{
					newnum[index-1]=new BigInteger("0");
					newnum[p]=num[index-1].pow(num[index].intValue());
					index++;
					p++;
				}
				if(oper.charAt(i)=='+' || oper.charAt(i)=='-')
				{
					newoper.append(oper.charAt(i));
					index++;
				}
			}
			//System.out.println(newoper);
			/*
			System.out.println("0---"+newnum[0]);
			System.out.println("1---"+newnum[1]);
			System.out.println("2---"+newnum[2]);
			System.out.println("3---"+newnum[3]);
			System.out.println("4---"+newnum[4]);
			*/
			index=1;
			for(int i=0; i<newoper.length() ;i++)
			{
				if(newoper.charAt(i)=='+')
				{
					newnum[0]=newnum[0].add(newnum[index]);
					index++;
				}else if(newoper.charAt(i)=='-')
				{
					newnum[0]=newnum[0].subtract(newnum[index]);
					index++;
				}
			}
			System.out.println(newnum[0]);

				
		}
	}
}



