package day07;

class Degree
{

void getDegree()
{
	System.out.println("I got Degree");
}
	
}

class Undergraduate extends Degree
{
	void getUndergraduate()
	{
		super.getDegree();
		System.out.println("i am Undergraduate");
		
		
	}
}

class Postgraduate extends Degree
{
	void getPostgraduate()
	{
		super.getDegree();
		System.out.println("i am Postgraduate");
	}	
}



public class inherent01 {

	public static void main(String[] args) {
	
		Undergraduate a = new Undergraduate();
		Postgraduate b = new Postgraduate();
		
	
		a.getUndergraduate();
		
		b.getPostgraduate();
		

	}

}
