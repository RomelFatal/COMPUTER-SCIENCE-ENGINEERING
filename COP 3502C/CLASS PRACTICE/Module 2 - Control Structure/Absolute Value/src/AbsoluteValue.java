import java.util.Scanner;

public class AbsoluteValue {
    public static void main(String[] args) {
        // Variables
        double number;
        Scanner input = new Scanner(System.in);

        // Prompt user for double
        System.out.print("Enter your number: ");
        number = input.nextDouble();

        // If the number is negative, make it positive
        if (number < 0) {
            number = -number;
        }

        // Display result
        System.out.println("The absolute value is " + number);
    }
}
