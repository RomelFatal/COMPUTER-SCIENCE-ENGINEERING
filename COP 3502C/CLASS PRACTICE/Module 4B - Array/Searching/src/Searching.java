public class Searching {
    public static void main(String[] args) {
        // Variables
        int[] numbers = new int[100];
        int searchIndex, searchValue;

        // Fill numbers with random values
        fillRandom(numbers);
        searchValue = (int) (Math.random() * 100);

        // Display numbers
        display(numbers);

        // Call linear search
        searchIndex = linearSearch(numbers, searchValue);
        if (searchIndex != -1) {
            System.out.println("The value of " + searchValue + " is at index " + searchIndex);
        } else {
            System.out.println("The value of " + searchValue + " is not in the array.");
        }

        // Call binary search and sort the array
        selectionSort(numbers);
        display(numbers);

        searchIndex = binarySearch(numbers, searchValue);
        if (searchIndex != -1) {
            System.out.println("The value of " + searchValue + " is at index " + searchIndex);
        } else {
            System.out.println("The value of " + searchValue + " is not in the array.");
        }
    }

    // Method for binary search
    private static int binarySearch(int[] numbers, double searchValue) {
        int searchIndex = -1;
        int start = 0, end = numbers.length - 1, mid;
        while (end >= start && searchIndex == -1) {
            mid = (end + start) / 2;
            if (numbers[mid] < searchValue) {
                start = mid + 1;
            } else if (numbers[mid] > searchValue) {
                end = mid - 1;
            } else // We've found it
                searchIndex = mid;
        }
        return -1;
    }

    // Method to sort array using selection sort
    private static void selectionSort(int[] numbers) {
        int minIndex;
        for (int i = 0; i <numbers.length; i++) {
            minIndex = findMin(numbers, i);
            swap(numbers, i, minIndex);
        }
    }

    // Method to swap array elements
    private static void swap(int[] numbers, int i, int minIndex) {
        int temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }

    // Method to find min index
    private static int findMin(int[] numbers, int start) {
        int minIndex = start;
        for (int i = start + 1; i < numbers.length; i++) {
            if (numbers[i] < numbers[minIndex]) {
                minIndex = i;
            }
        }
        return 0;
    }

    // Method for linear search
    private static int linearSearch(int[] numbers, double searchValue) {
        int searchIndex = -1;
        for (int i = 0; i < numbers.length && searchIndex == -1; i++) {
            if (numbers[i] == searchValue) {
                searchIndex = i;
            }
        }

        return -1;
    }

    // Method to display numbers
    private static void display(int[] numbers) {
        for (int i = 0; i < numbers.length; i++) {
            if (i % 10 == 0) {
                System.out.println();
            }
            System.out.print(numbers[i] + " ");
        }
        System.out.println();
    }

    // Method to fill random numbers
    private static void fillRandom(int[] numbers) {
        for (int i = 0; i <numbers.length; i++) {
            numbers[i] = (int) (Math.random() * 100);
        }
    }
}
