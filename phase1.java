package day01;

import java.util.Scanner;

public class phase1 {

	public static void main(String[] args) {
		Scanner scanner =new Scanner(System.in);
		int choice;
		int s_p=0,d_p=0,t_p=0,g_d=0;
		int s_tots=0,s_totd=0,s_tott=0;
		System.out.println("Welcome To My Hotal");
		do {
		 System.out.println("Menu : \n 1.Samosa \n2.Dosa \n3.Tea \n0.Exit \nChoice : ");
		  choice = scanner.nextInt();
		  switch(choice) {
		  case 1: 
			  System.out.println("Enter Number of plates : ");
			  s_p =scanner.nextInt();
			  s_tots+=s_p*20;
			  System.out.println("Sub-total : "+s_tots +"/-");
			  break;
		  case 2: 
			  System.out.println("Enter Number of plates : ");
			  d_p =scanner.nextInt();
			  s_totd+=d_p*30;
			  System.out.println("Sub-total : "+s_totd +"/-");
			  break;
		  case 3: 
			  System.out.println("Enter Number of plates : ");
			  t_p =scanner.nextInt();
			  s_tott+=t_p*10;
			  System.out.println("Sub-total : "+s_tott +"/-");
			  break;
		  case 0:
			  g_d=s_tott+s_totd+s_tots;
			  System.out.println("The Grand Total is :"+g_d);
		  }
		}while(choice!=0);
scanner.close();
	}

}
