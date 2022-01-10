import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		
		System.out.println("What is your name?"); 
		Scanner names = new Scanner(System.in);
		String name = names.nextLine();
		
		System.out.println("What is your age?");
		Scanner ages = new Scanner(System.in);
		String age = ages.nextLine();
		
		System.out.println("What month were you born (1/12)?");
		Scanner months = new Scanner(System.in);
		String month = months.nextLine();
		
		System.out.println("What day were you born?");
		Scanner days = new Scanner(System.in);
		String day = days.nextLine();
		
		System.out.println("What year were you born?");
		Scanner years = new Scanner(System.in);
		String year = years.nextLine();
		
		System.out.println("How much money do you have?");
		Scanner moneys = new Scanner(System.in);
		String money = moneys.nextLine();
		
		System.out.println("Your name is " + name + " and you are " + age + " years old");
		System.out.println("You were born on " + month + "/" + day + "/" + year);
		System.out.println("You have $" + money);
	}
}
