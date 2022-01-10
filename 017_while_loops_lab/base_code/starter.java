import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("What name would you want to print?");
		String name = sc.nextLine();
		System.out.println("How many times do you want to print it?");
		int number = sc.nextInt();
		
		for (int i = 1; i <= number ; i++) {
			System.out.println(name);
		}
	}
}