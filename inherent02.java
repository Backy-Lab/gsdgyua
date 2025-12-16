package day07;

class Bank
{
	int a=0;
	void getBalance()
	{
	System.out.println(a+"$ in Bank");
		
	}
}
class BankA extends Bank
{
	int a=1000;
	void getBalance()
	{
	System.out.println(a+"$ in Bank A");
		
	}
}

class BankB extends Bank
{
	int a=1500;
	void getBalance()
	{
		System.out.println(a+"$ in Bank B");
		
	}
}

class Bankc extends Bank
{
	int a=2000;
	void getBalance()
	{
		System.out.println(a+"$ in Bank C");
		
	}
}



public class inherent02 {

	public static void main(String[] args) {
	
		 Bank x= new Bank();
	     BankA a = new BankA();
	     BankB b = new BankB();
	     Bankc c = new Bankc();
		
	
	     x.getBalance();
        a.getBalance();
        b.getBalance();
        c.getBalance();
		

	}

}
