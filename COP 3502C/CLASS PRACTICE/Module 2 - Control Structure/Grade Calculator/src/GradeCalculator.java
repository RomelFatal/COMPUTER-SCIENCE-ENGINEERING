import java.util.Scanner;

public class GradeCalculator {
    public static void main(String[] args) {
        // Variables
        Scanner input = new Scanner(System.in);
        int grade;
        char letter;

        // Ask for grade
        System.out.print("Enter your grade out of 100: ");
        grade = input.nextInt();

        // Calculate grade and display
        switch (grade/10){
            case 10:
            case 9:
                letter = 'A';
                break;
            case 8:
                letter = 'B';
                break;
            case 7:
                letter = 'C';
                break;
            default:
                letter = 'F';
                break;
        }
        System.out.println("You got a " + letter + "!");
    }
}
