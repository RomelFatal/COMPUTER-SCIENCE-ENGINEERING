import java.util.Scanner;

// BlackJack class for game
public class Blackjack {

    // Methods for repetitive game functions
    // Print the game selection
    public static void printMenu() {
        System.out.println("1. Get another card");
        System.out.println("2. Hold hand");
        System.out.println("3. Print statistics");
        System.out.println("4. Exit\n");
    }

    // Get card value
    public static int getCardValue(int cardNumber) {
        int value;

        // When card is JACK or QUEEN or KING, value is 10
        if (cardNumber == 11 || cardNumber == 12 || cardNumber == 13) {
            value = 10;
        }
        // When card is ACE
        else if (cardNumber == 1) {
            value = 1;
        }
        // All other cards has the same value as card number
        else {
            value = cardNumber;
        }
        return value;
    }

    // Get card number
    public static void printCardName(int cardNumber) {
        String name;
        switch(cardNumber) {
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
                break;
        }
        System.out.println("Your card is a " + name + "!");
    }

    // Method to determine the game winner
    public static int determineGameOutcome(int dealerHand, int playerHand) {
        int result;
        int gameTied = 0;
        int dealerWin = 1;
        int playerWin = 2;
        int noWinterYet = -1;

        if (dealerHand > 21 || playerHand == 21) {
            result = playerWin;
        } else if (playerHand > 21) {
            result = dealerWin;
        } else if (dealerHand == playerHand) {
            result = gameTied;
        } else {
            result = noWinterYet;
        }
        return result;
    }

    // Method to show who wins the game
    public static void printHoldHandWinner(int gameOutcome) {
        if (gameOutcome == 0) {
            System.out.println("It's a tie! No one wins!\n");
        } else if (gameOutcome == 1) {
            System.out.println("Dealer wins!\n");
        } else if (gameOutcome == 2) {
            System.out.println("You win!\n");
        }
    }
    // Get card name and display the type of card
    public static void printHand(int card, int hand) {
        String name;
        switch(card) {
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
                name = "" + card;
                break;
        }

        System.out.println("Your card is a " + name + "!");
        System.out.println("Your hand is: " + hand);
        System.out.println();
    }
    // Determine if game is over
    public static boolean isGameOver(int gameResult) {
        return gameResult != -1;
    }
    // Display message when player wins
    public static void printPlayerGameResult(int playerHand) {
        if(playerHand == 21) {
            System.out.println("BLACKJACK! You win!\n");
        } else if (playerHand > 21) {
            System.out.println(("You exceeded 21! You lose.\n"));
        }
    }



    public static void main(String[] args) {
        /*
         *   Title: Project1 - BlackJack Game
         *   Author: Romel Fatal
         *   Date: 01/28/2022
         */

        // Variables declaration
        /*----------------------- */

        // Scanner to get user input value
        Scanner gameOptions = new Scanner(System.in);
        // Random number generator
        P1Random range = new P1Random();


        // Game and program variables
        int selectMenu = 0,
                gameNumber = 0,
                dealerHand = 0,
                playerHand = 0,
                tiedGames = 0,
                playerWins = 0,
                dealerWins = 0,
                gameResult = 0;
        boolean startNewGame = true;


        // Let's play BlackJack!
        boolean playGame = true;
        while (playGame) {
            int card;
            if (startNewGame) {
                // Reset the game
                playerHand = 0;
                dealerHand = 0;
                card = 0;

                // Start game
                System.out.println("START GAME #" + (gameNumber + 1));
                System.out.println();

                // Draw player's initial card
                card = range.nextInt(13) + 1;
                playerHand = getCardValue(card);
                printHand(card, playerHand);
            }

            // Print menu and get user selected menu choice
            printMenu();
            System.out.print("Choose an option: ");
            selectMenu = gameOptions.nextInt();
            System.out.println();


            switch (selectMenu) {
                case 1: // User select to get another card
                    // B. get other generate card for user --> Random class
                    card = range.nextInt(13) +1;
                    int cardValue = getCardValue(card);

                    // C. Compute player's hand
                    playerHand = playerHand + cardValue;
                    printHand(card, playerHand);

                    // D. Determine the winner of this game
                    gameResult = determineGameOutcome(dealerHand, playerHand);
                    startNewGame = isGameOver(gameResult);
                    if (startNewGame) {
                        //gameNumber += 1;
                        printPlayerGameResult(playerHand);
                        if (gameResult == 0) {
                            tiedGames += 1;
                        }
                        else if (gameResult == 1) {
                            dealerWins += 1;
                        }
                        else  if (gameResult == 2) {
                            playerWins += 1;
                        }
                        gameNumber += 1;
                    }
                    break;
                case 2: // User select to hold hand
                    // B. Generate the dealer Hand --> generate random number between 16 && 21
                    dealerHand = range.nextInt(11) + 16;
                    System.out.println("Dealer's hand : " + dealerHand);
                    System.out.println("Your hand is: " + playerHand);
                    System.out.println();

                    // C. Determine the winner of this game
                    gameResult = determineGameOutcome(dealerHand, playerHand);
                    if (gameResult == 0) {
                        tiedGames += 1;
                    }
                    else if (gameResult == 1) {
                        dealerWins += 1;
                    }
                    else  if (gameResult == 2) {
                        playerWins += 1;
                    }
                    else {
                        if (playerHand > dealerHand) {
                            playerWins += 1;
                            gameResult = 2;
                        } else {
                            dealerWins += 1;
                            gameResult = 1;
                        }
                    }
                    printHoldHandWinner(gameResult);
                    startNewGame = true;
                    gameNumber += 1;
                    break;
                case 3:
                    // Compute and display game statistics
                    double percentPlayerWins = 0;
                    if (gameNumber != 0) {
                        percentPlayerWins = ((double) playerWins / gameNumber) * 100;
                    }
                    System.out.println("Number of Player wins: " + playerWins);
                    System.out.println("Number of Dealer wins: " + dealerWins);
                    System.out.println("Number of tie games: " + tiedGames);
                    System.out.println("Total # of games played is: " + gameNumber);
                    System.out.println("Percentage of Player wins: " + percentPlayerWins + "%\n");
                    startNewGame = false;
                    break;
                case 4:
                    playGame = false;
                    break;

                default:
                    System.out.println("Invalid input!");
                    System.out.println("Please enter an integer value between 1 and 4.\n");
                    startNewGame = false;
                    break;
            }
        }
    }
}
