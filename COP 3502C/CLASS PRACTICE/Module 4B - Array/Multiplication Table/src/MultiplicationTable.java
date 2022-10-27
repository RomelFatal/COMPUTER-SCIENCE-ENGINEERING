public class MultiplicationTable {
    public static void main(String[] args) {
        // Variables
        int[][] table = new int[10][10];

        // Calculate the values
        for (int i = 0; i < table.length; i++) {
            for (int j = 0; j < table[i].length; j++) {
                // Start the values of the table at 1
                table[i][j] = (i + 1) * (j + 1);
            }
        }

        // Display the table
        for (int i = 0; i < table.length; i++) {
            for (int j = 0; j < table[i].length; j++) {
                System.out.print(table[i][j] + " ");
            }
            System.out.println();
        }
    }
}
