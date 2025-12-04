package string;

import java.util.Scanner;

public class mee {

	public static void main(String[] args) {
		int a[]= new int[5];
		Scanner sc = new Scanner(System.in);
       System.out.println("Enter any 5 Numbers");
       for(int i = 0;i<5;i++) {
    	     a[i]=sc.nextInt();
       }
       
       
       int n=a.length;

      
       for (int i = 0; i < n - 1; i++) {
           
           for (int j = i + 1; j < n; j++) {
               if (a[i]==a[j]) {
               System.out.println("Yep there is dublicate in loop and this is  : "+a[i]);
               break;
               }
           }
       }
	}

}


