// Import java scanner class to read user input
import java.util.Scanner;
import java.lang.Math;

public class SciCalculator {
    // Method for menu
    public static void printMenu() {
        System.out.println("\nCalculator Menu\n" +
                "---------------\n" +
                "0. Exit Program\n" +
                "1. Addition\n" +
                "2. Subtraction\n" +
                "3. Multiplication\n" +
                "4. Division\n" +
                "5. Exponentiation\n" +
                "6. Logarithm\n" +
                "7. Display Average\n");
    }

    /*
     * Function group to perform calculation for the calculation
     * */
    public static double additionCalc(double firstValue, double secondValue) {
        double result;

        // Perform calculation of values
        result = firstValue + secondValue;

        // Return result of calculation
        return result;
    }
    public static double subtractionCalc(double firstValue, double secondValue) {
        double result;

        // Perform calculation of values
        result = firstValue - secondValue;

        // Return result of calculation
        return result;
    }
    public static double multiplicationCalc(double firstValue, double secondValue) {
        double result;

        // Perform calculation of values
        result = firstValue * secondValue;

        // Return result of calculation
        return result;
    }
    public static double divisionCalc(double firstValue, double secondValue) {
        double result;

        // Perform calculation of values
        result = firstValue / secondValue;

        // Return result of calculation
        return result;
    }
    public static double exponentiationCalc(double firstValue, double secondValue) {
        double result = 0;

        // Perform calculation of values
        result = Math.pow(firstValue, secondValue);

        // Return result of calculation
        return result;
    }
    public static double logarithmicCalc(double firstValue, double secondValue) {
        double result = 0;

        // Perform calculation of values
        result = Math.log(firstValue) / Math.log(secondValue);

        // Return result of calculation
        return result;
    }
    public static double calcAverage(double totalCalc, int numCalc) {
        double result = 0;

        // Perform calculation of values
        result = totalCalc / (double)numCalc;

        // Return result of calculation
        return result;
    }

    // Display updated result method
    public static void newCalcResult (double newResult) {
        System.out.printf("\nCurrent Result: " + newResult + "\n");
        System.out.println();
    }


    public static void main(String[] args) {
        /*
         *   Title: Lab 3 - Scientific Calculator
         *   Author: Romel Fatal
         *   Date: 02/04/2022
         */

        // Variables
        Scanner userInput = new Scanner(System.in);
        double operand1 = 0,
                operand2 = 0,
                calcSummation = 0,
                addResult = 0, subResult = 0,
                multiResult = 0, divResult = 0,
                expoResult = 0, logResult = 0,
                totalResult = 0,
                newCalc,
                calculationAverage;

        int menuSelection = 0,
                calcCount = 0;

        // Display current result
        System.out.println("\nCurrent Result: 0.0");
        //System.out.println();

        do {
            // Display menu until user enter 0
            // Display menu selection
            printMenu();

            // Get user input
            System.out.print("Enter Menu Selection: ");
            menuSelection = userInput.nextInt();

            while (menuSelection == 7) {
                if (calcCount > 0) {
                    calcSummation = totalResult;
                    System.out.printf("\nSum of calculations: %.2f", calcSummation);
                    System.out.println("Number of calculations: " + calcCount);
                    calculationAverage = calcAverage(calcSummation, calcCount);
                    System.out.printf("Average of calculations: %.2f\n", calculationAverage);
                    System.out.print("\nEnter Menu Selection: ");
                    menuSelection = userInput.nextInt();
                } else {
                    System.out.println("\nError: No calculations yet to average!\n");
                    System.out.print("Enter Menu Selection: ");
                    menuSelection = userInput.nextInt();
                }
            }

            if (menuSelection > 0 && menuSelection < 7) {
                System.out.print("Enter first operand: ");
                operand1 = userInput.nextDouble();
                System.out.print("Enter second operand: ");

                /* What happens when user enter RESULT?
                 * Compare the user input, if it's equal to RESULT
                 * if that's true replace it with the previous result
                 * otherwise convert it to the user's input values.
                */
                String myString = userInput.next();
                if (myString.compareTo("RESULT") == 0) {
                    operand2 = totalResult;
                } else {
                    operand2 = Double.parseDouble(myString);
                }
            }

            switch (menuSelection) {
                case 0:
                    System.out.println("\nThanks for using this calculator. Goodbye!");
                    break;
                case 1:
                    // Addition calculation result
                    addResult = operand1 + operand2;
                    newCalcResult(addResult);

                    // Increment calculation
                    totalResult += addResult;
                    // Number of calculation performed
                    calcCount += 1;
                    break;
                case 2:
                    // Subtraction calculation result
                    subResult = subtractionCalc(operand1, operand2);
                    newCalcResult(subResult);

                    // Increment calculation
                    totalResult += subResult;
                    // Number of calculation performed
                    calcCount += 1;
                    break;
                case 3:
                    // Multiplication calculation result
                    multiResult = multiplicationCalc(operand1, operand2);
                    newCalcResult(multiResult);

                    // Increment calculation
                    totalResult += multiResult;
                    // Number of calculation performed
                    calcCount += 1;
                    break;
                case 4:
                    // Division calculation result
                    divResult = divisionCalc(operand1, operand2);
                    newCalcResult(divResult);

                    // Increment calculation
                    totalResult += divResult;
                    // Number of calculation performed
                    calcCount += 1;
                    break;
                case 5:
                    // Exponent calculation result
                    expoResult = exponentiationCalc(operand1, operand2);
                    newCalcResult(expoResult);

                    // Increment calculation
                    totalResult += expoResult;
                    // Number of calculation performed
                    calcCount += 1;
                    break;
                case 6:
                    // Log calculation result
                    logResult = logarithmicCalc(operand2, operand1);
                    newCalcResult(logResult);

                    // Increment calculation
                    totalResult += logResult;
                    // Number of calculation performed
                    calcCount += 1;
                    break;
                default:
                    System.out.println("\nError: Invalid selection!");
                    // Get user input
                    System.out.print("\nEnter Menu Selection: ");
                    menuSelection = userInput.nextInt();

                    if (menuSelection == 0) {
                        System.out.println("\nThanks for using this calculator. Goodbye!");
                    }
                    break;
            }
        } while (menuSelection != 0);
    }
}