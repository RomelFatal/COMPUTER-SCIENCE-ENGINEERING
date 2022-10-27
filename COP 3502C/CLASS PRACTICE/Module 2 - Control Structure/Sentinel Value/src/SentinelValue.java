import java.util.Scanner;

public class SentinelValue {
    public static void main(String[] args) {
        // Variables
        Scanner input = new Scanner(System.in);
        int number = 0;
        int sum = 0;

//        // Prompt user
//        System.out.print("Enter a number, program will exit if you input 0: ");
//        number = input.nextInt();
//
////        // Loop until input is zero, add to sum
////        while (number != 0) {
////            sum += number;
////
////            // Prompt user
////            System.out.print("Enter a number, program will exit if you input 0: ");
////            number = input.nextInt();
////        }

        // Do while works best for this case
        // Loop until input is zero, add to sum
        do {
            // Prompt user
            System.out.print("Enter a number, program will exit if you input 0: ");
            number = input.nextInt();

            sum += number;

        } while (number != 0);

        // Display result
        System.out.println("The total is " + sum);
    }
}
