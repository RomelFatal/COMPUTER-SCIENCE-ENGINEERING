//import java.util.Scanner;
//
//public class RleProgram {
//
//    // Method for menu
//    public static void printMenu() {
//        System.out.println("RLE Menu\n" +
//                "--------\n" +
//                "0. Exit\n" +
//                "1. Load File\n" +
//                "2. Load Test Image\n" +
//                "3. Read RLE String\n" +
//                "4. Read RLE Hex String\n" +
//                "5. Read Data Hex String\n" +
//                "6. Display Image\n" +
//                "7. Display RLE String\n" +
//                "8. Display Hex RLE Data\n" +
//                "9. Display Hex Flat Data\n");
//    }
//
//    // Method 1
////    public static String toHexString(byte[] data) {
////        byte[] arr = encodedRle(data);
////        return numsToLeters(arr);
////    }
////    // Method 2
////    public static int countRuns(byte[] flatData) {
////
////    }
////    // Method 3
////    public static byte[] encoded(byte[] flatData) {}
////    // Method 4
////    public static int getDecodedLength(byte[] rleData){}
////    // Method 5
////    public static byte[] decodedRle(byte[] rleData){}
////    // Method 6
////    public static byte[] stringToData(String dataString){}
////    // Method 7
////    public static String toRleString(byte[] rleData){}
////    // Method 8
////    public static byte[] stringToRle(String rleString){}
//
//
//    public static void main(String[] args) {
//        // Variables declaration
//        Scanner userInput = new Scanner(System.in);
//
//        String inputString;
//        byte[] loadImage = new byte[0];
//        boolean selection = true;
//        int menuSelection = 0;
//
//        // 1. Display welcome message
//        System.out.println("Welcome to the RLE image encoder!\n");
//
//        // 2. Display color test with the message
//        System.out.println("Displaying Spectrum Image:");
//        ConsoleGfx.displayImage(ConsoleGfx.testRainbow);
//        System.out.println();
//
//        byte[] imageData = null;
//
//        // 3. Display the menu - Part A: while loop or if-else chains
//        // option 1, option 2 and option 6
//        while (selection) {
//            printMenu();
//
//            // Menu selection
//            System.out.print("Selection a Menu Option: ");
//            menuSelection = userInput.nextInt();
//
//            // Menu option when user selects 0
//            if (menuSelection == 0) {
//                break;
//            }
//            else if (menuSelection == 1) {
//                // Menu option when user selects 1
//                System.out.print("Enter name of file to load: ");
//                String fileName = userInput.next();
//                loadImage = ConsoleGfx.loadFile(fileName);
//                System.out.println();
//
//            }
//            else if (menuSelection == 2) {
//                // Menu option when user selects 2
//                loadImage = ConsoleGfx.testImage;
//                System.out.println("Test image data loaded.\n");
//            }
//            else if (menuSelection ==3 ) {
//                // Menu option when user selects 4
//            }
//            else if (menuSelection == 4) {
//                // Menu option when user selects 4
//            }
//            else if (menuSelection == 5) {
//                // Menu option when user selects 5
//            }
//            else  if (menuSelection == 6) {
//                // Menu option when user selects 6
//                System.out.println("Displaying image...\n");
//                ConsoleGfx.displayImage(loadImage);
//                // Any image that was load should display then
//            }
//            else if (menuSelection == 7) {
//                // Menu option when user selects 7
//            }
//            else if (menuSelection == 8) {
//                // Menu option when user selects 8
//            }
//            else if (menuSelection == 9) {
//                // Menu option when user selects 9
//            }
//            else {
//                // For any other options display an error
//                System.out.println("Error. Choose another options.");
//            }
//        }
//
//
//        // 3.1 - option 1
//        // ConsoleGfx.loadFile(userInput) and you want to store the returned byte[] into imageData array
//
//
//        // 3.2 - option 2
//        // store ConsoleGfx.testImage into the imageData array
//
//
//        // 3.6 - option 6
//        // display image stored inside of imageData array
//
//        // user might first enter 1 -> 6 or 2 -> 6
//
//        // complete option 0,3,4,5,7,8,9
//
//        // 4. Prompt for input
//    }
//}
//


import java.nio.charset.StandardCharsets;
import java.util.Scanner;

public class RleProgram {

    public static void main(String[] args) {
        Scanner inputConsoleScanner = new Scanner(System.in);
        int menuExitOption = 0;
        int userSelectedMenu;
        String userEnteredLine;
        byte[] encodedData;

        // Project specific data
        byte[] loadedImage = new byte[]{};


        System.out.println("Welcome to the RLE image encoder!");
        System.out.println();

        System.out.println("Displaying Spectrum Image: ");
        ConsoleGfx.displayImage(ConsoleGfx.testRainbow);

        do {
            System.out.println();
            printRleMenu();
            userSelectedMenu = inputConsoleScanner.nextInt();
            inputConsoleScanner.nextLine(); // Added to make sure that the new line character is read

            // Handle the different menu option
            switch (userSelectedMenu) {
                case 0: // User selected to exit the program. Do nothing
                    break;
                case 1: // Load file (get fileName from user input console)
                    System.out.print("Enter name of file to load: ");
                    userEnteredLine = inputConsoleScanner.nextLine();
                    loadedImage = ConsoleGfx.loadFile(userEnteredLine);
                    break;
                case 2: // Load test file
                    loadedImage = ConsoleGfx.testImage;
                    System.out.println("Test image data loaded.");
                    break;
                case 3: // Read RLE String
                    System.out.print("Enter an RLE string to be decoded: ");
                    userEnteredLine = inputConsoleScanner.nextLine();
                    encodedData = stringToRle(userEnteredLine); // translate human-readable RLE to to byte data (encoded RLE)
                    loadedImage = decodeRle(encodedData); // Decode RLE & save flat data
                    break;
                case 4: // Read RLE Hex String
                    System.out.print("Enter the hex string holding RLE data: ");
                    userEnteredLine = inputConsoleScanner.nextLine();
                    encodedData = stringToData(userEnteredLine); // translate hex to byte data (encoded RLE)
                    loadedImage = decodeRle(encodedData); // Decode RLE & save flat data
                    break;
                case 5: // Read Data Hex String
                    System.out.print("Enter the hex string holding flat data: ");
                    userEnteredLine = inputConsoleScanner.nextLine();
                    loadedImage = stringToData(userEnteredLine); // convert String to byte and save flat content
                    break;
                case 6: // Display image
                    System.out.println("Displaying image...");
                    if (loadedImage.length != 0) {
                        ConsoleGfx.displayImage(loadedImage);
                    } else {
                        System.out.println("(no data)");
                    }
                    break;
                case 7: // RLE String
                    String rle = "(no data)";
                    if (loadedImage.length != 0) {
                        byte[] encodedRle = encodeRle(loadedImage);
                        rle = toRleString(encodedRle);
                    }
                    System.out.print("RLE representation: " + rle + "\n");
                    break;
                case 8: // Hex RLE Data
                    String rleHexData = "(no data)";
                    if (loadedImage.length != 0) {
                        byte[] encodedRle = encodeRle(loadedImage);
                        rleHexData = toHexString(encodedRle);
                    }
                    System.out.print("RLE hex values: " + rleHexData + "\n");
                    break;
                case 9: // Hex Flat Data
                    String rleHexFlatData = "(no data)";
                    if (loadedImage.length != 0) {
                        rleHexFlatData = toHexString(loadedImage);
                    }
                    System.out.print("Flat hex values: " + rleHexFlatData + "\n");
                    break;
                default: // Unsupported menu option choice. Display error to user
                    System.out.println("Error! Invalid input.");
                    break;
            }
        } while (userSelectedMenu != menuExitOption); // continue looping until user decide to exit
        System.out.println("Exiting out the program");
    }

    public static void printRleMenu() {
        System.out.println("RLE Menu");
        System.out.println("--------");
        System.out.println("0. Exit");
        System.out.println("1. Load File");
        System.out.println("2. Load Test Image");
        System.out.println("3. Read RLE String");
        System.out.println("4. Read RLE Hex String");
        System.out.println("5. Read Data Hex String");
        System.out.println("6. Display Image");
        System.out.println("7. Display RLE String");
        System.out.println("8. Display Hex RLE Data");
        System.out.println("9. Display Hex Flat Data");
        System.out.println();
        System.out.print("Select a Menu Option: ");
    }

    /**
     * This is a test method and should be deleted before finalizing this game
     * @param data
     * @return
     */
    public static String byteToString(byte[] data) {
        String result = "{";
        for (int i = 0; i < data.length; i++) {
            result += data[i];
            if (i + 1 != data.length) {
                result += ", ";
            }
        }
        result += "}";
        return result;
    }

    /**
     * input:   new byte[] { 3, 15, 6, 4 }
     * output:  "3f64"
     *
     * @param data
     * @return
     */
    public static String toHexString(byte[] data) {
        String result = "";
        for (int i = 0; i < data.length; i++) {
            result += String.format("%01x", data[i]);
        }
        return result;
    }

    /**
     * input:   new byte[] { 15, 15, 15, 4, 4, 4, 4, 4, 4 }
     * output   2
     *
     * @param flatData
     * @return
     */
    public static int countRuns(byte[] flatData) {
        byte previousRunValue = 0;
        int numberRuns = 0;
        for (int i = 0; i < flatData.length; i++) {
            if (i == 0) {
                previousRunValue = flatData[i];
                ++numberRuns;
            } else if (previousRunValue != flatData[i]) {
                previousRunValue = flatData[i]; // Update the value of the last run
                ++numberRuns;
            }
        }
        return numberRuns;
    }

    /**
     * input:   new byte[] { 15, 15, 15, 4, 4, 4, 4, 4, 4 }
     * output:  { 3, 15, 6, 4 }
     *
     * @param flatData
     * @return
     */
    public static byte[] encodeRle(byte[] flatData) {
        // Creating the array to return the result
        int numberRuns = countRuns(flatData);
        byte[] result = new byte[2 * numberRuns];
        int resultIndex = 0;
        // Computing the RLE encoding values
        byte lastElement = 0;
        int counter = 0;
        for (int i = 0; i < flatData.length; i++) {
            if (i != 0 && lastElement != flatData[i]) {
                // Save element and total count
                result[resultIndex] = (byte) counter;
                result[resultIndex + 1] = (byte) lastElement;
                resultIndex += 2;
                // Reset temporary RLE variables pointer
                lastElement = flatData[i]; // Reset element
                counter = 1; // reset counter
            } else {
                lastElement = flatData[i];
                ++counter;
            }
        }
        // Save last result computed by the loop
        result[resultIndex] = (byte) counter;
        result[resultIndex + 1] = (byte) lastElement;
        return result;
    }
    public static int getDecodedLength(byte[] rleData) {
        int result = 0;
        for (int i = 0; i < rleData.length; i += 2) {
            result += rleData[i];
        }
        return result;
    }
    /**
     * input:   new byte[] { 3, 15, 6, 4 }
     * output:  { 15, 15, 15, 4, 4, 4, 4, 4, 4 }
     *
     * @param rleData
     * @return
     */
    public static byte[] decodeRle(byte[] rleData) {
        // Creating the array to return the result
        int resultSize = getDecodedLength(rleData);
        byte[] result = new byte[resultSize];

        int resultIndex = 0;
        int rleCount = 0;
        byte rleValue = 0;
        for (int i = 0; i < rleData.length; i += 2) {
            rleCount = rleData[i];
            rleValue = rleData[i+1];
            for (int j = 0; j < rleCount; j++) {
                result[resultIndex] = rleValue;
                ++resultIndex;
            }
        }
        return result;
    }

    /**
     * input:   "3f64"
     * output:   { 3, 15, 6, 4 }
     *
     * @param dataString
     * @return
     */
    public static byte[] stringToData(String dataString) {
        byte[] result = new byte[dataString.length()];
        String digits = "0123456789ABCDEF";

        int value;
        String upperCaseData = dataString.toUpperCase();
        for (int i = 0; i < upperCaseData.length(); i++) {
            value = digits.indexOf(upperCaseData.charAt(i));
            result[i] = (byte) value;
        }
        return result;
    }

    /**
     * input: new byte[] { 15, 15, 6, 4 }
     * output:  "15f:64"
     *
     * @param rleData
     * @return
     */
    public static String toRleString(byte[] rleData) {
        String result = "";
        for (int i = 0; i < rleData.length; i += 2) {
            result += rleData[i] + String.format("%01x", rleData[i+1]);
            if (i + 2 < rleData.length) {
                result += ":";
            }
        }
        return result;
    }

    /**
     * input:   "15f:64"
     * output:  { 15, 15, 6, 4 }
     *
     * @param rleString
     * @return
     */
    public static byte[] stringToRle(String rleString) {
        int resultSize = 0;
        for (int i = 0; i < rleString.length(); i++) {
            if (rleString.charAt(i) != ':') {
                ++resultSize;
            }
        }
        ++resultSize; // increment result size by 1 because size == number of colons + 1

        // Remove ':' from String
        String[] rleStringArray = rleString.split(":");

        // Parse the decimal value(s)
        String tmp = "";
        byte[] decimalValues = new byte[rleStringArray.length];
        for (int i = 0; i < rleStringArray.length; i++) {
            tmp = rleStringArray[i];
            decimalValues[i] = (byte) Integer.parseInt(tmp.substring(0, tmp.length()-1));
        }

        // Parse the hexadecimal value(s)
        String hexadecimalString = "";
        for (int i = 0; i < rleStringArray.length; i++) {
            tmp = rleStringArray[i];
            hexadecimalString += tmp.substring(tmp.length() - 1);
        }
        byte[] hexadecimalValues = stringToData(hexadecimalString);

        // Combine deximal and hexadecimal to create final result byte array
        int resultIndex = 0;
        byte[] result = new byte[2 * rleStringArray.length];
        for (int i = 0; i < rleStringArray.length; i++) {
            result[resultIndex] = decimalValues[i];
            result[resultIndex + 1] = hexadecimalValues[i];
            resultIndex += 2;
        }

        return result;
    }
}