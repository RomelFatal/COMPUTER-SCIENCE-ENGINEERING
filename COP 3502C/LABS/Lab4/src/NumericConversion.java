// Import java util class
import java.util.Scanner;

public class NumericConversion {

    /*
    * Method definition
    * */

    // Method for printing menu
    public static void Menu() {
        System.out.println("Decoding Menu");
        System.out.println("-------------");
        System.out.println("1. Decode hexadecimal\n" +
                "2. Decode binary\n" +
                "3. Convert binary to hexadecimal\n" +
                "4. Quit\n");
    }

    // Method to decode an entire hexadecimal string, return its value
    public static Long hexStringDecode(String hex) {
        String stringValue = "";
        long decimalValue = 0;
        // Convert string to uppercase
        hex = hex.toUpperCase();
        char hexChar;

        for (int i = 0; i < hex.length(); i++) {
            hexChar = hex.charAt(i);
            int value = stringValue.indexOf(hexChar);
            decimalValue = decimalValue * 16 + hexCharDecode(hexChar);
        }
        return decimalValue;
    }

    // Method to decode a single hexadecimal digit, return its value
    public static short hexCharDecode(char digit) {
        // Character value variable
        short charValue = 0;

        if (digit >= '0' && digit <= '9') {
            charValue = (short) (digit - '0');
        }
        else if (digit >= 'A' && digit <= 'F') {
            charValue = (short) (10 + digit - 'A');
        }
        else if (digit >= 'a' && digit <= 'f') {
            charValue = (short) (10 + digit - 'a');
        }
        return charValue;
    }

    // Method to decode a binary string, return its value
    public static short binaryStringDecode(String binary) {
        short binaryValue = 0;

        String twoChar = binary.substring(0, 2);

        if (twoChar.equals("0b")) {
            binary = binary.substring(2);
        }

        for (int i = binary.length() - 1, j = 0; i >= 0; i--, j++) {
            binaryValue =
                    (short)(binaryValue + (Integer.parseInt(String.valueOf(binary.charAt(i))) *
                            (short)(Math.pow(2, j))));
        }
        return binaryValue;
    }

    // Helper function to decode hexvalues
    public static String charHexDecode(int digit) {
        String [] decTohexArrayString = {"A", "B", "C", "D", "E", "F"};
        String result = "";
        if(digit >= 10 && digit <= 15) {
            result = decTohexArrayString[(digit - 10)];
        }else {
            result = String.valueOf(digit);
        }

        return result;
    }

    // Method to decode binary to hex values
    public static String binaryToHex (String binary) {
        String result = "";

        short decimalFrombinaryStringDecode = binaryStringDecode(binary);

        while(decimalFrombinaryStringDecode != 0) {
            result = charHexDecode((decimalFrombinaryStringDecode % 16 )) + result;
            decimalFrombinaryStringDecode = (short) (decimalFrombinaryStringDecode / (short) 16 ) ;
        }

        return result;
    }
    

    public static void main(String[] args) {
        /*
         *   Title: Lab 4 - Numeric Conversion
         *   Author: Romel Fatal
         *   Date: 02/18/2022
         */


        // Variable declaration
        Scanner input = new Scanner(System.in);
        int menuSelection = 0;

        String hexValue = "";

        // Keep running the menu until 4 is entered
        do {
            // Display menu
            Menu();

            System.out.print("Please enter an option: ");
            menuSelection = input.nextInt();

            switch (menuSelection) {
                case 1:
                    // User selection option
                    System.out.print("Please enter the numeric string to convert: ");
                    hexValue = input.next();
                    System.out.println("Result: " + hexStringDecode(hexValue) + "\n");
                    break;
                case 2:
                    // User selection option
                    System.out.print("Please enter the numeric string to convert: ");
                    hexValue = input.next();
                    System.out.println("Result: " + binaryStringDecode(hexValue)+ "\n");
                    break;
                case 3:
                    // User selection option
                    System.out.print("Please enter the numeric string to convert: ");
                    hexValue = input.next();
                    System.out.println("Result: " + binaryToHex(hexValue) + "\n");
                    break;
                default:
                    System.out.println("Goodbye!");
                    break;
            }
        } while(menuSelection != 4);
    }
}