import java.util.Arrays;
import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        /*
        This lab assignment is done in collaboration with Renzo Trujillo
        during Lab Lecture Pair Assignment.

                Contributors
        ---------------------------
        Romel Fatal
        Renzo Trujillo

        Date: 01/10/2022
        */

        //User input variables and output statements.
        Scanner scnr = new Scanner(System.in);
        String UserInput1;
        String UserInput2;
        String UserInput3;

        System.out.print("Hello. What is your name? ");
        UserInput1 = scnr.next();

        System.out.print("It's nice to meet you, " + UserInput1 + ". How old are you? ");
        UserInput2 = scnr.next();

        System.out.println("I see that you are still quite young at only " + UserInput2 + ".");

        System.out.print("Where do you live? ");
        UserInput3 = scnr.next();

        System.out.println("Wow! I've always wanted to go to " + UserInput3 + ". Thanks for chatting with me. Bye!");

    }
}
