import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("What is your name?");
		String name = sc.nextLine();
		String role = ("hi");
		while(true){
		System.out.println("Are you a Wizard, Warrior, or a Rogue");
		role = sc.nextLine();
		
		if (role.equals("Wizard")||role.equals("Warrior")||role.equals("Rogue")) {
			break;
		}
		else{
			System.out.println("You didn't enter a role. Please enter a role");
		}
		}
		System.out.println("Enter your title");
		String title = sc.nextLine();
		
		int points = (25);
		System.out.println("You have 25 points to spend. Strength, Dexterity, Intelligence, Constitution, Charisma");
		
		int Strength = (0);
		while(true){
		System.out.println("Strength(1-10)");
		Strength = sc.nextInt();
		if (Strength > 10 || points-Strength<0){
			System.out.println("You don't have enough points, choose again");
		}
		else{
			points = points-Strength;
			break;
		}
		}
		
		int Dexterity = (0);
		while(true){
		System.out.println("Dexterity(1-10)");
		Dexterity = sc.nextInt();
		if (Dexterity > 10 || points-Dexterity<0){
			System.out.println("You don't have enough points, choose again");
		}
		else{
			points = points-Dexterity;
			break;
		}
		}
		
		int Intelligence = (0);
		while(true){
		System.out.println("Intelligence(1-10)");
		Intelligence = sc.nextInt();
		if (Intelligence > 10 || points-Intelligence<0){
			System.out.println("You don't have enough points, choose again");
		}
		else{
			points = points-Intelligence;
			break;
		}
		}
		
		int Constitution = (0);
		while(true){
		System.out.println("Constitution(1-10)");
		Constitution = sc.nextInt();
		if (Constitution > 10 || points-Constitution<0){
			System.out.println("You don't have enough points, choose again");
		}
		else{
			points = points-Constitution;
			break;
		}
		}
		
		int Charisma = (0);
		while(true){
		System.out.println("Charisma(1-10)");
		Charisma = sc.nextInt();
		if (Charisma > 10 || points-Charisma<0){
			System.out.println("You don't have enough points, choose again");
		}
		else{
			points = points-Charisma;
			break;
		}
		}
		
		System.out.println("You are " + name + ", the " + title);
		System.out.println("You are a " + role + " with the following stats:");
		System.out.println("Strength - " + Strength);
		System.out.println("Dexterity - " + Dexterity);
		System.out.println("Intelligence - " + Intelligence);
		System.out.println("Constitution - " + Constitution);
		System.out.println("Charisma - " + Charisma);
		System.out.println("And you have "+points+" points left");
	}
}