public class Factorial {
    // Method 1
    public static long pureRecursive(int n) {
        if (n == 0) {
            // Throw exception for illegal arguments
            throw new IllegalArgumentException();
        } else if (n == 1) {
            // Return the first value of n
            return 1;
        } else {
            // Return the factorial of n
            return n * pureRecursive(n -1);
        }
    }

    // Method 1
    public static long tailRecursive(int n) {
        tail(n, 1);
        return 0;
    }

    // Helper tail method
    private static long tail(int n, long sumVaule) {
        // Throw exception when n = 0
        if (n == 0) {
            throw new  IllegalArgumentException();
        }
        else if (n == 1) {
            return sumVaule;
        } else {
            return tail(n - 1, sumVaule * n);
        }
    }

    // Method to sum all values
    public static long iterative(int n) {
        long summation = 1;
        for (int index = 0; index <= n; index++) {
            summation = summation * index;
        }
        return summation;
    }
}
