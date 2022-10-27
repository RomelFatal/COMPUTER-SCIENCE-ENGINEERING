import java.util.Scanner;

public class SubtractionQuiz {
    public static void main(String[] args) {
        // Variables
        Scanner input = new Scanner(System.in);
        int number1, number2, temp, answer;

        // Get two random single-digit integers
        // Math.random() return double number between 0 - 1
        // Multiply by 10 to get whole digit
        number1 = (int)(Math.random() * 10);
        number2 = (int)(Math.random() * 10);

        // Swap number1 with number2 if number1 < number2
        if (number1 < number2) {
            temp = number1;
            number1 = number2;
            number2 = temp;
        }

        // Prompt and get answer from user
        System.out.print("What is " + number1 + " - " + number2 + "?: ");
        answer = input.nextInt();

        // Check if correct and display appropriate message
        if (answer == number1 - number2) {
            System.out.println("You are correct!");
        }
        else {
            System.out.println("You are incorrect!");
        }
    }
}
