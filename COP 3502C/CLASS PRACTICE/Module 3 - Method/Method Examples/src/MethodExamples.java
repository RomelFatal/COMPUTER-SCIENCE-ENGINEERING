public class MethodExamples {
    // Method to print n times
    public static void nPrint(String message, int n) {
        for (int i = 0; i < n; i++) {
            System.out.println(message);
        }
    }

    // Method for sum
    public static int sumMethod(int start, int end) {
        int returnSum = 0;
        for (int i = start; i < end; i++) {
            returnSum += i;
        }
        return returnSum;
    }

    public static void main(String[] args) {
        // Variables
        int sum;

        // Print "Hello" n times
//        for (int i = 0; i < 5; i++) {
//            System.out.println("Hello");
//        }
        // Replace with nPrint METHOD CALL
        nPrint("Hello", 5);


//        for (int i = 0; i < 2; i++) {
//            System.out.println("Goodbye");
//        }
        // Replace with nPrint METHOD CALL
        nPrint("Goodbye", 2);


//        for (int i = 0; i < 3; i++) {
//            System.out.println("Cat");
//        }
        // Replace with nPrint METHOD CALL
        nPrint("Cat", 3);


        // Sum numbers between two ints
//        sum = 0;
//        for (int i = 3; i < 10; i++) {
//            sum += i;
//        }
//        System.out.println("Sum from 3 to 10 is " + sum);
        // Replace with sumMethod METHOD CALL
        sum = sumMethod(3, 10);
        System.out.println("Sum from 3 to 10 is " + sum);


//        sum = 0;
//        for (int i = -5; i < 2; i++) {
//            sum += i;
//        }
//        System.out.println("Sum from -5 to 2 is " + sum);
        // Replace with sumMethod METHOD CALL
        sum = sumMethod(-5, 2);
        System.out.println("Sum from -5 to 2 is " + sum);


//        sum = 0;
//        for (int i = 50; i < 136; i++) {
//            sum += i;
//        }
//        System.out.println("Sum from 50 to 136 is " + sum);
        // Replace with sumMethod METHOD CALL
        sum = sumMethod(50, 136);
        System.out.println("Sum from 50 to 136 is " + sum);
    }



    int gameResult = determineGameOutcome(dealerHand, playerHand)

    // Print the menu
    public static void printMenu() {
        System.out.println("1. Get another card");
        System.out.println("2.Hold hand");
        System.out.println("3. Print statistics");
        System.out.println("4. Exit");
    }

    // Get card value
    public static int getCardValue(int cardNumber) {
        // Value of card
        int value;

        // When card is JACK or QUEEN or KING, value is 10
        if (cardNumber == 11 || cardNumber == 12 || cardNumber == 13) {
            value = 10;
        }
        // When card is an ACE
        else if (cardNumber == 1) {
            value = 1;
        }
        else {
            value = cardNumber;
        }
        return value;
    }

    // Get card number
    public static void printCardName(int cardNumber) {
        String name;
        switch (cardNumber) {
            case 1:
                name = "ACE";
                break;
            case 11:
                name = "JACK";
                break;
            case 12:
                name = "QUEEN";
                break;
            case 13:
                name = "KING";
                break;

            default:
                name = "" + cardNumber;
        }
        System.out.println("Your card is " + name + "!");
    }


    public static int determineGameOutcome(int dealerHand, int playerHand) {
        // Variables
        int result;
        int gameTied = 0;
        int dealerWin = 1;
        int playerWin = 2;

        // This method determines which player wins the game OR if the game is tied
        // 0. If game is tied
        // 1. If dealer wins
        // 2. If player wins

        if (dealerHand > 21) {
            result = playerWin;
        }
        else if (playerHand > 21) {
            result = dealerWin;
        }
        else if (dealerHand == playerHand) {
            result = gameTied;
        }
        else {
            // Compare the two result for winner
            if (playerHand > dealerHand) {
                result = playerWin;
            }
            else {
                result = dealerWin;
            }
        }
        return result;
    }


    public static void  printHoldHandWinner(int gameOutCome) {
        if (gameOutCome == 0) {
            System.out.println("It's a tie! No one wins!");
        }
        else if (gameOutCome == 1) {
            System.out.println("Dealer wins!");
        }
        else if (gameOutCome == 2) {
            System.out.println("You win!");
        }
    }

}
