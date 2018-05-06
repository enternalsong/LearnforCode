
public class Warrior implements Profession {
		private int STR=5,DEX=3,INT=1,HP=100,MP=30;
		public String skill()
		{
			return("Glacial Hammer !!!");
		}
		 public String getProfession()
		{
			return("Warrior");
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

