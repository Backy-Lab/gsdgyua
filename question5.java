package question;

import java.util.Scanner;

public class question5 {

	public static void main(String[] args) {
		Scanner get = new Scanner (System.in);
		int a[]=new int[6];
		int i,n=5;
		int min=600;
		int max=0;
		int t_max=0;
		int t_min=0;
		System.out.println("Enter 5 numbers :");
		for(i=0;i<n;i++) {
			a[i]=get.nextInt();
		}
		for(i=0;i<n;i++) {
            if(a[i]<min) {
            	min=a[i];
            }
            if(a[i]>max) {
            	max=a[i];
            }
            
		}
		System.out.println("min = "+min+"Max =" +max);

	}

}
