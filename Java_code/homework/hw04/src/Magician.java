
public class Magician implements Profession {
	private int STR=1,DEX=3,INT=5,HP=30,MP=100;
	public String skill()
	{
		return("Firestorm !!!");
	}
	 public String getProfession()
	{
		return("Magician");
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
