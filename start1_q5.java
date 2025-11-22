package day01;

class  start1_q5{

public static void main(String[] sa)
{
	int i,x=0;
  System.out.println("The first 10 natural number is");
  for(i=1;i<=10;i++) {
	  System.out.print(i+" "); 
  }
  for(i=1;i<=10;i++) {
	x+=i;  
  }

	  System.out.println("\nThe sum is = "+x);

}
}