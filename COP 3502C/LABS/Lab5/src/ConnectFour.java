// Import Java Scanner utility
import java.util.Scanner;

public class ConnectFour {
    public static void main(String[] args) {
        /*
        Lab 5: Connect Four
        Author: Romel Fatal
        Date: 02/25/2022
        */

        // Variables for program
        // Variable to read input from the user
        Scanner input = new Scanner(System.in);

        // Variables for the game board dimension
        int boardRow, boardColumn, playerColumnChoice,
                chipPosition = 0;

        /* Determine the state of the game
         * Determine who wins the game and if the game was a draw
         */
        boolean player1 = true;
        boolean playingGame = true, gameResult = false;

        // Variables to represent chip type
        char player;

        // Collect user input for game board dimension
        System.out.print("What would you like the height of the board to be? ");
        boardRow = input.nextInt();
        System.out.print("What would you like the length of the board to be? ");
        boardColumn = input.nextInt();
        System.out.println();

        // Game board dimension array
        char[][] boardSize = new char[boardRow][boardColumn];

        // Display the board
        initializeBoard(boardSize);
        printBoard(boardSize);


        // Let the players know what their tokens are
        System.out.println("Player 1: x");
        System.out.println("Player 2: o \n");

        for (int i = 0; i < boardRow * boardColumn; i++) {
            if (player1) {
                System.out.print("Player 1: ");
                player = 'x';
            } else {
                System.out.print("Player 2: ");
                player = 'o';
            }

            // Test this with another loop
            System.out.print(" Which column would you like to choose? ");
            playerColumnChoice = input.nextInt();

            if (playerColumnChoice < 0 || playerColumnChoice >= boardColumn) {
                System.out.println("Please enter an integer between 0 and " + (boardColumn - 1));
            } else {
                chipPosition = insertChip(boardSize, playerColumnChoice, player);
                if (chipPosition == - 1) {
                    System.out.println("There is no room to insert chip. Please try again!");
                } else {
                    printBoard(boardSize);
                    gameResult = checkIfWinner(boardSize, playerColumnChoice, chipPosition,
                            player);
                    if (gameResult) {
                        if (player1) {
                            System.out.println("Player 1 won the game!");
                            return;
                        } else {
                            System.out.println("Player 2 won the game!");
                            return;
                        }
                    }
                }
            }
            player1 = !player1;
        }
        System.out.println("Draw. Nobody wins.");
    }

    /* This program uses four methods to run the game
     * */

    // 1) Method to display the board to the user
    public static void printBoard(char[][] array) {
        // Height of the board
        for (int row = array.length - 1; row >= 0; row--) {
            // Length of the board
            for (int col = 0; col < array[row].length; col++) {
                // Draw the board
                System.out.print(array[row][col] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }

    // 2) Method to initialize the board
    public static void initializeBoard(char[][] array) {
        for (int row = 0; row < array.length; row++) {
            for (int col = 0; col < array[row].length; col++) {
                array[row][col] = '-';
            }
        }
    }

    // 3) Method to insert
    public static int insertChip(char[][] array, int col, char chipType) {
        int row = 0;
        for (int i = 0; i < array.length; i++) {
            if (array[i][col] == '-') {
                array[i][col] = chipType;
                row = i;
                break;
            }
        }
        return row;
    }

    // 4) Method to determine state of the game
    // Need char [][] array = boardSize
    // Need int col = boardColumn
    // Need int row = boardRow
    // Need char chipType = Player chips - in this case the player chip is either
    // player one or player two
    public static boolean checkIfWinner(char[][] array, int col, int row, char chipType) {
        // Determine who wins the game
        boolean result = false, tiedGame = true, gameWinner = true;
        int countChipType = 0;
        int variable1 = 0, variable2 = 0;

        // Search the array to determine if one chip repeats 4 times in a row
        // 1st loop checks for row win
        for (int i = 0; i < array.length; i++) {
            if (array[i][col] == chipType) {
                countChipType++;
                if (countChipType == 4) {
                    result = gameWinner;
                    return result;
                }
            } else {
                countChipType = 0;
            }
        }

        // 2nd loop check for column win
        for (int i = 0; i < array[0].length; i++) {
            if (array[row][i] == chipType) {
                countChipType++;
                if (countChipType == 4) {
                    result = gameWinner;
                    return result;
                }
            } else {
                countChipType = 0;
            }
        }

        // Check if the game is timed
        for (int i = 0; i < array.length; i++) {
            variable1 = array[i][col];
            for (int j = 0; j < array[i].length; j++) {
                variable2 = array[i][j];
                if (variable2 == '-') {
                    return result;
                }
            }
        }

        return result;
    }
}