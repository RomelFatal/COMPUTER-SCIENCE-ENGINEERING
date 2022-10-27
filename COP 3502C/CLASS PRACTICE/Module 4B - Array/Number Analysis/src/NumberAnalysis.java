import java.util.Scanner;

public class NumberAnalysis {
    public static void main(String[] args) {
        // Variables
        int n, count = 0;
        double[] numbers;
        double sum = 0.0, average;

        Scanner input = new Scanner(System.in);

        // Read in N numbers
        System.out.print("How many numbers will you enter? ");
        n = input.nextInt();

        // Request memory for numbers
        numbers = new double[n];

        // Read n doubles in to numbers, keep track of the sum for average
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = input.nextDouble();
            sum += numbers[i];
        }

        average = sum / n;

        // Conduct analysis of #'s above average
//        for (int i = 0; i < numbers.length; i++)
//            if (numbers[i] > average) {
//                count++;
//            }
        // Another alternative when elements of array does not need to be modified, use the for
        // each loo
        for (double e : numbers) {
            if (e > average) {
                count++;
            }
        }

        // Display the result
        System.out.println("There are " + count + " numbers above the average.");
    }
}
