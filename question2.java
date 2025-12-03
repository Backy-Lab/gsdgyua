package question;

import java.util.Scanner;

public class question2 {

	public static void main(String[] args) {

		        Scanner get = new Scanner(System.in);
		        int a[] = new int[5];
		        int i, j=0;
		        System.out.println("Enter 5 numbers: ");
		        for(i=0;i<5;i++) {
		            a[i]=get.nextInt();
		        }
		        for(i=0;i<5;i++) {
	               j+=a[i];        
		        }
		        System.out.println("Sum = : "+j);
		      
		    }
}
