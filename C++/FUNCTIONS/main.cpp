/*
 * ***** FUNCTIONS IN C++ *****
 * ----------------------------
 * - A program may be broken up into a set of manageable functions, or modules. This is called modular PROGRAMMING.
 *
 * - A function is a collection of statements that performs a specific task.
 *
 *
 * - Functions are commonly used to break a problem down into smaller, manageable pieces, or modules. Instead of writing
 *      one long function that contains all the statements necessary to solve a problem, several smaller functions can
 *      be written, with each one solving a specific part of the problem. These small functions can then be executed in
 *      the desired order to solve the problem. This approach is sometimes called DIVIDE and CONQUER because a large
 *      problem is divided into several smaller problems that are more easily solved.
 *
 *
 *
 * - Comparing two programs, one that uses a single module containing all of the statements necessary to solve a
 *      problem, and another that divides a problem into a set of smaller problems, each handled by a separate function.
 *
 *
 *      This program has one long, complex                              In this program the problem has been
 *      function containing all of the statements                       divided into smaller problems, each
 *      necessary to solve a problem                                    handled by a separate function.
 *
 *
 *      int main() {                                                    int main() {
 *          statement;                                                      statement;
 *          statement;                                                      statement;              main function
 *          statement;                                                      statement;
 *          statement;                                                  }
 *          statement;
 *          statement;
 *          statement;
 *          statement;                                                  void funtion2() {
 *          statement;                                                      statement;
 *          statement;                                                      statement;              function 2
 *          statement;                                                      statement;
 *          statement;                                                  }
 *          statement;
 *          statement;
 *          statement;                                                  void function3() {
 *          statement;                                                      statement;
 *          statement;                                                      statement;              function 3
 *          statement;                                                      statement;
 *    }                                                                 }
 *
 *
 *  - Another reason to write functions is that they simplify programs. If a specific task is performed in several
 *          places in a program, a function can be written once to perform that task and then be executed anytime it is
 *          needed. This benefit of using functions is known as CODE REUSE because you are writing the code to perform
 *          a task once and then reusing it each time you need to perform the task.
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** DEFINING AND CALLING FUNCTIONS *****
 * ------------------------------------------
 * - A function call is a statement that causes a function to execute. A function definition contains the statements
 *          that make up the function.
 *
 *
 * - When creating a function, you must write its DEFINITIONS. All function definitions have the following parts:
 *          NAME:           Every function must have a name. In general, the same rules that apply to variable names
 *                          also apply to function names.
 *          PARAMETER LIST: The program module that calls the function can send data to it. The parameter list is the
 *                          list of variables that hld the values being passed to the function. It is enclosed in
 *                          parentheses. If no values are being passed to the function, its parameter list is EMPTY.
 *          BODY:           The body of a function is the set of statements that carries out the task the function is
 *                          performing. These statements are enclosed in braces.
 *          RETURN TYPE:    A function can send a value back to the program module that called it. The return type is
 *                          the data type of the value being sent back.
 *
 *
 *
 *                          Return Type         Name        Parameter list (if any)
 *                          int                 main        ()
 *                          {
 *                              cout << "Hello World\n";                |
 *                              return 0;                               |   Body
 *                          }                                           |
 *
 *
 *
 *
 *
 * *** VOID FUNCTIONS ***
 * ----------------------
 * - It isn't necessary for all functions to return a value. Some function simply perform one or more statements and
 *          then return. In C++ these are called VOID FUNCTIONS.
 *
 *
 *          // Example
 *          void displayMessage()
 *          {
 *              cout << "Hello from the function displayMessage.\n";
 *          }
 *
 * - The function's name is displayMessage. This name is descriptive, as function names should be. It gives an
 *          indication of what the function does. It displays a message. Because the function does not need to receive
 *          any information to carry out its job, it has no parameters listed inside the parentheses. The function's
 *          return type is VOID. This means the function does not send back a value when it has finished executing and
 *          returns to the part of the program that called it. Because no value is being sent back, no return
 *          statement is required. When the statements in the function have finished executing and the right brace that
 *          ends the function is encountered, the program automatically returns.
 *
 *
 *
 * *** CALLING A FUNCTION ***
 * --------------------------
 * - A function is executed when it is CALLED. Function MAIN is called automatically when a program starts, but all
 *          other functions must be executed by FUNCTION CALL statements. When a function is called, the program
 *          branches to that function and executes the statements in its body.
 *
 * - As all C++ programs do, the program start executing in MAIN. Other functions are executed only when they are
 *          called. Comparison between function header and function call
 *
 *          FUNCTION HEADER ==============> void displayMessage()
 *          FUNCTION CALL   ==============> displayMessage();
 *
 * - The function header is part of the function definition. It declares the function's return type, name, and
 *          parameter list. It must NOT be terminated with a semicolon because the definition of the function's body
 *          follows it.
 *
 * - The function call is a statement that executes the function, so it is terminated with a semicolon like all other
 *          C++ statements. Notice that the function call does not include the return type.
 *
 * - It is possible to have many functions and function calls in a program.
 * - Functions may also be called in a hierarchical, or layered, fashion.
 *
 *
 *
 *          *** CHECKPOINT ***
 *         ---------------------
 *         - Use the following information to answer these questions. Line numbers within each function have been
 *              included for reference.
 *
 *              A program includes the following function.
 *                  1 void printHeading()
 *                  2 {
 *                  3       cout << "The History of Computers \n";
 *                  4 }
 *
 *              The program's main function includes the following code segment.
 *                  12 for (int count = 0; count < 3; count++)
 *                  13 {    printHeading();
 *                  14      cout << "I called printHeading \n";
 *                  15 }
 *
 *              1) Does line 1 contain a function header or a function call?
 *                      FUNCTION HEADER
 *              2) Does line 13 contain a function header or a function call?
 *                      FUNCTION CALL
 *              3) How many times is the printHeading function called?
 *                      3
 *              4) Which line number has code that causes the program to leave the printHeading
 *                 function and return to main?
 *                      4
 *              5) When the program returns to main, which line's code is executed next?
 *                      14
 *              6) What will be displayed when lines 12-15 of main are executed?
 *                      The History of Computers
 *                      I called printHeading
 *                      The History of Computers
 *                      I called printHeading
 *                      The History of Computers
 *                      I called printHeading
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** FUNCTION PROTOTYPES *****
 * -------------------------------
 * - A function prototype eliminates the need to place a function definition before all calls to the function.
 *
 * - Before the compiler encounters a call to a particular function, it must already know certain things about the
 *          function. In particular, it must know the number of PARAMETERS the function uses, the DATA TYPE of each
 *          parameter, and the RETURN TYPE of the function. This is normally done by including a function prototype
 *          for each function in the program except for MAIN.
 *                  A prototype is never needed for MAIN because it is the starting point of the program.
 *
 * - The functions you have seen so far did not receive any information from the function that called them, so they had
 *          NO PARAMETERS. And except for MAIN, they did not return any information, so their return type was VOID.
 *
 * - Let's take a closer look at the prototype for the displayMessage function
 *          void displayMessage();
 *
 *          This prototype looks similar to the function header, except there is a semicolon at the end. The statement
 *          tells the compiler that the function displayMessage uses no parameters and has a VOID return type,
 *          meaning it doesn't return a value.
 *
 *          Notice that the prototype for the displayMessage function in Program1 was placed above the MAIN function.
 *          Without its prototype there to provide the needed information for the compiler, the entire displayMessage
 *          function definition would have to come before the main function in order to be called.
 *
 * - Some programmers prefer to use this organization and place the main function last. However, most programmers find
 *          it easier to use a prototype for each function except MAIN and to place MAIN first. This is particularly
 *          helpful when a program has many functions that call other functions.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** SENDING DATA INTO A FUNCTION *****
 * ----------------------------------------
 * - When a function is called, the program may send values into the function.
 *
 * - Values that are sent into a function are called ARGUMENTS. You're already familiar with how to use arguments in a
 *          function call. In the following statement the function POW is being called with two arguments, 2.0 and 3.0,
 *          passed to it:
 *
 *          result = pow(2.0, 3.0);
 *
 *          The POW function uses the information passed to it to compute the value of the first argument raised to the
 *          power of the second argument. In this case, it will compute the value of 2.0 to the third power and return
 *          the value 8.0 to be stored in result.
 *
 * - A PARAMETER is a special variable that holds a value being passed as an argument into a function. By using
 *          PARAMETERS, you can design your own functions that accept data this way.
 *
 *          Here is the definition of a function that has a parameter. The parameter is num.
 *          void displayValue(int num) {
 *              cout << "The value is " << num << endl;
 *          }
 *
 * - Notice that the parameter variable is defined inside the parentheses (int num). Because it is declared to be an
 *          integer, the function displayValue can accept an integer value as an argument. Program6 is a complete
 *          program that uses this function.
 *
 * - Notice the function prototype for displayValue in line 6.
 *          void displayValue(int num);         // Function prototype
 *
 * - It lists both the data type and the name of the function's parameter variable. However, it is not actually
 *          necessary to list the name of the parameter variable inside the parentheses. Only the data type of the
 *          variable is required. The function prototype could have been written like this:
 *
 *          void displayValue(int);            // Function prototype
 *
 *
 * - Any argument listed inside the parentheses of a function call is copied into the function's parameter variable. In
 *          essence, parameter variables are initialized to the value of the corresponding arguments passed to them
 *          when the function is called. Program7 shows the function displayValue being called several times with a
 *          different argument passed each time.
 *
 * - Any expression whose whose value could normally be assigned to num may be used as an argument. For example, the
 *          following function call would pass the value 8 into num:
 *
 *          displayValue(3 + 5);
 *
 * - When a function is called, it is best if each argument passed to it has the same data type as the parameter
 *          receiving it. However, it is possible to send an argument with a different data type. In this case, the
 *          argument will be promoted or demoted to match the data type of the parameter receiving it. Be very careful
 *          if you do this, as you may introduce a hard to find bug. For example, the displayValue function in Program7
 *          has an integer parameter, which means it expects to receive an integer value. If the function is called as
 *          shown here,
 *
 *          displayValue(4.7);
 *
 *          the argument will be truncated and the integer 4 will be stored in the parameter num. *
 *
 * - Often it is useful to pass several arguments into a function. Program8 includes a function that has three
 *          parameters. Notice how these parameters are defined in the function header in line 27, as well as in the
 *          function prototype in line 6. Notice also that the cell to the function in line 18 must now send three
 *          arguments to the function.
 *
 *          showSum(value1, value2, value3);
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** PASSING DATA BY VALUE *****
 * ---------------------------------
 * - When an argument is passed into a parameter by value, only a copy of the argument's value is passed. Changes to the
 *          parameter do not affect the original argument.
 *
 * - As you have seen, PARAMETERS are special-purpose variables that are defined inside the parentheses of a function
 *          definition. Their purpose is to hold the information passed to them by the arguments, which are listed
 *          inside the parentheses of a function call. Normally when information is passed to a function it is PASSED
 *          BY VALUE. This means the PARAMETER receives a copy of the value that is passed to it. If a parameter's value
 *          is changed inside a function, it has no effect on the original argument. Program9 demonstrates this concept.
 *
 *          Program9 also illustrates that when a function prototype lists variable names along with data types, the
 *          names it uses are just DUMMY NAMES. They are NOT actually used by the compiler and DO NOT have to agree with
 *          the names used in the function header. The changeMe function prototype in line 7 and the changeMe function
 *          header in line 29 both specify that the function has one INT PARAMETER, but they use different names for it.
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          7) Indicate which of the following is the function prototype, the function header, and the function call:
 *                      void showNum(double num)            ---> FUNCTION HEADER
 *                      void showNum(double num);           ---> FUNCTION PROTOTYPE
 *                      showNum(45.76);                     ---> FUNCTION CALL
 *
 *          8) A) Write the function header for a function named timesTen that has an integer parameter
 *                  named number. The body of the function has been provided below.
 *                      // You write the function header
 *                      void timesTen(int number)
 *                      {
 *                          cout << "Ten times " << number << " is " << (10 * number << ".\n";
 *                      }
 *             B) Write the function prototype for the timesTen function.
 *                      void timesTen(int number);
 *             C) Write a statement that calls timesTen, passing it the integer literal 5
 *                      timesTen(5);
 *             D) Write a statement that calls timesTen, passing it an integer variable named boxes.
 *                      timesTen(boxes);
 *
 *          9) What is the output of the following program?
 *
 *                      #include <iostream>
 *                      using namespace std;
 *
 *                      void func1(double, int);            // Function prototype
 *
 *                      int main()
 *                      {
 *                          int x = 0;
 *                          double y = 1.5;
 *
 *                          cout << x << " " << y << endl;
 *                          func1(y, x);
 *                          cout << x << " " << y << endl;
 *                          return 0;
 *                      }
 *
 *                      void func1(double a, int b)
 *                      {
 *                          cout << a << " " << b << endl;
 *                          a = 0.0;
 *                          b = 10;
 *                          cout << a << " " << b << endl;
 *                      }
 *                                      0 1.5
 *                                      1.5 0
 *                                      0.0 10
 *                                      0 1.5
 *
 *
 *          10) The following program skeleton asks for the number of hours you've worked and your hourly pay rate. It
 *                  then calculates and displays your wages. The function showDollars, which you are to write, formats
 *                  the output of the wages.
 *
 *                      #include <iostream>
 *                      #include <iomanip>
 *                      using namespace std;
 *
 *                      void showDollars(double pay);        // Function prototype
 *
 *                      int main()
 *                      {
 *                          double payRate, hoursWorked, wages;
 *
 *                          cout << "How many hours have your worked? "
 *                          cin >> hoursWorked;
 *                          cout << "What is your hourly pay rate? ";
 *                          cin >> payRate;
 *                          wages = hoursWorked * payRate;
 *                          showDollars(wages);
 *
 *                          return 0;
 *                      }
 *                          // Write the definition of the showDollars function here.
 *                          // It should have one double parameter and display the message
 *                          // "Your wages are $" followed by the value of the parameter.
 *                          void showDollars(double pay) {
 *                              cout << fixed << showpoint << setprecision(2);
 *                              cout << "Your wages are $" << wage << endl;
 *                          }
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** THE RETURN STATEMENT *****
 * --------------------------------
 * - The RETURN statement causes a function to end immediately.
 *
 * - When the last statement in a function has finished executing, the function terminates. The program returns to the
 *          module that called it and continues executing from the point immediately following the function call. It is
 *          possible, however, to force a function to return to where it was called from before its last statement has
 *          been executed. This can be done with the RETURN statement, as illustrated in Program10. In this program, the
 *          function divide shows the quotient of arg1 divided by arg2. If arg2 is set to zero, however, the function
 *          returns to main without performing the division.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** RETURNING A VALUE FROM A FUNCTION *****
 * ---------------------------------------------
 * - A function may send a value back to the part of the program that called the function.
 *
 * - You've seen that data may be passed into a function by way of parameter variables. Data may also be returned from
 *          a function back to the statement that called it. Functions that return a value are known as
 *          VALUE-RETURNING FUNCTIONS.
 *
 * - The POW function, which you have already used, is an example of a value-returning function. Here is an example:
 *          double x;
 *          x = pow(4.0, 2.0);
 *
 *          This code calls the POW function, passing 4.0 and 2.0 as arguments. The function calculates the value of
 *          4.0 raised to the power of 2.0 and returns that value. The value, which is 16.0, is assigned to the
 *          x variable by the = operator.
 *
 * - Although several arguments can be passed into a function, only one value can be returned from it. Think of a
 *          function as having multiple communication channels for receiving data (PARAMETERS), but only one channel
 *          for sending data (THE RETURN VALUE).
 *
 *
 * *** DEFINING A VALUE-RETURNING FUNCTION ***
 * -------------------------------------------
 * - When you are writing a value-returning function, you must decide what type of value the function will return. This
 *          is because you must specify the data type of the return value in the FUNCTION HEADER and FUNCTION PROTOTYPE.
 *          Up until now all the functions we have written have been VOID FUNCTIONS. This means they DO NOT return a
 *          value. These functions use the key word VOID as the RETURN TYPE in their FUNCTION HEADER and FUNCTION
 *          PROTOTYPE. A VALUE-RETURNING FUNCTION, in contrast, uses INT, DOUBLE, BOOL, or any other valid data type
 *          in its header. Here is an example of a function that returns an INT value:
 *
 *          int sum(int num1, int num2)
 *          {
 *              int result;
 *
 *              result = num1 + num2;
 *              return result;
 *          }
 *
 * - This code defines a function named sum that accepts two int arguments. The arguments are passed into the PARAMETER
 *          VARIABLES num1 and num2. Inside the function, the variable result is defined. Variables that are defined
 *          inside a function are called LOCAL VARIABLES. After the variable definition, the values of the parameter
 *          variables num1 and num2 are added, and their sum is assigned to the result variable. The last statement in
 *          the function is:
 *
 *          return result;
 *
 *          This statement causes the function to end, and it sends the value of the result variable back to the
 *          statement that called the function. A VALUE-RETURN FUNCTION must have a return statement written in the
 *          following general format:
 *
 *          return expression;
 *
 *          In the general format, expression is the value to be returned. It can be any expression that has a value,
 *          such as a variable, literal, or mathematical expression. The value of the expression is converted to the
 *          data type that the function returns and is sent back to the statement that called the function. In this
 *          case, the sum function returns the value in the result variable.
 *
 *          However, we could have eliminated the result variable entirely and returned the expression num1 + num2, as
 *          shown in the following code:
 *
 *          int sum(int num1, int num2)
 *          {
 *              return num1 + num2;
 *          }
 *
 *
 * - The prototype for a VALUE-RETURN FUNCTION follows the same conventions. Here is the prototype for the sum function:
 *          int sum(int num1, int num2);
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** RETURNING A BOOLEAN VALUE *****
 * -------------------------------------
 * - Functions may return TRUE or FALSE values.
 *
 * - Frequently there is a need for a function that tests an argument and returns a TRUE or FALSE value indicating
 *          whether or not a condition is satisfied. Such a function would return a BOOL value. For example, the
 *          isValid function shown below accepts an INT argument and returns TRUE if the argument is within the range
 *          of 1 through 100, or FALSE otherwise.
 *
 *          boot isValid(int number)
 *          {
 *              bool status;
 *
 *              if (number >= 1 && number <= 100)
 *                  status = true;
 *              else
 *                  status = false;
 *              return status;
 *          }
 *
 * - The following code shows an IF/ELSE statement that makes a call to the function:
 *
 *          int value = 20;
 *          if (isValid(value))
 *              cout << "The value is within range.\n";
 *          else
 *              cout << "The value is out of range.\n;
 *
 *          Because value equals 20, this code will display the message "The value is within range." when it executes.
 *
 *
 *          Program13 shows another example of a function whose return type is BOOL. This program has a function
 *          named isEven, which returns TRUE if its argument is an even number. Otherwise, the function returns FALSE.
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          11) How many return values may a function have?
 *                      1
 *
 *          12) Write a header for a function named DISTANCE. The function should return a DOUBLE and have two
 *              DOUBLE PARAMETERS: rate and time.
 *                      double distance(double rate, double time)
 *
 *          13) Write a header for a function named DAYS. The function should return an INT and have three INT
 *              PARAMETERS: years, months, and weeks.
 *                      int days(int years, int months, int weeks)
 *
 *          14) Write a header for a function named GETKEY. The function should return a CHAR and use no PARAMETERS.
 *                      char getKey()
 *
 *          15) Write a header for a function named LIGHTYEARS. The function should return a LONG and have one
 *              LONG PARAMETER: miles
 *                      long lightYears(long miles)
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** USING FUNCTIONS IN A MENU-DRIVEN PROGRAM *****
 * ----------------------------------------------------
 * - Functions are ideal for use in MENU-DRIVEN PROGRAMS. When the user selects an item from a menu, the program can
 *          call the appropriate function.
 *
 * - All of functions you have seen so far have been very simple. This was done in order to focus on how functions are
 *          created and called, without making them too long. However, in most programming applications, functions do
 *          more. They allow a program to be modularized, with a function written to carry out each major task the
 *          program needs to do. The job of MAIN then is to organize the flow of the program by making calls to the
 *          functions.
 *
 *          Program14 use function to showcase a MENU-DRIVEN program that calculates the charges for a health club
 *          membership.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** LOCAL AND GLOBAL VARIABLES *****
 * --------------------------------------
 * - A LOCAL VARIABLE is defined inside a function and is not accessible outside the function. A GLOBAL VARIABLE is
 *          defined outside all functions and is accessible to all functions in its scope.
 *
 *
 * *** LOCAL VARIABLES ***
 * -----------------------
 * - Variables defined inside a function are LOCAL to that function. They are hidden from the statements in other
 *          functions, which normally cannot access them. Program15 shows that because the variables defined in a
 *          function are hidden, other functions may have separate, distinct variables with the same name.
 *
 *
 * *** LOCAL VARIABLE LIFETIME ***
 * -------------------------------
 * - A LOCAL VARIABLE exists only while the function it is defined in is executing. This is known as the LIFETIME of a
 *          LOCAL VARIABLE. When the function begins, its parameter variables and any local variables it defines are
 *          created in memory, and when the functions ends, they are destroyed. This means that any values stored in a
 *          function's parameters or local variables are lost between calls to the function.
 *
 *
 * *** INITIALIZING LOCAL VARIABLES WITH PARAMETER VALUES ***
 * ----------------------------------------------------------
 * - It is possible to use parameter variables to initialize LOCAL VARIABLES. Sometimes this simplifies the code in a
 *          function. Here is a modified version of the sum function we looked at earlier. In this version, the
 *          function's parameters are used to initialize the local variable result.
 *
 *          int sum(int num1, int num2)
 *          {
 *              int result = num1 + num2;
 *              return result;
 *          }
 *
 *
 * *** GLOBAL VARIABLES ***
 * ------------------------
 * - A GLOBAL VARIABLE is any variable defined outside all the functions in a program, including MAIN. The scope of a
 *          GLOBAL VARIABLE is the portion of the program from the variable definition to the end of the entire
 *          program. This means that a GLOBAL VARIABLE can be accessed by all functions that are defined after the
 *          global variable is defined. Program16 shows two functions, main and anotherFunction, which access the same
 *          global variable, num.
 *
 *          ** GLOBAL VARIABLES MAKE DEBUGGING DIFFICULT. Any statement in a program can change the value of a global
 *                      variable. If you find that the wrong value is being stored in a global variable, you have to
 *                      track down every statement that accesses it to determine where the bad value is coming from. In
 *                      a program with thousands of lines of code, this can be difficult.
 *
 *          ** FUNCTIONS THAT USE GLOBAL VARIABLES ARE USUALLY DEPENDENT ON THOSE VARIABLES. If you want to use such a
 *                      function in a different program, most likely you will have to redesign it so it does not rely
 *                      on the global variable.
 *
 *          ** GLOBAL VARIABLES MAKE A PROGRAM HARD TO UNDERSTAND. A global variable can be modified by any statement
 *                      in the program. So to understand any part of the program that uses a global variable, you have
 *                      to be aware of all the other parts of the program that access it.
 *
 *
 * *** GLOBAL CONSTANTS ***
 * ------------------------
 * - Although you should try to avoid the use of global variables, it is generally permissible to use global constants
 *          in a program. A GLOBAL CONSTANT is a named constant that is available to every function in a program.
 *          Because a global constant's value cannot be changed during the program's execution, you do not have to
 *          worry about the potential hazards associated with the use of global variables.
 *
 * - GLOBAL CONSTANTS are typically used to represent unchanging values that are needed throughout a program. For
 *          example, suppose a banking program uses a named constant to represent an interest rate. If the interest
 *          rate is used in several functions, it is easier to create a GLOBAL CONSTANT, rather than a LOCAL NAMED
 *          CONSTANT in each function. This also simplifies maintenance. If the interest rate changes, only the
 *          declaration of the global constant has to be changed, instead of several local declarations.
 *
 *          Program18 shows an example of how GLOBAL CONSTANTS might be used. The program calculates gross pay,
 *          including overtime, for a company's management trainees. All trainees earn the same amount per hour. In
 *          addition to MAIN, this program has two functions: getBasePay and getOvertimePay. The getBasePay function
 *          accepts the number of hours worked and returns the amount of pay for the non-overtime hours. The
 *          getOvertimePay function accepts the number of hours worked and returns the amount of pay for the overtime
 *          hours, if any.
 *
 * - You cannot have two local variables with the same function. This applies to parameter variables as well A
 *          parameter variable is, in essence, a local variable. So, you cannot give a parameter variable and a local
 *          variable in the same function the same name.
 *
 *          However, you can have a parameter or local variable with the same name as a global variable or constant.
 *          When you do this, the name of the parameter or local variable SHADOWS the name of the global variable or
 *          constant. This means that the global variable or constant's name is hidden by the name of the parameter or
 *          local variable. So, the global variable or constant can't be seen or used in this part of the program.
 *          Program19 illustrates this. It has a global constant name BIRDS set to 500 and a local constant in the
 *          california function named BIRDS set to 10000.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** STATIC LOCAL VARIABLES *****
 * ----------------------------------
 * - If a function is called more than once in a program, the values stored in the function's local variables do not
 *          persist between function calls. This is because local variables are destroyed when a function terminates
 *          and are then re-created when the function starts again. This is shown in Program20.
 *
 * - Sometimes, however, it's desirable for a program to "remember" what value is stored in a local variable between
 *          function calls. This can be accomplished by making the variable STATIC. STATIC LOCAL VARIABLES are not
 *          destroyed when a function returns. They exist for the entire lifetime of the program, even though their
 *          scope is only the function in which they are defined. Program21 uses a STATIC LOCAL VARIABLE to count how
 *          many times a function is called.
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          16) What is the difference between a static local variable and a global variable?
 *                      STATIC LOCAL VARIABLE - limited to the function is which it is defined
 *                      GLOBAL VARIABLE - every part of the program has access to it
 *
 *
 *          17) What is the output of the following program?
 *
 *                  #include <iostream>
 *                  using namespace std;
 *                  void myFunc();      // Function prototype
 *
 *                  int main()
 *                  {
 *                      int var = 100;
 *                      cout << var << endl;
 *                      myFunc();
 *                      cout << var << endl;
 *                      return 0;
 *                  }
 *                  // Definition of function myFunc
 *                  void myFunc()
 *                  {
 *                      int var = 50;
 *                      cout << var << endl;
 *                  }
 *                      100
 *                      50
 *                      100
 *
 *
 *          18) What is the output of the following program?
 *
 *                  #include <iostream>
 *                  using namespace std;
 *                  void showVar();     // Function prototype
 *
 *                  int main()
 *                  {
 *                      for (int count = 0; count < 10; count++)
 *                          showVar();
 *                      return 0;
 *                  }
 *                  // Definition of function showVar
 *                  void showVar()
 *                  {   static int var = 10;
 *                      cout << var << endl;
 *                      var++;
 *                  }
 *                      10  11  12  13  14  15  16  17  18  19
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** DEFAULT ARGUMENTS *****
 * -----------------------------
 * - Default arguments are passed to parameters automatically if no argument is provided in the function call.
 *
 * - It's possible to assign DEFAULT ARGUMENTS to function parameters. A default argument is passed to the parameter
 *          when the actual argument is left out of the function call. The default arguments are usually listed in
 *          the function prototype. Here is an example
 *
 *          void showArea(double length = 20.0, double width = 10.0);
 *
 *          Because parameter names are not required in function prototypes, the example prototype could also be
 *          declared like this:
 *
 *          void showArea(double = 20.0, double = 10.0);
 *
 *          In either case, the default arguments, which must be literal values or constants, have an = operator
 *          in front of them.
 *
 *
 * - Notice that in both example prototypes, function showArea has two DOUBLE PARAMETERS. The first is assigned the
 *          default argument 20.0, and the second is assigned the default argument 10.0. Here is the definition of
 *          the function
 *
 *          void showArea(double length, double width)
 *          {
 *             double area = length * width;
 *             cout << "The area is " << area << endl;
 *          }
 *
 * - The default argument for length is 20.0, and the default argument for width is 10.0. Because both parameters have
 *          defaut arguments, they may optionally be omitted in the function call, as shown here:
 *
 *          showArea();
 *
 * - In this function call, both default arguments will be passed to the parameters. Parameter length will receive the
 *          value 20.0, and width will receive the value 10.0. The output of the function will be
 *
 *          The area is 200
 *
 * - The default arguments are only used when the actual arguments are omitted from the function call. In the following
 *          call, the first argument is specified, but the second is omitted.
 *
 *          showArea(12.0);
 *
 * - The value 12.0 will be passed to length, while the default value 10.0 will be passed to width. The output of the
 *          function call will be
 *
 *          The area is 120
 *
 * - Of course, all the default arguments may be overridden. In the following function call, arguments are supplied
 *          for both parameters:
 *
 *          showArea(12.0, 5.5);
 *
 *          The output of this function call will be
 *
 *          The area is 66
 *
 *
 *
 * - A function's default arguments should be assigned in the earliest occurrence of the function name. This will
 *          usually be the function prototype. However, if a function does not have a prototype, default arguments may
 *          be specified in the function header. The showArea function could be defined as follows:
 *
 *          void showArea(double length = 20.0, double width = 10.0)
 *          {
 *              double area = length * width;
 *              cout << "The area is " << area << endl;
 *          }
 *
 *
 * - Program22 illustrates the use of default function arguments. It has a function that displays asterisks on the
 *          screen. This function receives arguments specifying how many rows of asterisks to display and how many
 *          asterisks to print on each row. Default arguments are provided to display one row of 10 asterisks.
 *
 * - Although C++'s default arguments are very convenient, they are not totally flexible in their use. When an
 *          argument is left out of a function call, all arguments that come after it must be left out as well. In the
 *          displayStars function in Program22, it is not possible to omit the argument for starsPerRow without also
 *          omitting the argument for numRows. For example, the following function call would be illegal:
 *
 *          dispalyStars(, 3);          // Illegal function call!
 *
 * - It is possible, however, for a function to have some parameters with default arguments and some without. For
 *          example, in the following function, only the last parameter has a default argument:
 *
 *          // Function prototype
 *          void calcPay(int empNum, double payRate, double hours = 40.0);
 *
 *          // Definition of function calcPay
 *          void calcPay(int empNum, double payRate, double hours)
 *          {
 *              double wages;
 *
 *              wages = payRate * hours;
 *
 *              cout << "Gross pay for employee number ";
 *              cout << empNum << " is " << wages << endl;
 *          }
 *
 * - When calling this function, arguments must always be specified for the two parameters (empNum and payRate)
 *          because they have no default arguments. Here are examples of valid calls:
 *
 *          calcPay(769, 15.75);        // Uses default argument for hours
 *          calcPay(142, 12.00, 20);    // Specifies number of hours
 *
 * - When a function uses a mixture of parameters with and without default arguments, the parameters with default
 *          arguments must be declared last. In the calcPay function, hours could not have been declared before either
 *          of the other parameters. The following prototypes are illegal:
 *
 *          // Illegal prototype
 *          void calcPay(int empNum, double hours = 40.0, double payRate);
 *
 *          // Illegal prototype
 *          void calcPay(double hours = 40.0, int empNum, double payRate);
 *
 *
 *          Here is a summary of the important points about default arguments:
 *                  ** The value of a default argument must be a literal or a named constant.
 *                  ** When an argument is left of a function call (because it has a default value), all the arguments
 *                          that come after it must also be left out.
 *                  ** When a function has a mixture of parameters both with and without default arguments, the
 *                          parameters with default arguments must be defined last.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** USING REFERENCE VARIABLES AS PARAMETERS *****
 * - A REFERENCE VARIABLE is a variable that references the memory location of another variable. Any changes made to
 *          the one it references. Reference variables are sometimes used as function parameters.
 *
 * - Earlier you saw that arguments are normally passed to a function by value. This means that parameters receive only
 *          a copy of the value sent to them, which they store in the function's local memory. Any changes made to the
 *          parameter's value do not affect the value of the original argument.
 *
 * - Sometimes, however, we want a function to be able to change a value in the calling function (i.e., the function
 *          that called it). This can be done by making the parameter a reference variable.
 *
 * - When we use a variable we are accessing data stored in the memory location assigned to it. A REFERENCE VARIABLE is
 *          an alias for another variable. Instead of having its own memory location for storing data, it accesses the
 *          memory location of another variable. Any change made to the REFERENCE VARIABLE'S data is actually made to
 *          the data stored in the memory location of the other variable. When we use a reference variable as a
 *          parameter, it becomes an alias for the corresponding variable in the argument list. Any change made to the
 *          parameter is actually made to the variable in the calling function. When data is passed to a parameter in
 *          this manner, the argument is said to be PASSED BY REFERENCE.
 *
 *          REFERENCE VARIABLES are defined like regular variables, except there is an AMPERSAND (&) BETWEEN THE DATA
 *          TYPE AND THE NAME. For example, the following function definition makes the parameter refVar a
 *          REFERENCE VARIABLE:
 *
 *          void doubleNum(int &refVar)
 *          {
 *              refVar *= 2;
 *          }
 *
 *          You may place the space either before or after the AMPERSAND. The doubleNum function heading could also
 *          have been written like this:
 *
 *          void doubleNum(int& refVar)
 *
 * - This function doubles refVar by multiplying it by 2. Because refVar is a REFERENCE VARIABLE, this action is
 *          actually performed on the variable that was passed to the function as an argument.
 *
 * - The prototype for a function with a REFERENCE PARAMETER must have an AMPERSAND as well. As in the function header,
 *          it goes between the data type and the variable name. If the variable name is omitted from the prototype,
 *          the AMPERSAND simply follows the data type. All of the following prototypes for the doubleNum function are
 *          correct.
 *
 *          void doubleNum(int &refVar);
 *          void doubleNum(int& refVar);
 *          void doubleNum(int &);
 *          void doubleNum(int&);
 *
 *
 * - The AMPERSAND must appear in both the prototype and the header of any function that uses a REFERENCE VARIABLE as a
 *          parameter. It does not appear in the function call.
 *
 *          Program23 demonstrates the use of a parameter that is a REFERENCE VARIABLE.
 *
 *
 * - Using REFERENCE VARIABLES as function parameters is especially useful when the purpose of the function is to
 *          accept input values to be stored in variables of the calling function. Another use of REFERENCE PARAMETERS
 *          is when multiple values must be sent back from the function. If the function is computing and sending back
 *          a single value, it is generally considered more appropriate to use a VALUE-RETURNING FUNCTION and send the
 *          value back with a return statement.
 *
 * - Program24 is a modification of Program23. It adds a function getNum, which accepts an input from the user and
 *          stores it in userNum. However, the parameter userNum is a REFERENCE to MAIN'S VARIABLE value, so that is
 *          where the input data is actually stored. Program24 also rewrites the function doubleNum as a
 *          VALUE-RETURNING FUNCTION.
 *
 *          ** Only variables may be passed by reference. If you attempt to pass a nonvariable argument, such as
 *              literal, a constant, or an expression, into a reference parameter, an error will result.
 *
 * - If a function has more than one parameter that is a REFERENCE VARIABLE, you must use an AMPERSAND for each of them
 *          in both the prototype and the function header. Here is the prototype for a function that uses four
 *          REFERENCE VARIABLE PARAMETERS:
 *
 *          void addThree(int& num1, int& num2, int& num3, int& sum);
 *
 *          and here is the function definition:
 *
 *          void addThree(int& num1, int& num2, int& num3, int& sum)
 *          {
 *              cout << "Enter three integer values: ";
 *              cin >> num1 >> num2 << num3;
 *              sum = num1 + num2 + num3;
 *          }
 *
 * - Notice, however, that the addThree function really needed only one REFERENCE PARAMETER, sum. The other three
 *          parameters could have received their arguments by value because the function was not changing them.
 *
 *
 * *** WHEN TO PASS ARGUMENTS BY REFERENCE AND WHEN TO PASS ARGUMENTS BY VALUE ***
 * -------------------------------------------------------------------------------
 * - New programmers often have a problem determining when an argument should be passed to a function by reference and
 *          when it should be passed by value. The problem is further compounded by the fact that if a value must be
 *          "sent back" to the calling function there are two ways to do it: by using a REFERENCE PARAMETER or by using
 *          a return statement. Here are some general guidelines.
 *
 *          ** When an argument is a constant, it must be passed by value. Only variables can be passed by reference.
 *          ** When a variable passed as an argument should not have its value changed, it should be passed by value.
 *                  This protects it from being altered.
 *          ** When exactly one value needs to be "sent back" from a function to the calling routine, it should
 *                  generally be returned with a return statement rather than through a REFERENCE PARAMETER
 *          ** When two or more variables passed as arguments to a function need to have their values changed by that
 *                  function, they should be passed by reference.
 *          ** When a copy of an argument cannot reasonably or correctly be made, such as when the argument is a file
 *                  stream object, it must be passed by reference.
 *
 *          Here are three common instances when REFERENCE PARAMETERS are used.
 *
 *          ** When data values being input in a function need to be known by the calling function
 *          ** When a function must change existing values in the calling function
 *          ** When a file stream object is passed to function
 *
 * - Program25 illustrates the first two of these uses. The getNums function uses REFERENCE VARIABLES as parameters so
 *          that it can store the values it inputs into the main function's small and big variables. The orderNums
 *          function uses REFERENCE VARIABLES as parameters so that when it swaps the two items passed to it, values
 *          will actually be swapped in the main function.
 *
 * - Program26 illustrates how to pass a file to a function. The weather.dat file used by the program contains the
 *          following seven values: 72 83 71 69 75 77 70.
 *
 *          It is also possible to pass an opened file to a function and have it read just part of the file each time
 *          is is called. Program27 provides an example. Each time the readData function is called, it reads the next
 *          line of the file.
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          19) What kinds of values may be specified as defaults?
 *                      literals and constants
 *
 *          20) Write the prototype and header for a function called compute that has three parameters: an int, a
 *              double, and a long (not necessarily in that order). The int parameter should have a default argument of
 *              5, and the long parameter should have a default argument of 65536. The double parameter should not have
 *              a default argument.
 *
 *                      PROTOTYPE:  void compute(double, long = 65536, int = 5);
 *                      HEADER:     void compute(double x, long y, int z)
 *
 *
 *          21) Write the prototype and header for a function called calculate that has three parameters: an int, a
 *              reference to a double, and a long (not necessarily in that order). The int parameter should have the
 *              default argument 47.
 *
 *                      PROTOTYPE:  void calculate(long, double &, int = 47);
 *                      HEADER:     void calculate(long x, double &y, int z)
 *
 *          22) What is the output of the following program?
 *                      #include <iostream>
 *                      using namespace std;
 *
 *                      void test(int = 2, int = 4, int = 6)
 *                      {
 *                          test();
 *                          test(6);
 *                          test(3, 9);
 *                          test(1, 5, 7);
 *                          return 0;
 *                      }
 *
 *                      void test(int first, int second, int third)
 *                      {
 *                          first += 3;
 *                          second += 6;
 *                          third += 9;
 *                          cout << first << " " << second << " " << third << endl;
 *                      }
 *
 *                      5   10  15
 *                      9   10  15
 *                      9   15  15
 *                      4   11  16
 *
 *
 *          23) The following program asks the user to enter two numbers. What is the output of the program if the
 *              user enters 12 and 14?
 *
 *              #include <iostream>
 *              using namespace std;
 *
 *              void func1(int &, int &);
 *              void func2(int &, int &, int &);
 *              void func3(int, int, int,)
 *
 *              int main()
 *              {
 *                  int x = 0, y = 0, z = 0;
 *                  cout << x << " " << y << z << endl;
 *                  func1(x, y);
 *                  cout << x << " " << y << z << endl;
 *                  func2(x, y, z);
 *                  cout << x << " " << y << z << endl;
 *                  func3(x, y, z);
 *                  cout << x << " " << y << z << endl;
 *                  return 0;
 *              }
 *
 *              void func1(int &a, int &b)
 *              {
 *                  cout << "Enter two numbers: ";
 *                  cin >> a >> b;
 *              }
 *
 *              void fun2(int &a, int &b, int &c)
 *              {
 *                  b++;
 *                  c--;
 *                  a = b + c;
 *              }
 *
 *              void func3(int a, int b, int c)
 *              {
 *                  a = b - c;
 *              }
 *
 *              0   0   0
 *              Enter two numbers: 12  14
 *              12          14  0
 *              14=(15 -1)  15  -1
 *              14=(15 -1)  15  -1
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** OVERLOADING FUNCTIONS *****
 * ---------------------------------
 * - Two or more functions may have the same name, as long as their parameters lists are different.
 *
 * - Sometimes you will create two or more functions that perform the same operation but use a different set of
 *          parameters, or parameters of different data types. For instance, in Program12 there is a square function
 *          that uses a double parameter. But suppose you also wanted a square function that works exclusively with
 *          integers and accepts an int as its argument. Both functions would do the same thing: return the square of
 *          their argument. The only difference is the data type involved in the operation. If you were to use both of
 *          these functions in the same program, you could assign a unique name to each function. For example, one
 *          might be named squareInt and the other one name squareDouble. C++, however, allows you to OVERLOAD function
 *          names. That means you may assign the same name to multiple functions as long as their parameter lists are
 *          different. Program28 illustrates this.
 *
 * - In C++, each function has a signature. The FUNCTION SIGNATURE is the name of the function and the data types of the
 *          function's parameters in the proper order. The square functions in Program28 would have the following
 *          signatures:
 *                      square(int)
 *                      square(double)
 *
 * - When an OVERLOADING FUNCTION is called, C++ uses the FUNCTION SIGNATURE to distinguish it from other functions
 *          with the same name. In Program28, when an int argument is passed to square, the version of the function
 *          that has an int parameter is called. Likewise, when a double argument is passed to square, the version with
 *          a double parameter is called.
 *
 * - Note that the function's return value is not part of the signature. The following functions could NOT be used in
 *          the same program because their parameter list aren't different.
 *                      int square(int number)
 *                      {
 *                          return number * number;
 *                      }
 *
 *                      double square(int number)       // Wrong! Parameter lists must differe
 *                      {
 *                          return number * number;
 *                      }
 *
 * - OVERLOADING is also convenient when there are similar functions that use a different number of parameters. For
 *          example, consider a program with functions that return the sum of integers. One returns the sum of two
 *          integers, another returns the sum of three integers, and yet another returns the sum of four integers. Here
 *          are their function headers:
 *                      int sum(int num1, int num2)
 *                      int sum(int num1, int num2, int num3)
 *                      int sum(int num1, int num2, int num3, int num4)
 *
 * - Because the number of parameters is different in each, they may all be used in the same program. Program29 uses
 *          two functions, each named calcWeeklyPay, to determine an employee's gross weekly pay. One version of the
 *          function uses an int and a double parameter, while the other version only uses a double parameter.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** THE EXIT() FUNCTION *****
 * -------------------------------
 * - The EXIT() function causes a program to terminate, regardless of which function or control mechanism is executing.
 *
 * - A C++ program stops executing when a RETURN statement in function MAIN is encountered. When other functions end,
 *          however, the program does not stop. Control of the program goes back to the place immediately following the
 *          function call. Sometimes, however, rare circumstances make it necessary to terminate a program in a
 *          function other than MAIN. To accomplish this, the EXIT function is used.
 *
 * - When the EXIT function is called, it causes the program to stop, regardless of which function contains the call.
 *          Program30 demonstrates this effect.
 *
 * - To use the EXIT FUNCTION, you must include the cstdlib header file. Notice the function takes an integer argument.
 *          This argument is the exit code you wish the program to pass back to the computer's operating system. This
 *          code is sometimes used outside of the program to indicate whether the program ended successfully or as the
 *          result of a failure. In Program30, the exit code zero is passed. This code, which is also normally used in
 *          the return statement at the end of a program's main function, indicates a successful program termination.
 *          Another way to signal this is to use the C++ named constant EXIT_SUCCESS. This constant, which is defined in
 *          cstdlib, is used with the EXIT FUNCTION like this:
 *
 *          exit(EXIT_SUCCESS);
 *
 * - However, because it is considered good programming practice to always terminate a program at the end of the main
 *          function where possible, many programmers use EXIT() only to handle error conditions. In this case, the
 *          error code should indicate that a problem has occurred. This can be done by using another C++ named
 *          constant, EXIT_FAILURE. This named constant, also defined in cstdlib, is defined as the termination code
 *          that commonly represents an unsuccessful exit under the current operating system. Here is an example of
 *          its use:
 *
 *          exit(EXIT_FAILURE);
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          24) Is it required that OVERLOAD FUNCTIONS have different return types, different parameters lists, or both?
 *                                  They can have the return types but must have different parameters lists
 *
 *
 *          25) What is the output of the following program code?
 *
 *                  void showVals(double, double)
 *                  {
 *                      double x = 1.2, y = 4.5;
 *
 *                      showVals(x, y);
 *                      return 0;
 *                  }
 *
 *                  void showVals(double p1, double p2)
 *                  {
 *                      cout << p1 << endl;
 *                      exit(0);
 *                      cout << p2 << endl;
 *                  }
 *
 *                                  1.2
 *
 *
 *          26) What is the output of the following program code?
 *
 *                  int manip(int);
 *                  int manip(int, int);
 *                  int manip(int, double);
 *
 *                  int main()
 *                  {
 *                      int x = 2, y = 4, z;
 *                      double a = 3.1;
 *
 *                      z = manip(x) + manip(x, y) + manip(y, a);
 *                      cout << z << endl;
 *                      return 0;
 *                  }
 *
 *                  int manip(int val)
 *                  {
 *                      return val + val * 2;                     // 2 + 4 = 6
 *                  }
 *
 *                  int manip(int val1, int val2)
 *                  {
 *                      return (val1 + val2) * 2;                // (2 + 4) * 2 = 12
 *                  }
 *
 *                  int manip(int val1, double val2)
 *                  {
 *                      return val1 * static_cast<int>(val2);   // 4 * 3 = 12
 *                  }
 *
 *                                  z = 6 + 12 + 12 = 30
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * ***** STUBS AND DRIVERS *****
 * -----------------------------
 * - Stubs and drivers are very helpful tools for testing and debugging programs that use functions. They allow you to
 *          test the individual functions in a program, in isolation from the parts of the program that call the
 *          functions.
 *
 * - A STUB is a dummy function that is called instead of the actual function it represents. It usually displays a test
 *          message acknowledging that it was called, and nothing more. For example, if a stub were used for the
 *          showFees function ins Program14 (the modular health club membership program), it might look like this:
 *
 *                      // Stub for the showFees function
 *                      void showFees(string memberType, double rate, int months)
 *                      {
 *                          cout << "The function showFees was called with arguments:\n"
 *                               << "Member type: "  << memberType << endl
 *                               << "rate: " << rate << endl
 *                               << "months: " << months << endl;
 *                      }
 *
 *                      Here is example output of the program if it were run with this stub instead of with the actual
 *                      showFees function.
 *
 *                              Health Club Membership Menu
 *                         1. Standard Adult Membership
 *                         2. Child Membership
 *                         3. Senior Citizen Membership
 *                         4. Quit the Program
 *
 *                         1[Enter]
 *                         For how many months? 3[Enter]
 *                         The function showFees was called with arguments:
 *                         Member type: Adult
 *                         rate: 120.00
 *                         months: 3
 *
 *
 *                              Health Club Membership Menu
 *                         1. Standard Adult Membership
 *                         2. Child Membership
 *                         3. Senior Citizen Membership
 *                         4. Quit the Program
 *
 *                         4[Enter]
 *
 *
 * - A DRIVER is a program that tests a function by simply calling it. If the function accepts any arguments, the driver
 *          the driver passes test data. If the function returns a value, the driver displays the return value on the
 *          screen. This allows you to see how the function performs in isolation from the rest of the program it will
 *          eventually be part of. Program31 is a driver for testing the showFees function in the health club membership
 *          program.
 * */
