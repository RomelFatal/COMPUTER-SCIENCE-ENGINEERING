import java.util.Arrays;
import java.util.Scanner;
public class MonthlyPayments {
    public static void main(String[] args) {
        // Variables
        Scanner input = new Scanner(System.in);
        double annualInterest, monthlyInterest, loanAmount, monthlyPayment, totalPayment;
        int years;

        // Obtain yearly interest rate
        System.out.print("Enter the yearly interest rate, such as 8.5: ");
        annualInterest = input.nextDouble();

        // Obtain number of years
        System.out.print("Enter the number of years as an integer: ");
        years = input.nextInt();

        // Obtain total loan amount
        System.out.print("Enter the total loan amount, such as 12000.45: ");
        loanAmount = input.nextDouble();

        // Calculate monthly interest
        monthlyInterest = annualInterest / 1200;

        // Calculate monthly payment
        monthlyPayment = (loanAmount * monthlyInterest) /
                (1 - 1 / Math.pow(1 + monthlyInterest, years * 12));

        // Calculate total payment
        totalPayment = monthlyPayment * years * 12;

        // Display monthly and total payment
        System.out.println("The monthly payment is " + (int)(monthlyPayment * 100) / 100.0);
        System.out.println("The total payment is " + (int)(totalPayment * 100) / 100.0);
    }
}
