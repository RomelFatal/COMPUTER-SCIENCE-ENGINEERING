/**
 * Driver class for Cow class
 * @par command-line arguments
 * @see
 */

public class Cowsay {
    // Method to display the list of available cows
    private static void listCows(Cow[] cows) {
        System.out.print("Cows available: ");
        for (int i = 0; i < cows.length; i++) {
            System.out.print(cows[i].getName() + " ");
        }
        System.out.println();
        System.out.println();
    }

    // Method for cow array objects and return cow objects
    private static Cow findCow(String name, Cow[] cows) {
        for (int i = 0; i < cows.length; i++) {
            if (cows[i].getName().equals(name)) {
                return cows[i];
            }
        }
        return null;
    }

    public static void main(String[] args) {
        Cow[] cows = HeiferGenerator.getCows();
        if (args.length > 0) {
            switch (args[0]) {
                case "-l":
                    listCows(cows);
                    break;
                case "-n":
                    Cow cow = findCow(args[1], cows);
                    if (cow == null) {
                        System.out.println("Could not find " + args[1] + " cow!");
                        System.out.println();
                    } else {
                        if (args.length == 2) {
                        } else {
                            System.out.println();
                            for (int i = 2; i < args.length; i++) {
                                System.out.print(args[i] + " ");
                            }
                        }
                        System.out.println();
                        System.out.println(cow.getImage());

                        // Displaying the dragons
                        if (cow.getName() == "dragon") {
                            System.out.println("This dragon can breathe fire. \n");
                        } else if (cow.getName() == "ice-dragon") {
                            System.out.println("This dragon cannot breathe fire. \n");
                        }
                    }
                    break;
                default:
                    cow = findCow(args[0], cows);
                    System.out.println();
                    for(String UserInput:args) {
                        System.out.print(UserInput + " ");
                    }
                    System.out.println();
                    System.out.println(cows[0].getImage());
                    if (cow != null) {
                        System.out.println(cow.getImage());
                    }
            }
        }
    }
}
