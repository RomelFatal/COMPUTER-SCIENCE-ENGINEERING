public class ComputeArea {
    public static void main(String[] args) {
        // Variables
        double radius, area;
        final double PI = 3.14159;

        // Obtain the radius
        radius = 20;

        // Compute the area
        area = PI * radius * radius;

        // Print results
        System.out.println("The area of a circle with radius " + radius + " is " + area);
    }
}
