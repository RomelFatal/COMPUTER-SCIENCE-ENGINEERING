///**
// * Definition of the driving class
// * @author Romel Fatal
// * @version 1.0
// * @March 21, 2022
// */
//// Import scanner object for user inputs
//import java.util.Scanner;
//
//public class PakuriProgram {
//    public static void main(String[] args) {
//        // Variable declaration
//        Scanner userInput = new Scanner(System.in);
//        int size = 0,
//                userChoice = 0;
//        boolean runChoice = false,
//                gameTerminate = false,
//                correctChoice = false;
//
//        // Display prompts
//        System.out.println("Welcome to Pakudex: Tracker Extraordinaire!");
//
//        while (!runChoice) {
//            System.out.print("Enter max capacity of the Pakudex: ");
//            String speciesCapacity = userInput.next();
//
//            try {
//                size = Integer.parseInt(speciesCapacity);
//                if (size < 1) {
//                    System.out.println("Please enter a valid size.");
//                    runChoice = true;
//                } else {
//                    runChoice = true;
//                }
//            } catch (Exception e) {
//                System.out.println("Please enter a valid size.");
//                runChoice = false;
//            }
//        }
//
//        System.out.println("The Pakudex can hold " + size + " species of Pakuri.\n");
//
//        Pakudex pakudexSpecies = new Pakudex(size);
//
//        while (!gameTerminate) {
//            while (!correctChoice && !gameTerminate) {
//                // Display Menu to user
//                System.out.println("Pakudex Main Menu \n----------------- \n" +
//                        "1. List Pakuri\n" +
//                        "2. Show Pakuri\n" +
//                        "3. Add Pakuri\n" +
//                        "4. Evolve Pakuri\n" +
//                        "5. Sort Pakuri\n" +
//                        "6. Exit\n");
//
//                System.out.print("What would you like to do? ");
//                String inputChoice = userInput.next();
//
//                try {
//                    userChoice = Integer.parseInt(inputChoice);
//
//                    switch (userChoice) {
//                        // List Pakuri from array of Pakuri
//                        case 1:
//                            Pakuri[] kuriArray = pakudexSpecies.getSpeciesArray();
//
//                            // Account for when Pakuri have not yet been added
//                            if (kuriArray == null) {
//                                System.out.println("No Pakuri in Pakudex yet!");
//                                System.out.println();
//                                break;
//                            }
//
//                            // When the first item of the Pakuri array is still empty
//                            if (kuriArray[0] == null) {
//                                System.out.println("No Pakuri in Pakudex yet!");
//                                System.out.println();
//                                break;
//                            }
//
//                            // Return Pakuri in Pakudex if array is not empty
//                            System.out.println("Pakuri in Pakudex: ");
//                            for (int i = 0; i < kuriArray.length; i++) {
//                                if (kuriArray[i] != null) {
//                                    System.out.println(i + 1 + ". " + kuriArray[i].getSpecies());
//                                }
//                            }
//                            System.out.println();
//                            break;
//                        case 2:
//                            System.out.print("Enter the name of the species to display: ");
//                            String currentDisplayName = userInput.next();
//                            Pakuri[] displayKuri = pakudexSpecies.getSpeciesArray();
//
//                            // Account for when Pakuri have not yet been added
//                            if (displayKuri == null) {
//                                System.out.println("Error: No such Pakuri!\n");
//                                break;
//                            }
//
//                            // When the first item of the Pakuri array is still empty
//                            if (displayKuri[0] == null) {
//                                System.out.println("Error: No such Pakuri!\n");
//                                break;
//                            }
//
//                            boolean boolControl = false;
//                            // Display species statistics
//                            for (int i = 0; i < displayKuri.length; i++) {
//                                if (displayKuri[i] != null && displayKuri[i].getSpecies().equals(currentDisplayName)) {
//                                    boolControl = true;
//
//                                    int[] statsArr = pakudexSpecies.getStats(currentDisplayName);
//                                    System.out.println();
//                                    System.out.println("Species: " + currentDisplayName);
//                                    System.out.println("Attack: " + statsArr[0]);
//                                    System.out.println("Defense: " + statsArr[1]);
//                                    System.out.println("Speed: " + statsArr[2]);
//                                    System.out.println();
//                                }
//                            }
//                            if (boolControl == false) {
//                                System.out.println("Error: No such Pakuri\n");
//                            }
//                            break;
//                        // Add Pakuri species from species array
//                        case 3:
//                            Pakuri[] addKuri = pakudexSpecies.getSpeciesArray();
//
//                            // When there is a Pakuri holding in the first spot of the
//                            // pakudexSpecies and Pakudex cap is at 1
//                            if (addKuri != null && addKuri[0] != null && addKuri.length == 1) {
//                                System.out.println("Error: Pakudex is full!");
//                            } else if (addKuri != null && addKuri[addKuri.length - 1] != null) {
//                                System.out.println("Error: Pakudex is full!");
//                            } else {
//                                System.out.print("Enter the name of the species to add: ");
//                                String speciesName = userInput.next();
//                                pakudexSpecies.addPakuri(speciesName);
//                            }
//                            System.out.println();
//                            break;
//                        case 4:
//                            System.out.print("Enter the name of the species to add: ");
//                            String evolveKuriName = userInput.next();
//                            try {
//                                Pakuri[] kuriSpeciesArray = pakudexSpecies.getSpeciesArray();
//                                int speciesCount = 0;
//                                for (Pakuri kuri : kuriSpeciesArray) {
//                                    speciesCount++;
//                                    if (kuri.getSpecies().equals(evolveKuriName)) {
//                                        pakudexSpecies.evolveSpecies(evolveKuriName);
//                                        System.out.println(evolveKuriName + " has evolved!\n");
//                                        break;
//                                        // When speciesCount equal to the last spot in the array,
//                                        // that spot in the array in not empty
//                                    } else if (speciesCount == kuriSpeciesArray.length - 1) {
//                                        System.out.println("Error: No such Pakuri!\n");
//                                        break;
//                                    }
//                                }
//                            } catch (Exception e) {
//                                System.out.println("Error: No such Pakuri!\n");
//                            }
//                            break;
//                        case 5:
//                            // Since species array will hold small number of species, linear
//                            // search is used to search through and sort Pakuri species in
//                            // alphabetical order
//                            Pakuri[] unsortedKuriArray = pakudexSpecies.getSpeciesArray();
//
//                            for (int i = 0; i < unsortedKuriArray.length; i++) {
//                                for (int j = i + 1; j < unsortedKuriArray.length; j++) {
//                                    if (unsortedKuriArray[j] != null) {
//                                        int speciesCompare =
//                                                unsortedKuriArray[i].getSpecies().compareTo(unsortedKuriArray[j].getSpecies());
//                                        if (speciesCompare > 0) {
//                                            Pakuri temp = unsortedKuriArray[j];
//                                            unsortedKuriArray[j] = unsortedKuriArray[i];
//                                            unsortedKuriArray[i] = temp;
//                                        }
//                                    }
//                                }
//                            }
//                            System.out.println("Pakuri have been sorted!");
//                            System.out.println();
//                            break;
//                        case 6:
//                            // Exit the while loop
//                            System.out.println("Thanks for using Pakudex! Bye!");
//                            gameTerminate = true;
//                            break;
//                        default:
//                            System.out.println("Unrecognized menu selection!");
//                            System.out.println();
//                            break;
//                    }
//                } catch (Exception e) {
//                    System.out.println("Unrecognized menu selection!\n");
//                    correctChoice = false;
//                }
//            }
//        }
//    }
//}