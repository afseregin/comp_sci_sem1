import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Are you a Wizard, Warrior, or a Rogue");
		String role = sc.nextLine();
		
		if (role.equals("Wizard")||role.equals("Warrior")||role.equals("Rogue")) {
			System.out.println("Your role is a " + role);
		}
		else{
			System.out.println("You didn't enter a role");
		}
	}
}