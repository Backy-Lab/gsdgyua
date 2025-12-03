package question;

import java.util.Scanner;

public class question1 {

    public static void main(String[] args) {
        Scanner get = new Scanner(System.in);
        int a[] = new int[5];
        int ok, i, j;
        System.out.println("Enter 5 numbers: ");
        for(i=0;i<5;i++) {
            a[i]=get.nextInt();
        }
        for(i=0;i<5-1;i++) {
            for(j=0;j<5-1-i;j++) {
                if(a[j]>a[j+1]) {
                    ok=a[j];
                    a[j]=a[j+1];
                    a[j+1]=ok;
                }
            }
        }
        System.out.println("Sorted order: ");
        for(i=0;i<5;i++) {
            System.out.println(a[i]);
        }
    }
}

