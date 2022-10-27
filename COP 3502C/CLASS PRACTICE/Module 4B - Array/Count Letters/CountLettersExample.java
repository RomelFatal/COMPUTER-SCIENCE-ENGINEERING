public class CountLettersExample {
    public static void main(String[] args) {
        // Variables
        char[] chars = createArray();
        int[] counts;

        // Display the array
        System.out.println("The lower case letters area: ");
        dispayArray(chars);

        // Count the occurrences
        counts = countLetters(chars);

        // Display counts
        System.out.println();
        System.out.println("The occurrences of each letter are:");
        displayCounts(counts);
    }

    // Method to display where each letter occurs
    private static void displayCounts(int[] counts) {
        // Display counts, 20 per line
        for (int i = 0; i < counts.length; i++) {
            if (i % 10 == 0) {
                System.out.println();
            }

            char x = (char) (i + 'a');
            System.out.print(x + ", " + counts[i] + " : ");
        }
    }

    // Method to count letters of each characters
    private static int[] countLetters(char[] chars) {
        // Create an array for all 26 letters

        // Count the occurrences for each letter

        return null;
    }

    // Method to display letters
    private static void dispayArray(char[] chars) {
        // Display letters, 20 per line
        for (int i = 0; i <chars.length; i++) {
            if (i % 20 == 0) {
                System.out.println();
            }

            System.out.println(chars[i] + " ");
        }
    }

    // Method for random characters
    private static char[] createArray() {
        // Create an array of 100 characters
        char[] chars = new char[100];

        // create lowercase letters randomly
        for (int i = 0; i < chars.length; i++) {
            chars[i] = (char) (Math.random() * ('z' - 'a') + 'a');
        }

        return char[];
    }
}
