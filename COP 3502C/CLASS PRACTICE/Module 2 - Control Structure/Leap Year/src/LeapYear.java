import java.util.Scanner;

public class LeapYear {
    public static void main(String[] args) {
        // Variables
        int years;
        Scanner input = new Scanner(System.in);

        // Prompt user and obtain year
        System.out.print("Enter a year: ");
        years = input.nextInt();

        // Check if leap year
        // OR operation catches false case when %100 == 0
        if (((years % 4 == 0) && (years % 100 !=0)) || (years % 400 == 0)) {
            // is a leap year
            System.out.println("The year " + years + " is a leap year!");
        }
        else {
            // not a leap year
            System.out.println("The year " + years + " is NOT a leap year!");
        }
    }
}