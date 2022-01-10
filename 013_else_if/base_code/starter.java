import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Random rand = new Random();
		int number = rand.nextInt(1001);
		Scanner sc = new Scanner(System.in);
		System.out.println("Guess a number between 1 and 1000");
		int guess = sc.nextInt();
		if (guess == number){
			System.out.println("You guessed the number!");
		}
		else if (guess>number){
			System.out.println("Your guees is larger than the number");
		}
		else{
			System.out.println("Your guees is smaller than the number");
		}
	}
}
