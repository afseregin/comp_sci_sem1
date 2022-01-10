import java.util.Scanner;

class starter {
	public static void main(String args[]) {
	System.out.println("Enter temperature");
	Scanner temp = new Scanner(System.in);
	int temps = temp.nextInt();
    
    System.out.println(temps + " in fahrenheit is " + (temps-32)*5/9 + " in celcius");
	}
}
