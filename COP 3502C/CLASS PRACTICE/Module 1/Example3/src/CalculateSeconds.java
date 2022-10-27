import java.util.Scanner;
public class CalculateSeconds {
    public static void main(String[] args) {
        // Variables
        int minutes, seconds, totalSeconds;
        Scanner input = new Scanner(System.in);

        // Obtain total seconds
        System.out.print("Enter an integer for seconds: ");
        totalSeconds = input.nextInt();

        // Calculate minutes, seconds
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;

        // Display result
        System.out.println(totalSeconds + " seconds is " + minutes + " minutes and " + seconds +
                " seconds.");
    }
}
