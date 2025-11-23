package day01;

public class start2_q3 {

	public static void main(String[] args) {
		int n,i,x=0;
		System.out.print("The input is 1 to 10 And the table are :  ");
		for(n=1;n<=10;n++) 
		{
		 for(i=1;i<11;i++) {
			 x=n*i;
			 System.out.println(n+"X"+i+"="+x);	 
		 }
		 System.out.println("   ");
		}

	}

}
