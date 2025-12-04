package question;

import java.util.Scanner;

public class question4 {

	public static void main(String[] args) {
		Scanner get = new Scanner (System.in);
		int a[]=new int[5];
		int i,n=5;
		System.out.println("Enter 5 numbers :");
		for(i=0;i<n;i++) {
			a[i]=get.nextInt();
		}
		System.out.println("Enter the number you want to delete : ");
		int dum=get.nextInt();
		for(i=0;i<n;i++) {
			if(a[i]==dum) {
				dum=i;
				break;
			}
		}
		for(i=dum;i<n-1;i++) {
			a[i]=a[i+1];
		}
		n--;
		for(i=0;i<n;i++) {
			System.out.println(a[i]);
		}
		

	}

}
