// Import scanner object
import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        /*
        *   Title: Lab 2 - Calculator
        *   Author: Romel Fatal
        *   Date: 01/25/2022
        */

        // Variables
        Scanner userInput = new Scanner(System.in);
        double number1, number2, result = 0;
        int userOption;

        // Get user input and display user input
        System.out.print("Enter first operand: ");
        number1 = userInput.nextDouble();

        System.out.print("Enter second operand: ");
        number2 = userInput.nextDouble();

        // Display calculator menu
        System.out.println("\n Calculator Menu");
        System.out.println("---------------");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division \n");

        // Have user pick an option from menu
        System.out.print("Which operation do you want to perform? ");
        userOption = userInput.nextInt();

        // Perform user operation
        switch (userOption) {
            case 1:
                // Perform addition calculation
                result = number1 + number2;
                System.out.println("\nThe result of the operation is " + result + ". Goodbye!");
                break;

            case 2:
                // Perform subtraction calculation
                result = number1 - number2;
                System.out.println("\nThe result of the operation is " + result + ". Goodbye!");
                break;

            case 3:
                // Perform Multiplication calculation
                result = number1 * number2;
                System.out.println("\nThe result of the operation is " + result + ". Goodbye!");
                break;

            case 4:
                // Perform division calculation
                result = number1 / number2;
                System.out.println("\nThe result of the operation is " + result + ". Goodbye!");
                break;

            default:
                System.out.println("\nError: Invalid selection! Terminating program.");
                break;
        }
    }
}
