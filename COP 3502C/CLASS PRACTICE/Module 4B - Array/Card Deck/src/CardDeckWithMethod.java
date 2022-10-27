public class CardDeckWithMethod {
    public static void main(String[] args) {
        // Variables
        int[] deck = new int[52];

        initialize(deck);
        shuffle(deck);
        display(deck);
    }

    // Method to display deck
    private static void display(int[] deck) {
        String[] suits = {"Spades", "Hearts", "Diamonds", "Clubs"};
        String[] ranks = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "queen",
                "King"};

        // Display first four cards, its suits and its rank
        for (int i = 0; i < 4; i++) {
            // Accessing the suits array
            String suit = suits[deck[i] / 13];
            // Accessing the ranks array
            String rank = ranks[deck[i] % 13];
            System.out.println(rank + " of " + suit);
        }
    }

    // Method to shuffle the deck
    private static void shuffle(int[] deck) {
        // Shuffle deck
        for (int i = deck.length - 1; i >= 0; i--) {
            int j = (int) (Math.random() * (i + 1));
            int temp = deck[i];
            deck[i] = deck[j];
            deck[j] = temp;
        }
    }
    // Method for array
    private static void initialize(int[] deck) {
        // Initialize deck
        // 0...12 = spades
        // 13...25 = hearts
        // 26...38 = diamonds
        // 39...51 = clubs
        for (int i = 0; i < deck.length; i++) {
            deck[i] = i;
        }

    }
}
