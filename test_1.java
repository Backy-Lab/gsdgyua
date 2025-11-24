package day01;

import java.util.Scanner;

public class test_1 {

	public static void main(String[] args) {
		Scanner get =new Scanner (System.in);
		int age1,age2,roll_no1,roll_no2;
		float result1,result2;
		String name1,name2;
		System.out.println("Enter name 1: ");
		name1=get.nextLine();
		System.out.println("Enter roll_no 1 : ");
		roll_no1=Integer.parseInt(get.nextLine());
		System.out.println("Enter Age 1: ");
		age1=Integer.parseInt(get.nextLine());
		System.out.println("Enter result 1 : ");
		result1=Float.parseFloat(get.nextLine());
		System.out.println("Enter name 2: ");
		name2=get.nextLine();
		System.out.println("Enter roll_no 2 : ");
		roll_no2=Integer.parseInt(get.nextLine());
		System.out.println("Enter Age 2: ");
		age2=Integer.parseInt(get.nextLine());
		System.out.println("Enter result 2: ");
		result2=Float.parseFloat(get.nextLine());
		
		System.out.println("Name = " +name1);
		System.out.println("Name = " +roll_no1);
		System.out.println("Name = " +age1);
		System.out.println("Name = " +result1);
		System.out.println("Name = " +name2);
		System.out.println("Name = " +roll_no2);
		System.out.println("Name = " +age2);
		System.out.println("Name = " +result2);
		

		
	}

}
