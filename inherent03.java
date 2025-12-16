package day07;

import java.util.Scanner;

class me
{
int i;
void printNum()
{
	System.out.println(i+" this is value of i");
}
}

class me2 extends me
{
int j;
void printNum()
{
	super.printNum();
	System.out.println(j+" this is value of j");
}
void assign()
{
	Scanner num = new Scanner(System.in);
	System.out.println("enter value of i : ");
	i=num.nextInt();
	System.out.println("enter value of j : ");
	j=num.nextInt();
}
}



public class inherent03 {

	public static void main(String[] args) {
	
     me2 a = new me2();
     
		a.assign();
		a.printNum();

	}

}
