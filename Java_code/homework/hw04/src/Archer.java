
public class Archer implements Profession {
	private int STR=3,DEX=5,INT=1,HP=80,MP=50;
	public String skill()
	{
		return("Rain of Arrows !!!");
	}
	 public String getProfession()
	{
		return("Archer");
	}
	public  int upgradeHP()
	{
		return(HP); 
	}
	public int upgradeMP()
	{
		return(MP);
	}
	public int upgradeSTR()
	{
		return(STR);
	}
	public int upgradeDEX()
	{
		return(DEX);
	}
	public int upgradeINT()
	{
		return(INT);
	}
}
