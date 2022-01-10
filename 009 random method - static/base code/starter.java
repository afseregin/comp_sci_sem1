import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		Random rand = new Random();
		
		int rand_num1 = rand.nextInt(10);
		System.out.println("0-9 = "+rand_num1);
		
		int rand_nun2 = rand.nextInt(100);
		rand_nun2 = rand_nun2+1;
		System.out.println("1-100 = "+rand_nun2);
		
		double rand_num3 = rand.nextDouble();
		rand_num3 = rand_num3+2.5;
		System.out.println("2.5-3.5 = "+rand_num3);
		
		int rand_num4 = rand.nextInt(575);
		rand_num4 = rand_num4+14;
		System.out.println("14-589 = "+rand_num4);
	}
}
