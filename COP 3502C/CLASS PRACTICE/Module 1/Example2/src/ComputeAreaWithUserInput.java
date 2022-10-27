import java.util.Scanner;
public class ComputeAreaWithUserInput {
    public static void main(String[] args) {
        // Variables
        double radius, area;
        final double PI = 3.14159;
        Scanner input = new Scanner(System.in);

        // Prompt the user
        System.out.print("Enter a radius: ");

        // Obtain the radius
        radius = input.nextInt();

        // Compute the area
        area = PI * radius * radius;

        // Print the result
        System.out.println("The area of a circle with radius " + radius + " is " + area);
    }
}
