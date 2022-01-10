import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter first number");
		int number1 = sc.nextInt();
		
		System.out.println("Enter second number");
		int number2 = sc.nextInt();
		
		if(number1 == number2){
			System.out.println("The integers are the same");
		} else{
			System.out.println("The integers are different");
		}
		
		//
		
		System.out.println("Enter first number");
		int number_1 = sc.nextInt();
		
		System.out.println("Enter second number");
		int number_2 = sc.nextInt();
		
		System.out.println("Enter third number");
		int number_3 = sc.nextInt();
		
		if(number_1>number_2){
			if(number_1>number_3){
				System.out.println(number_1 + " is the biggest integer");
			}
			else{
				System.out.println(number_3 + " is the biggest integer");
			}
		}
		else{
			if (number_2>number_3) {
			System.out.println(number_2 + " is the biggest integer");
		}else{
			System.out.println(number_3 + " is the biggest integer");
		}
		} 
		
		//
		
		if(number_1<number_2){
			if(number_1<number_3){
				System.out.println(number_1 + " is the smallest integer");
			}
			else{
				System.out.println(number_3 + " is the smallest integer");
			}
		}
		else{
			if (number_2<number_3) {
			System.out.println(number_2 + " is the smallest integer");
		}else{
			System.out.println(number_3 + " is the smallest integer");
		}
		}
	}
}