package question;

import java.util.Scanner;

public class question3 {

	public static void main(String[] args) {
		Scanner get = new Scanner(System.in);
		int a[] = new int[10];
		
		System.out.print("Enter 5 numbers : ");
		for(int i=0;i<5;i++) {
			a[i]=get.nextInt();
		}
		System.out.println("enter the number to know is it in ot not : ");
	int 	nu = get.nextInt();
		for(int i=0;i<5;i++) {
			if(a[i]==nu) {
				System.out.println("there is the number on array on "+i+" this position");
				break;
			}
		}

	}

}
