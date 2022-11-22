/*
 * ***** INTRODUCTION TO CLASSES AND OBJECTS IN C++ *****
 * ------------------------------------------------------
 *
 * ***** ABSTRACT DATA TYPES *****
 * -------------------------------
 * - An ABSTRACT DATA TYPE (ADT) is a data type that specifies the values the data type can hold and the operations that
 *          can be done on them without the details of how the data type is implemented.
 *
 *
 *
 * *** ABSTRACTION ***
 * -------------------
 * - An ABSTRACTION is a general model of something. It is a definition that includes only the general characteristics
 *          of an object without the details that characterize specific instances of the object.
 *
 * - An automobile provides an illustration of abstraction. Most people understand what an automobile is, and many
 *          people know how to drive one. Yet, FEW people understand exactly how an automobile works or what all its
 *          parts are. This is a feature of abstraction. Details of the internal components, organization, and
 *          operations of an object are kept separate from the description of what it can do and how to operate it. We
 *          are surrounded in our everyday lives with such examples of abstraction, from our microwaves and washing
 *          machines to our DVD players and computers. We know what these objects can do, and we understand how to
 *          operate them, but most of us do not know, or care, how they work inside. We do not need to be concerned with
 *          this information.
 *
 *
 *
 * *** THE USE OF ABSTRACTION IN SOFTWARE DEVELOPMENT ***
 * ------------------------------------------------------
 * - Abstraction occurs in programming as well. In order to focus on the bigger picture of creating a working
 *          application, a programmer needs to be able to use certain objects and routines without having to be
 *          concerned with the details of their implementation.
 *
 * - Abstraction applies to data too. To use any data type you need to know just two things about it: what values it can
 *          hold and what operations apply to it. For example, to use a DOUBLE you need to know that it can only hold
 *          numeric values, such 5.0 or -5.1, and not strings, such as "5.1". To use a DOUBLE you also need to know
 *          what operations can be performed on it. It can be used with the addition, subtraction, multiplication, and
 *          division operators, but not with the modulus operator (which only works with integer operands, as in the
 *          expression 8 % 3). You do not have to know anything else about a DOUBLE to use it. You do not have to know
 *          how it is stored in memory or how the arithmetic operations that can be performed on it are carried out by
 *          the computer. This separation of a data type's logical properties from its implementation details is
 *          knowN as DATA ABSTRACTION.
 *
 *
 *
 * *** ABSTRACT DATA TYPES ***
 * ---------------------------
 * - The term ABSTRACT DATA TYPE (ADT) describes any data type whose implementation details are kept separate from the
 *          logical properties needed to use it.
 * - The programmer defines a set of values the data type can hold, defines a set of operations that can be performed
 *          on the data, and creates a set of functions to carry out these operations. In C++ and other object-oriented
 *          languages, programmer created ADTs are normally implemented as classes.
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
 * ***** OBJECT-ORIENTED PROGRAMMING *****
 * ---------------------------------------
 * - OBJECT-ORIENTED programming is centered around objects that ENCAPSULATE both DATA and FUNCTIONS that operate on
 *          them.
 *
 * - There are two common programming methods in practice today: PROCEDURAL PROGRAMMING and OBJECT-ORIENTED PROGRAMMING
 *          (OOP).
 *
 * - Procedural programming is a method of writing software centered on the procedures, of functions, that carry out the
 *          actions of the program. The program's data, typically stored in variables, is separate from these
 *          procedures. So you must pass the variables to the functions that need to work with them. Object-oriented
 *          programming, on the other hand, is centered on objects.
 *
 * - Procedural programming has worked well for software developers for many years. However, as programs become larger
 *          and more complex, the separation of a program's data from the code that operates on it can lead to
 *          problems. For example, quite often a program's specifications change, resulting in the need to change the
 *          format of the data or the design of a data structure. When the structure of the data changes, the code that
 *          operates on the data must also be changed to accept the new format. Finding all the code that needs
 *          changing results in additional work for programmers and an opportunity for bugs to be introduced into the
 *          code.
 *
 * - This problem has helped influence the shift from PROCEDURAL PROGRAMMING to OBJECT-ORIENTED PROGRAMMING. OOP is
 *          centered on creating and using objects. An OBJECT is software entity that combines both DATA and the
 *          PROCEDURES that work with it in a single unit. An object's data items, also referred to as its ATTRIBUTES,
 *          are stored in MEMBER VARIABLES. The procedures that an object performs are called its MEMBER FUNCTIONS. This
 *          bundling of an object's DATA and PROCEDURES together is called ENCAPSULATION.
 *
 * - Below is a representation of what a CIRCLE object might look like. It has just one member variable to hold data
 *          and two member function. The CIRCLE object's member variable is radius. Its setRadius member function sets
 *          the radius, and its calcArea member function calculates and returns the area.
 *
 *                             ________________________________
 *                             | MEMBER VARIABLES (ATTRIBUTES)|
 *                             | double radius;               |
 *                             --------------------------------
 *                             | MEMBER FUNCTIONS             |
 *                             | void setRadius(double r)     |
 *                             | double calcArea()            |
 *                             --------------------------------
 *
 * - The MEMBER VARIABLE and the MEMBER FUNCTIONS are all members of the CIRCLE OBJECT, bound together in a single unit.
 *          When an operation needs to be performed, such as calculating the area of the circle, a message is passed to
 *          the object telling it to execute the calcArea function. Because calcArea is a member of the CIRCLE OBJECT,
 *          it automatically has access to the object's member variables. Therefore, there is no need to pass radius to
 *          the calcArea function.
 *
 * - In addition to bundling associated data and functions together, objects also permit data hiding. DATA HIDING refers
 *          to an object's ability to hide its data from code outside the object. Only the object's member functions
 *          can directly access and make changes to its data. An object typically hides its data, but allows outside
 *          code to access it through some of its member functions.
 *
 * Why is hiding information a good thing? When an object's internal data is hidden from outside code, and that data
 *          can only be accessed by going through the object's member functions, the data is protected from accidental
 *          or intentional corruption. In addition, the programming code outside the object does not need to know about
 *          the format or internal structure of the object's data. The code only needs to interact with the object's
 *          functions. When a programmer changes the structure of an object's internal data, the object's member
 *          functions are also modified so they will still properly operate on it. These changes, however, are hidden
 *          from code outside the object. That code does not have to be changed. It can call and use the member
 *          functions exactly the same way as it did before.
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
 * ***** INTRODUCTION TO CLASSES *****
 * -----------------------------------
 * - In C++, the class is the construct primarily used to create objects.
 *
 * - A CLASS is a programmer-defined data type that describes what objects of the class will look like when they are
 *          created.
 *
 *
 *
 * *** USING A CLASS YOU ALREADY KNOW ***
 * --------------------------------------
 * - You have been using the string class to create and use string objects. Recall that you must have the following
 *          #include directive in any program that uses the string class.
 *                  #include <string>
 *
 * - This is necessary because the string header file is where the string class is defined. With this header file
 *          included in your program, you can now define as many string objects as you wish. To do this you simply name
 *          the class, followed by the names you wish to give the objects. Here is an example:
 *
 *                  string city,
 *                         state;
 *
 * - This statement creates two string objects. One is named city and the other is named state. Both objects are
 *          instances of the string class, and although they can be assigned different data values, both objects
 *          essentially look the same. That is, both will have a member variable that can hold a string, and both will
 *          have the same set of functions that can operate on strings.
 *
 * - Once a string object has been created, you can store data in it. Because the string class is designed to work with
 *          assignment operator, you can assign a string literal to a string object. Here is an example:
 *
 *                  city = "Chicago";
 *                  state = "Illinois";
 *
 * - These statements store "Chicago" in the city object's member variable and "Illinois" in the state object's member
 *          variable.
 *
 * - The string class includes numerous member functions that perform operations on the data that a string object holds.
 *          One is a member function named length, which returns the length of the string stored in a string object.
 *          The following code demonstrate this:
 *
 *                  cout << city.length();      << endl;        // This prints 7
 *                  cout << state.length();     << endl;        // This prints 8
 *
 * - These statements both call their same member function, but in each case it works with the object's own data. The
 *          data store in city is a string of length 7. The data stored in state is a string of length 8.
 *
 * - It is important to note that in order to create and use string objects, we do not need to know anything about how
 *          the string class is implemented. We just have to know what kind of data it can hold and what functions we
 *          can call to operate on the data.
 *
 *
 *
 * *** CREATING YOUR OWN CLASS ***
 * -------------------------------
 * - To create your own class, you must write a class declaration. Here is the general format of a class declaration.
 *
 *                  class ClassName         // Class declaration begins with
 *                  {                       // the key word class and a name.
 *
 *                      Declarations for class member variables
 *                      and member functions go here.
 *
 *                                          // Notice the required semicolon.
 *                  };
 *
 *
 *
 * *** ACCESS SPECIFIERS ***
 * -------------------------
 * - ACCESS SPECIFIERS: pubic and private. The designate who can access various members of the class.
 *
 * - A public member variable can be accessed by functions outside the class, and a public member function can be called
 *          by functions outside the class. A private member variable, on the other hand, can only be accessed by a
 *          function that is a member of the same class, and a private member function can only be called by other
 *          functions that are members of the class. If we omit the words public and private altogether, everything
 *          defaults to being private.
 *
 *
 *
 * *** PLACEMENT OF PRIVATE AND PUBLIC MEMBERS ***
 * -----------------------------------------------
 * - It DOES NOT matter whether we list the PRIVATE or PUBLIC member first. In fact, it is not even required that all
 *          members of the same access specification be declared together. Both examples below are legal declarations
 *          of the Circle class.
 *
 *                  class Circle                                    class Circle
 *                  {   public:                                     {   public:
 *                          void setRadius(double r)                        void setRadius(double r)
 *                          {radius = r;{                                   {radius = r;}
 *
 *                          double calcArea()                           private:
 *                          {return 3.14 * pow(radius, 2);}                 double radius;
 *
 *                          private:                                    public:
 *                          double radius;                                  double calcAread()
 *                  };                                                      {return 3.14 * pow(radius, 2);}
 *                                                                  };
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
 * ***** CREATING AND USING OBJECTS *****
 * --------------------------------------
 * - OBJECTS are instances of a class. They are created with a definition statement after the class has been declared.
 *
 * - A class declaration is similar to the blueprint for a house. The blueprint itself is not a house, but is a detailed
 *          description of a house. When we use the blueprint to build an actual house, we could say we are constructing
 *          an instance of the house described by the blueprint. If we wish, we can construct several identical houses
 *          from the same blueprint. Each house is a separate instance of the house described by the blueprint.
 *
 * - A class declaration serves a similar purpose. It describes what the objects created from the class will look like
 *          when they are constructed. Each object created from it is called an INSTANCE of the class, and defining a
 *          class object is called INSTANTIATING the class.
 *
 *                      Circle circle1;
 *                             circle2;
 *
 *          They are two distinct instances of the Circle class, with different memory assigned to hold the values
 *          stored in their member variables.
 *
 *
 *
 * *** ACCESSING AN OBJECT'S MEMBERS ***
 * -------------------------------------
 * - Public members of a class object are accessed with the dot operator. You saw this when we called the length
 *          function for the string object city with the following statement:
 *
 *                      cout << city.length() << endl;
 *
 *          The following statements call the setRadius function of circle1 and circle2.
 *
 *                      circle1.setRadius(1.0);     // This sets circle1's radius to 1.0
 *                      circle2.setRadius(2.5);     // This sets circle2's radius to 2.5
 *
 *          Notice that member functions, just like regular functions, can be passed arguments when they are called if
 *          they have been defined to accept arguments. We defined setRadius to accept one DOUBLE argument.
 *
 *          As mentioned earlier, an object's member variables are usually declared to be private. However, if one were
 *          declared to be public, it also could be accessed from outside the class by using the dot operator. If the
 *          circle class radius variable was public, we could just set it like this:
 *
 *                      circle1.radius = 1.0;
 *                      circle2.radius = 2.5;
 *
 *          Now that the radii have been set, we can call the calcArea member function to return the area of the
 *          Circle objects:
 *
 *                      cout << "The area of circle1 is " << circle1.calcArea() << endl;
 *                      cout << "The area of circle2 is " << circle2.calcArea() << endl;
 *
 *          Program1 is a complete program that demonstrates the Circle class. Notice that the statements to create and
 *          use Circle objects are in main, not in the class declaration.
 *
 *
 *
 * *** ACCESSORS AND MUTATORS ***
 * ------------------------------
 * - A function that uses the value of a class variable but does not change it, is known as an ACCESSOR. Also known as
 *          SET FUNCTIONS or SETTER FUNCTIONS because they set the value of a class variable.
 *
 * - A member function which stores a value in a member variable or changes its value, is known as a MUTATOR. Also
 *          known as GET FUNCTIONS or GETTER FUNCTIONS because they just retrieve or use the value.
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
 * ***** DEFINING MEMBER FUNCTIONS *****
 * -------------------------------------
 * - Class member functions can be defined either inside or outside the class declaration.
 *
 * - Class member functions are defined similarly to regular functions. Except for a few special cases we will look at
 *          later, they have a function header that includes a return type (which may be void), a function name, and a
 *          parameter list (which may possibly be empty). The statements that carry out the actions of the function are
 *          contained within a pair of braces that follow the function header.
 *
 * - When we defined the Circle class in the previous section, we defined its two member functions within the class
 *          declaration itself. When a class function is defined there, it is called an INLINE FUNCTION. Inline
 *          functions provide a convenient way to contain function information within a class declaration, but they can
 *          only be used when a function body is very short, usually a single line. When a function body is longer, we
 *          place a prototype for the function in the class declaration, instead of the function definition itself. We
 *          then put the function definition outside the class declaration, either following it or in a separate file.
 *
 * - Even though the two functions in our Circle class are short enough to be written as inline functions, we will
 *          rewrite them as regular functions, defined outside the class declaration, to illustrate how this is done.
 *          Inside the class declaration the functions will be replaced by the following prototypes:
 *
 *                      void setRadius(double);
 *                      double calcArea();
 *
 *          Following the class declaration we will place a FUNCTION IMPLEMENTATION section containing the following
 *          function definitions:
 *
 *                      void Circle::setRadius(double r)
 *                      {
 *                          radius = r;
 *                      }
 *
 *                      double Circle::calcArea()
 *                      {
 *                          return 3.14 * pow(radius, 2);
 *                      }
 *
 *          Notice that these look like ordinary functions except that the class name and a double colon (::) are placed
 *          after the function return type, just before the function name. The :: symbol is called the SCOPE RESOLUTION
 *          OPERATOR. It is needed to indicate that these are class member functions and to tell the compiler which
 *          class they belong to.
 *
 *          Here are some additional examples to illustrate how the scope resolution is used when a class function is
 *          defined outside the class declaration.
 *
 *                      double calcArea()               // Wrong! The class name and scope
 *                                                      // resolution operator are missing.
 *
 *                      Circle::double calcArea()       // Wrong! The class name and scope
 *                                                      // resolution operator are misplaced.
 *
 *                      double Circle::calcArea()       // Correct!
 *
 *          Program2 revises Program1 to define the class member functions outside the class.
 *
 *
 *
 * *** NAMING CONVENTIONS FOR CLASS MEMBER FUNCTIONS ***
 * -----------------------------------------------------
 * - Program3 provides another example using classes and objects. It declares and implements a Rectangle class that has
 *          two private member variables and five public member functions. Notice that the names of four of the
 *          member functions in Program3 begin with the word SET or the word GET. Functions setLength and setWidth are
 *          mutator, or set, functions. It is common to name a mutator with the word SET followed by the name of four
 *          of the member variable whose value it is setting. As you would expect, the setLength function sets the
 *          value of the length member variable and the setWidth function sets the value of the width member variable.
 *
 * - Member functions getLength and getWidth are accessor, or get, functions. It is common to name an accessor with the
 *          word GET followed by the name of the member variable whose value it is getting if all it does is return the
 *          value stored in the variable. Function getLength returns the value stored in the length member variable,
 *          while getWidth returns the value stored in the width member variable. The final member function, calcArea,
 *          is an accessor function because it just uses, and does not change, any value stored in the class variables.
 *          However, its name does not begin with GET because it is calculating the value it returns rather than just
 *          retrieving a value stored in a class variable.
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          1) Which of the following shows the correct use of the scope resolution operator in a member function
 *              definition?
 *              A) InvItem::void setOnHand(int units)
 *              B) void InvItem::setOnHand(int units)       ===> CORRECT!
 *
 *          2) An object's private member variables can be accessed from outside the object by
 *              A) public member functions                  ===> CORRECT!
 *              B) any function
 *              C) the dot operator
 *              D) the scope resolution operator
 *
 *          3) Assuming that soap is an instance of the Inventory class, which of the following is a valid call to the
 *              setOnHand member function?
 *              A) setOnHand(20);
 *              B) soap::setOnHand(20);
 *              C) soap.setOnHand(20);                      ===> CORRECT!
 *              D) Inventory.setOnHand(20);
 *
 *          4) Complete the following code skeleton to declare a class called Date. The class should contain member
 *              variables and functions to store and retrieve the month, day, and year components of a date.
 *              class Data
 *              {   private:
 *                      int month,
 *                          day,
 *                          year;
 *                  public:
 *                      void setDate(int m, int d, int y)
 *                          {month = m; day = d; year = y}
 *                      int getMonth()
 *                          {return month;}
 *                      int getDay()
 *                          {return day;}
 *                      int getYear()
 *                          {return year;}
 *              }
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
 * ***** CONSTRUCTORS *****
 * ------------------------
 * - A CONSTRUCTORS is a member function that is automatically called when a class object is created.
 *
 * - A CONSTRUCTOR is a special public member function that is automatically called to CONSTRUCT a class object when it
 *          is created. If the programmer does not write a CONSTRUCTOR, C++ automatically provides one. You never see
 *          it, but it runs silently in the background each time your program defines an object. Often, however,
 *          programmers write their own CONSTRUCTOR when they create a class. If they do this, in addition to
 *          constructing each newly created object of the class, it will execute whatever code the programmer has
 *          included in it. Most often programmers use a CONSTRUCTOR to initialize an object's member variables.
 *          However, it can do anything a normal function can do.
 *
 * - A CONSTRUCTOR looks like a regular function except that its name must be the same as the name of the class it is a
 *          part of. This is how the compiler knows that a particular member function is a CONSTRUCTOR. Also a
 *          CONSTRUCTOR is not allowed to have a return type. Program4 includes a class called Demo with a constructor
 *          that does nothing except print a message. It was written this way to demonstrate when the constructor
 *          executes. Because the Demo object is created between two cout statements, the constructor will print its
 *          message between the output lines produced by those two statements.
 *
 * In Program4 we defined the CONSTRUCTOR as an inline function inside the class declaration. However, like any other
 *          member function, we could have just put its prototype in the class declaration and then defined it outside
 *          the class. In that case, we would need to add the name of the class the function belongs to and the scope
 *          resolution operator in front of the function name. But the name of the constructor function is the same as
 *          the class name, so the name would appear twice. Here is how the function header for the Demo CONSTRUCTOR
 *          would look if we defined it outside the class.
 *
 *                      Demo::Demo()            // CONSTRUCTOR
 *                      {
 *                          cout << "Now the constructor is running.\n";
 *                      }
 *
 * Program5 modifies Program2 to include a constructor that initializes an object's member data. The constructor is
 *          defined outside of the class.
 *
 *
 *
 * *** OVERLOADING CONSTRUCTORS ***
 * --------------------------------
 * - Recall that when two or more functions share the same name, the function name is said to be OVERLOADED. Multiple
 *          functions with the same name may exist in a C++ program, as long as their parameter lists are different.
 *
 * - Any class member function may be OVERLOADED, include the CONSTRUCTOR. One CONSTRUCTOR might take an integer
 *          argument, for example, while another constructor takes a double. There could even be a third constructor
 *          taking two integers. As long as each constructor has a different list of parameters, the compiler can tell
 *          them apart.
 *
 * - Program6 declares and uses a class name Sale, which has two CONSTRUCTORS. The first has a parameter that accepts a
 *          sales tax rate. The second, which is for tax-exempt sales, has no parameters. It sets the tax rate to 0. A
 *          CONSTRUCTOR like this, which has no parameters, is called a DEFAULT CONSTRUCTOR.
 *
 *
 *
 * *** DEFAULT CONSTRUCTORS ***
 * ----------------------------
 * - The Sale class needed a default constructor to handle tax-free sales. Other classes may appear not to need one--
 *          for example, if objects created from them are always expected to pass arguments to the constructors. Yet,
 *          any time you design a class that will have constructors, it is considered good programming practice to
 *          include a default constructor. If you do not have one, and the program tries to create an object without
 *          passing an object. In order to create an object that passes no arguments, there must be a constructor that
 *          expects no arguments---a default constructor. If the programmer doesn't write any constructors for a class,
 *          the compiler automatically creates a default constructor for it. However, when the programmer writes one or
 *          more constructors, even ones that all have parameters the compiler does not create a default constructors.
 *          So it is the responsibility of the programmer to do this.
 *
 * - A class may have many constructors but can only have one default constructor. This is because if multiple functions
 *          have the same name, the compiler must be able to determine from their parameter lists which one is being
 *          called at any given time. It uses the number and types of arguments passed to the function to determine
 *          which of the overloaded functions to invoke. Because there can be only one function with the class name that
 *          is able to accept no arguments, there can be only one default constructor.
 *
 * - Normally, as in the Sale class, default constructor have no parameters. However, it is possible to have a default
 *          constructor with parameters if all of them have default values, so that it can be called with no arguments.
 *          It would be an error to create one constructor that accepts no arguments and another that has arguments but
 *          allows default value for all of them. This would essentially create two "default" constructors.
 *          The following class declaration does this illegally.
 *
 *                      class Sale                  // Illegal declaration!
 *                      { private:
 *                          double taxRate;
 *
 *                        public:
 *                          Sale()                  // Default constructor with no arguments
 *                          { taxRate = 0.05; }
 *
 *                          Sale(double r = 0.05)   // Default constructor with a default argument
 *                          { taxRate = r; }
 *
 *                          double calcSaleTotal(double cost)
 *                          { double total = cost + cost * taxRate;
 *                            return total;
 *                          }
 *                      };
 *
 *          As you can see, the first constructor has no parameters. The second constructor has one parameter, but it
 *          has a default argument. If an object is defined with no argument list, the compiler will not be able to tell
 *          which constructor to execute.
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
 * ***** DESTRUCTORS *****
 * -----------------------
 * - A DESTRUCTOR is a member function that is automatically called when an object is destroyed.
 *
 * - DESTRUCTORS are public member functions with the same name as the class, preceded by a tilde character (~). For
 *          example, the DESTRUCTOR for the Rectangle class would be named ~Rectangle.
 *
 * - DESTRUCTORS are automatically called when an object is destroyed. In the same way that CONSTRUCTORS can be used to
 *          set things up when an object is created, DESTRUCTORS are used to perform shutdown procedures when an object
 *          ceases to exist. This happens, for example, when a program with an object stops executing or when you
 *          return from a function that created an object.
 *
 * - Program7 shows a simple class with a CONSTRUCTOR and a DESTRUCTOR. It illustrates when each is called during
 *          the program's execution.
 *
 * - In addition to the fact that DESTRUCTORS are automatically called when an object is destroyed, the followin points
 *          should be mentioned:
 *
 *          ** Like CONSTRUCTORS, DESTRUCTORS have no return type.
 *          ** DESTRUCTORS cannot accept arguments, so they never have a parameter list.
 *          ** Because DESTRUCTORS cannot accept arguments, there can only be one DESTRUCTOR.
 *
 *
 *
 *          5) Briefly describe the purpose of a CONSTRUCTOR.
 *                      A CONSTRUCTOR is a member function that is automatically called when a class object is created
 *
 *          6) CONSTRUCTOR functions have the same name as the
 *                  A) class                            ===> CORRECT!
 *                  B) class instance
 *                  C) program
 *                  D) none of the above
 *
 *          7) A CONSTRUCTOR that requires no arguments is called
 *                  A) a default CONSTRUCTOR            ===> CORRECT!
 *                  B) an inline CONSTRUCTOR
 *                  C) a null CONSTRUCTOR
 *                  D) none of the above
 *
 *          8) Assume the following is a CONSTRUCTOR:
 *                  ClassAct::ClassAct(int x)
 *                  {
 *                      item = x;
 *                  }
 *             Define a ClassAct object called sally that passes the value 25 to the CONSTRUCTOR
 *                      ClassAct sally(25);
 *
 *
 *          9) TRUE or FALSE: Like any C++ function, a CONSTRUCTOR may be overloaded, providing each CONSTRUCTOR has a
 *              unique parameter list.
 *                      TRUE
 *
 *          10) TRUE or FALSE: A class may have a CONSTRUCTOR with no parameter list and an overloaded CONSTRUCTOR
 *              whose parameters all take default arguments.
 *                      FALSE
 *
 *          11) A DESTRUCTOR function name always starts with
 *                  A) a number
 *                  B) the tilde character (~)          ===> CORRECT!
 *                  C) a data type name
 *                  D) the name of the class
 *
 *          12) TRUE or FALSE: Just as a class can have multiple CONSTRUCTOR, it can also have multiple DESTRUCTORS.
 *                      FALSE
 *
 *          13) What will the following program code display on the screen?
 *
 *                  class Tank
 *                  {
 *                      private:
 *                          int gallons;
 *                      public:
 *                          Tank()
 *                              { gallons = 50; }
 *                          Tank(int gal)
 *                              {gallons = gal; }
 *                          int getGallons()
 *                              { return gallons; }
 *                  };
 *
 *                  int main()
 *                  {   Tank storage1, storage2, sotrage3(20);
 *
 *                      cout << storage1.getGallons() << endl;
 *                      cout << storage2.getGallons() << endl;
 *                      cout << storage3.getGallons() << endl;
 *                      return 0;
 *                  }
 *                      50
 *                      50
 *                      20
 *
 *          14) What will the following program code display on the screen?
 *
 *                  class Package
 *                  {
 *                      private:
 *                          int value;
 *                      public:
 *                          Package()
 *                              { value = 7; cout << value << endl; }
 *                          Package(int v)
 *                              { value = v; cout << value << endl; }
 *                          ~Package()
 *                              { cout << "goodbye" << endl; }
 *                  };
 *
 *                  int main()
 *                  {   Package obj1(4);
 *                      Package obj2;
 *                      return 0;
 *                  }
 *                      4
 *                      7
 *                      goodbye
 *                      goodbye     // Prints two goodbyes since there are two CONSTRUCTORS
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
 * ***** PRIVATE MEMBER FUNCTIONS *****
 * ------------------------------------
 * - PRIVATE MEMBER FUNCTIONS may only be called from a function that is a member of the same class.
 *
 * - Until now all the class member functions you have seen have been public functions. This means they can be called
 *          by code in programs outside the class. Often, however, a class needs functions for internal processing that
 *          should not be called by code outside the class. These functions should be made private.
 *
 * - Program8 shows an example of a class with a private function. The SimpleStat class is designed to find and report
 *          information, such as the average and the largest number, from a set of non-negative integers sent to it.
 *          However, once a number has been received and added to a running total, it is not kept. So the class cannot
 *          later determine which number was the biggest. It must do this by examining each number it reads in to see
 *          if it is bigger than any number it previously read. The private isNewLargest function does this.
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
 * ***** PASSING OBJECTS TO FUNCTIONS *****
 * ----------------------------------------
 * - Class objects may be passed as arguments to function.
 *
 * - Class objects can also be passed as arguments to function. For example, the following function has a parameter
 *          that receives a Rectangle object.
 *
 *                  void displayRectangle(Rectangle r)
 *                  {
 *                      cout << "Length = " << r.getLength() << endl;
 *                      cout << "Width  = " << r.getWidth()  << endl;
 *                      cout << "Area   = " << r.calcArea()  << endl;
 *                  }
 *
 *          The following lines of code create a Rectangle object with length 15 and width 10, and then pass it to the
 *          displayRectangle function.
 *
 *                  Rectangle box(15, 10);
 *                  displayRectangle(box);
 *
 *          Assuming the Rectangle class includes the member functions used in this example, the displayRectangle
 *          function will output the following information.
 *
 *                  Length = 15
 *                  Width  = 10
 *                  Area   = 150
 *
 * - As with regular variables, objects can be passed to functions by value or by reference. In the Rectangle example,
 *          box is passed to the displayRectangle function by value. This means that displayRectangle receives a copy
 *          of box. If displayRectangle called any Rectangle class mutator functions, they would only change the copy of
 *          box, not the original. If a function needs to store or change data in an object's member variables, the
 *          object must be passed to it by reference.
 *
 * - Program9 illustrates this. It has two functions that receive an InventoryItem object. The object is passed to
 *          storeValues by reference because this function needs to call a class mutator function that stores new
 *          values into the object. The object is passed to showValues by value because this function only need to use
 *          accessor functions that retrieve and use values stored in the object's data members. Notice in Program9 that
 *          the InventoryItem class declaration appears BEFORE the prototype for the storeValues and showValues
 *          functions. This is important. Because both functions have an InventoryItem object as a parameter, the
 *          compiler must know what an InventoryItem is before it encounters anything that refers to it. Otherwise, an
 *          error will occur.
 *
 *
 *
 * *** CONSTANT REFERENCE PARAMETERS ***
 * -------------------------------------
 * - In Program9 part, the InventoryItem object, was passed by value to the showValues function. However, passing an
 *          object by value requires making a copy of all of the object's members. This can slow down a program's
 *          execution time, particularly if it has many members. Passing an object by reference is faster because no
 *          copy has to be made since the function has access to the original object. For this reason it is generally
 *          preferable to pass objects by reference.
 *
 * - Passing an object by reference does have a disadvantage, however. Because the function has access to the original
 *          object, it can call its mutator functions and alter its member data. This is why we normally do not pass
 *          variables by reference when we want to safeguard their contents. Luckily, there is a solution. To protect
 *          an object when it is passed as an argument, without having to make a copy, it can be passed as a CONSTANT
 *          REFERENCE. This means that a reference to the original object is passed to the function, but it cannot call
 *          any mutator functions or change any of the object's member data. It can only call accessor functions that
 *          have themselves been designated as CONSTANT FUNCTIONS.
 *
 * - To declare a parameter to be a constant reference parameter, we must put the key word CONST in the parameter list
 *          of both the function prototype and function header. Here is what the function prototype and header of the
 *          showValues function from Program9 would look like if we changed them to use a CONSTANT REFERENCE parameter.
 *
 *                          void showValues(const InventoryItem&)           // Function prototype
 *                          void showValues(const InventoryItem &item)      // Function header
 *
 *          Now the showValues function can only call InventoryItem functions that also have the key word listed in
 *          their function prototype and header, like this:
 *
 *                          double getPrice() const
 *
 *          If showValues tried to call any other InventoryItem functions, a compiler error would occur. Notice that
 *          when showValues is modified to have a CONSTANT REFERENCE parameter, only the function prototypes and
 *          headers are changed to include the word CONST. The body of the showValues function and te call to showValues
 *          DO NOT change.
 *
 *
 *
 * *** RETURNING AN OBJECT FROM A FUNCTION ***
 * -------------------------------------------
 * - Just as functions can be written to return an int, double, or other data types, they can also be designed to return
 *          an object. When a function returns an object it normally creates a local instance of the class, sets its
 *          data members, and then return it. Here is an example of how the InventoryItem object used in Program9
 *          could be created in the storeValues function and then returned to the calling function. Notice that this
 *          new version of the storeValues functions does not accept any arguments, and its return type is now
 *          InventoryItem rather than void.
 *
 *                          InventoryItem storeValues()
 *                          {
 *                              InventoryItem tempItem;         // Local InventoryItem object
 *                              int partNum;                    // Local variables to hold user input
 *                              string description;
 *                              int qty;
 *                              double price;
 *
 *                              // Code to get the data from the user goes here.
 *
 *                              // Store the data in the InventoryItem object and return it.
 *                              tempItem.storeInfo(partNum, description, qty, price);
 *                              return tempItem;
 *                          }
 *
 *          The main function could then create part like this:
 *                          InventoryItem part = storeValues();
 *
 * - Program10 revises Program9. The function previously named storeValues is renamed createItem, as it now creates an
 *          InventoryItem object and returns it to main. The showValues function now receives part as a CONSTANT
 *          REFERENCE instead of having it passed by value, as before.
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          15) A private class member function can be called by
 *                  A) any other function
 *                  B) only public functions in the same class
 *                  C) only private functions in the same class
 *                  D) any function in the same class                       ===> CORRECT!
 *
 *          16) When an object is passed to a function, a copy of it is made if the object is
 *                  A) pass by value                                        ===> CORRECT!
 *                  B) passed by reference
 *                  C) passed by constant reference
 *                  D) any of the above
 *
 *          17) If a function receives an object as an argument and needs to change the object's member data, the
 *              object should be
 *                  A) passed by value
 *                  B) passed by reference                                  ===> CORRECT!
 *                  C) passed by constant reference
 *                  D) none of the above
 *
 *          18) TRUE or FALSE: Objects can be passed to functions, but they cannot be returned by functions.
 *                              FALSE - they can be both passed to functions and returned by functions.
 *
 *          19) TRUE or FALSE: When an object is passed to a function, but the function is not supposed to change it,
 *              it is best to pass it by value.
 *                              FALSE - passing it by value will ensure it is not changed, but it is best to pass it as
 *                                      a constant reference.
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
 * ***** OBJECT COMPOSITION *****
 * ------------------------------
 * - It is possible for a class to have a member variable that is an instance of another class.
 *
 * - Sometimes it's helpful to nest an object of one class inside another class. For example, consider the following
 *          declarations:
 *
 *                  class Rectangle
 *                  {
 *                      private:
 *                          double length;
 *                          double width;
 *                      public:
 *                          void setLength(double);
 *                          void setWidth(double);
 *                          double getLength();
 *                          double getWidth();
 *                          double calcArea();
 *                  };
 *
 *                  class Carpet
 *                  {
 *                      private:
 *                          double pricePerSqYd;
 *                          Rectangle size;             // size is an instance of
 *                                                      // the Rectangle class
 *                      public:
 *                          void setPricePerYd(double p);
 *                          void setDimensions(double l, double w);
 *                          double getTotalPrice();
 *                  };
 *
 *          Notice that the Carpet class has a member variable named size, which is an instance of the Rectangle class.
 *          The Carpet class can use this object to store the room dimensions and to compute the area for a carpet
 *          purchase. When one class is nested inside another like this, it is called OBJECT COMPOSITION.
 *
 *          Program11 uses these two classes to create an application that computes carpet prices.
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          20) Assume a Map class has a member variable name position that is an instance of the Location class. The
 *              Location class has a private member variable named latitude and a public member function called
 *              getLatitude. Which of the following lines of code would correctly get and return the value stored in
 *              latitude?
 *                  A) return Location.latitude;
 *                  B) return Location.getLatitude();
 *                  C) return position.latitude;
 *                  D) return position.getLatitude();               ===> CORRECT!
 *
 *          21) Write a class declaration for a class named Circle, which has the data member radius, a double, and
 *              member functions setRadius and calcArea. Write the code for these as inline function.
 *
 *                              class Circle
 *                              {
 *                                  private:
 *                                      double radius;
 *                                  public:
 *                                      void setRadius(double r)
 *                                      { radius = r; }
 *                                      double calcArea()
 *                                      { return (3.14159 * radius * radius); }
 *                              };
 *
 *          22) Write a class declaration for a class named Pizza that has the data members price, a double, and size,
 *              a Circle object (declared in question 21). It also has member functions: setPrice, setSize, and
 *              costPerSqIn. Write the code for these as inline functions.
 *
 *                              class Pizza
 *                              {
 *                                  private:
 *                                      double price;
 *                                      Circle size;
 *                                  public:
 *                                      void setPrice(double p)
 *                                      { price = p; }
 *                                      void setSize(double r)
 *                                      { size.setRadius(r); }
 *                                      double costPerSqIn()
 *                                      { return (price / size.getArea()); }
 *                              };
 *
 *          23) Write four lines of code that might appear in a client program using the Pizza class to do the
 *              following:
 *              Define an instance of the Pizza class named myPizza.
 *                              Pizza myPizza;
 *
 *              Call a Pizza function to set the price.
 *                              myPizza.setPrice(12.99);
 *
 *              Call a Pizza function to set the size (i.e., the radius).
 *                              myPizza.setRadius(14);
 *
 *              Call a Pizza function to return the price per square inch and the print it.
 *                              cout << "Price per square inch $" << myPizza.costPerSqIn();
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
 * ***** FOCUS ON SOFTWARE ENGINEERING: SEPARATING CLASS SPECIFICATIONS, IMPLEMENTATION, AND CLIENT CODE *****
 * -----------------------------------------------------------------------------------------------------------
 * - Usually class declarations are stored in their own header files and member function definitions are stored in
 *          their own .cpp files.
 *
 * - In the programs we've looked at so far, the class declaration, the member function definitions, and the application
 *          program that uses the class are all stored in one file. A more conventional way of designing C++ programs is
 *          to store these in three separate files. Typically, program components are stored in the following fashion:
 *
 *          *** Class declarations are stored in their own header files. A header file that contains a class
 *              declarations is called a CLASS SPECIFICATION FILE. The name of the class specification file is usually
 *              the same as the name of the class, with a .h extension. For example, the Rectangle class would be
 *              declared in the file Rectangle.h. The letter h designates if as a header file.
 *          *** Any program that uses the class should #icnlude this header file.
 *          *** The member function definitions for a class are stored in a separate .cpp file, which is called the
 *              CLASS IMPLEMENTATION FILE. The file usually has the same name as the class, with the .cpp extension.
 *              For example the Rectangle class member functions would be defined in the file Rectangle.cpp.
 *          *** The class .cpp file should be compiled and linked with the application program that uses the class. This
 *              program, also known as the CLIENT PROGRAM, or CLIENT CODE, is the one that includes the main function.
 *              This process can be automated with a project or make utility. Integrated development environments such
 *              as Visual Studio also provide the means to create multi-file projects.
 *
 *          Let's see how we would rewrite Program3, the rectangle program, using this design approach. First, the
 *          Rectangle class declaration would be stored in the following Rectangle.h file.
 *
 *
 *                              CONTENTS of Rectangle.h
 *
 *                              1 // Rectangle.h is the Rectangle class specification file
 *                              2 #ifndef RECTANGLE_H
 *                              3 #define RECTANGLE_H
 *                              4
 *                              5 // Rectangle class declaration
 *                              6 class Rectangle
 *                              7 {
 *                              8     private:
 *                              9         double length;
 *                              10         double width;
 *                              11     public:
 *                              12         bool setLength(double);
 *                              13         bool setWidth(double);
 *                              14         double getLength();
 *                              15         double getWidth();
 *                              16         double calcArea();
 *                              17 };
 *                              18 #endif
 *
 *
 * - This is the specification file for the Rectangle class. It contains only the declaration of the Rectangle class.
 *          It does not contain any member function definitions. When we write other programs that use the Rectangle
 *          class, we can have an #include directive that includes this file. That way, we won't have to write the class
 *          declaration in every program that uses the Rectangle class.
 *
 * - This file also introduces two new preprocessor directives: #ifndef and #endif. The #ifndef directive that appear
 *          in line 2 is called an INCLUDE GUARD. It prevents the header file from accidentally being included more
 *          than once. When your main program file has an #include for a header file, there is always the possibility
 *          that the header will have an #include directive for a second header file. If your main program file also has
 *          an #include directive for the second header file, the preprocessor will include the second header file
 *          twice. Unless an include guard has been written into the second header file, an error will occur because
 *          the compiler will process the declarations in the second header file twice. Let's see how an include guard
 *          works.
 *
 * - The word ifndef stands for "IF NOT DEFINED." It is used to determine whether or not a specific constant has
 *          already been defined with another #define directive. When the Rectangle.h file is being compiled, the
 *          #ifndef directive checks for the existence of a constant named RECTANGLE_H. If this constant has not been
 *          defined yet, it is immediately defined in line 3, and the rest of the file is included. However, if the
 *          constant has already been defined, it means that this file has already been included. In that case, it is
 *          not included a second time. Instead, everything between the #ifndef and #endif directive is skipped. Note
 *          that the constant used in the #ifndef and #define directives should be written in all capital letters and is
 *          customarily name FILENAME_H, where FILENAME is the name of the header file.
 *
 *
 *                              CONTENTS of Rectangle.cpp
 *
 *                              1 // Rectangle.cpp is the Rectangle class function implementation file.
 *                              2 #include "Rectangle.h"
 *                              3
 *                              4 /*******************************************************************
 *                              5  *                    Rectangle::setLength                         *
 *                              6  * If the argument passed to the setLength function is zero or     *
 *                              7  * greater, it is copied into the member variable length, and true *
 *                              8  * is returned. If the argument is negative, the value of length   *
 *                              9  * remains unchanged and false is returned.                        *
 *                              10 *******************************************************************
 *                              11 bool Rectangle::setLength(double len)
 *                              12 {
 *                              13      bool validData = true;
 *                              14
 *                              15      if (len >= 0)               // If the len is valid
 *                              16          length = len;           // copy it to length
 *                              17      else
 *                              18          validData = false;      // else leave length unchanged
 *                              19
 *                              20      return validData;
 *                              21 }
 *                              22
 *                              23 /******************************************************************
 *                              24  *                    Rectangle::setWidth                         *
 *                              25  * If the argument passed to the setWidth function is zero or     *
 *                              26  * greater, it is copied into the member variable width, and true *
 *                              27  * is returned. If the argument is negative, the value of width   *
 *                              28  * remains unchanged and false is returned.                       *
 *                              29  ******************************************************************
 *                              30 bool Rectangle::setWidth(double w)
 *                              31 {
 *                              32      bool validData = true;
 *                              33
 *                              34      if (w >= 0)               // If w is valid
 *                              35          width = w;            // copy it to width
 *                              36      else
 *                              37          validData = false;    // else leave width unchanged
 *                              38
 *                              39      return validData;
 *                              40 }
 *                              41
 *                              42 /**************************************************************
 *                              43  *                     Rectangle::getLength                   *
 *                              44  * This function returns the value in member variable length. *
 *                              45  **************************************************************
 *                              46 double Rectangle::getLength()
 *                              47 {
 *                              48      return length;
 *                              49 }
 *                              50
 *                              51 /**************************************************************
 *                              52  *                     Rectangle::getWidth                    *
 *                              53  * This function returns the value in member variable width.  *
 *                              54  **************************************************************
 *                              55 double Rectangle::getWidth()
 *                              56 {
 *                              57      return width;
 *                              58 }
 *                              59
 *                              60 /*******************************************************************
 *                              61  *                        Rectangle::calcArea                      *
 *                              62  * This function calculates and returns the area of the rectangle. *
 *                              63  *******************************************************************
 *                              64 double Rectangle::calcArea()
 *                              65 {
 *                              66      return length * width;
 *                              67 }
 *
 *
 *
 * *** ADVANTAGES OF USING MULTIPLE FILES ***
 * ------------------------------------------
 * - Separating a client program from the details of a class it uses is considered good programming practice. A class
 *          is an example of an abstract data type and, the only thing a programmer writing an application that uses
 *          the class needs to know is what the class does, what kind of data it can hold, what functions it provides,
 *          and how to call them. Programmers, and any programs using the class, do not need to know anything about the
 *          implementation of the class. In addition, often many different programs use a particular class. If the
 *          implementation code that defines the class member functions is in its own separate file, this code does not
 *          have to be in all of these programs. They can each simply #include the file containing the definitions.
 *
 * - Separating a class into a specification file and an implementation file is also considered good programming
 *          practice. If you wish to give your class to other programmers, you don't have to share all of your source
 *          code. You can just provide a copy of the specification file and the compiled object file for the class's
 *          implementation. The other programmers simply insert the necessary #include directive into their programs,
 *          compile them, and link them with your class object file. This prevents other programmers, who might not
 *          understand all the details of your code, from making changes that introduce bugs.
 *
 * - Separating a class into specification and implementation files also makes things easier when class member functions
 *          must be modified. It is only necessary to modify the implementation file and recompile it to create a new
 *          object file. Programs that use the class don't have to be recompiled. They just have to be linked with the
 *          new object file.
 *
 *
 *
 * *** PERFORMING INPUT/OUTPUT IN A CLASS OBJECT ***
 * -------------------------------------------------
 * - In general it is considered good design to have class member functions avoid using cin and cout. This is so
 *          anyone writing a program that uses the class will not be locked into the particular way the class performs
 *          input and output. Unless a class is specifically designed to perform I/O, it is best to leave operations
 *          such as user input and output to the person designing the application. As a general rule, classes should
 *          provide member functions for retrieving data values without displaying them on the screen. Likewise, they
 *          should provide member functions that store data into private member variables without using cin.
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          24) Assume the following class components exist in a program:
 *                  BasePay class declaration
 *                  BasePay member function definitions
 *                  Overtime class declaration
 *                  Overtime member function definitions
 *              What files would you store each of the above components in?
 *
 *                        HEADER File OR
 *                        CLASS SPECIFICATION FILE:  BasePay class declaration              (Basepay.h)
 *                                                   Overtime class declaration             (Overtime.h)
 *
 *                        CLASS IMPLEMENTATION FILE: BasePay member function definitions    (Basepay.cpp)
 *                                                   Overtime member function definitions   (Overtime.cpp)
 *
 *          25) What header files should be included in the client program that uses the BasePay and Overtime classes?
 *                        BasePay header file   (Basepay.h)
 *                        Overtime header file  (Overtime.h)
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
 * ***** STRUCTURES *****
 * ----------------------
 * - C++ allows a set of variables to be combined together into a single unit called a STRUCTURE.
 *
 * - A STRUCTURE is a programmer-defined data type that can hold many different data values. In the past, before the
 *          use of object-oriented programming became common, programmers typically used these to group logically
 *          connected data together into a single unit. Once a STRUCTURE type is declared and its data members are
 *          identified, multiple variables of this type can be created, just as multiple objects can be created for the
 *          same class.
 *
 * - Although STRUCTURES are less commonly used today, it is important that you know what they are and how to use them.
 *          Not only may you encounter them in older programs, but there are actually some instances in which classes
 *          will not work and STRUCTURES must be used.
 *
 * - The way a STRUCTURE is declared is similar to they way a class is declared, with the following differences:
 *          ** The KEY WORD STRUCT is used instead of the KEY WORK CLASS.
 *          ** Although STRUCTURES can include member functions, they rarely do. So normally a STRUCTURE declaration
 *              only declares member variables
 *          ** STRUCTURE declarations normally do not include the access specifiers PUBLIC or PRIVATE.
 *          ** Unlike class members, which PRIVATE by default, members of a STRUCTURE default to being PUBLIC.
 *              Programmers normally want them to remain public and simply use the default.
 *
 * - Here is an example of a declaration for a STRUCTURE that bundles together five variables holding payroll data for
 *          an employee. The name of this particular STRUCTURE is PayRoll. Notice that it begins with a capital letter.
 *          The convention is to begin STRUCTURE names, just like class names, with an uppercase letter. Notice also
 *          that, like a class declaration, there must be a semicolon after the closing brace of the declaration.
 *
 *                              struct PayRoll
 *                              {
 *                                  int     empNumber;
 *                                  string  name;
 *                                  double  hours,
 *                                          payRate,
 *                                          grossPay;
 *                              };
 *
 * - Just as a class declaration is not instantiated until objects of the class are created, a STRUCTURE declaration
 *          does not create any instances of the STRUCTURE. The STRUCTURE declaration in our example simply tells the
 *          compiler what a Payroll STRUCTURE looks like. It in essence creates a new data named Payroll. You define
 *          variables that are Payroll STRUCTURES the way you define any variable, by fist listing the data type and
 *          then the variable name. The following definition creates three variables that are Payroll STRUCTURES.
 *
 *                 Payroll deptHead, foreman, associate;
 *
 * - Each is an instance of a Payroll STRUCTURE, with its own memory allocated to hold its member data. Notice that
 *          although the three STRUCTURE variables have DISTINCT names, each contains members with the SAME name.
 *
 *
 *
 * *** ACCESSING STRUCTURE MEMBERS ***
 * -----------------------------------
 * - Members of a STRUCTURE are accessed just like public members of a class, with the DOT operator. However, the data
 *          members of a class are normally PRIVATE and must be accessed through functions. Because STRUCTURE data
 *          member are PUBLIC, they are accessed directly and can be used like regular variables. The following
 *          statements assign values to the empNumber member of each of the Payroll variables we created.
 *
 *                  deptHead.empNumber = 475;
 *                  foreman.empNumber = 897;
 *                  associate.empNumber = 729;
 *
 *          And the following statements display the contents of all the deptHead's members.
 *                  cout << deptHead.empNumber << endl;
 *                  cout << deptHead.name << endl;
 *                  cout << deptHead.hours << endl;
 *                  cout << deptHead.payRate << endl;
 *                  cout << deptHead.grossPay << endl;
 *
 *          Program13 is a complete program that uses the PayRoll STRUCTURE. Notice how the individual STRUCTURE
 *          members are used just like regular variables in cin statements, in cout statements, and in mathematical
 *          operations.
 *
 *
 *
 * *** DISPLAYING AND COMPARING STRUCTURE VARIABLES ***
 * ----------------------------------------------------
 * - In Program13 each member of the employee structure variable was displayed separately. This is necessary because
 *          the entire contents of a structure variable cannot be displayed by simply passing the whole variable to
 *          cout. For example, the following statement will not work.
 *
 *                  cout << employee << endl;                   // Error!
 *
 * - Likewise, although it is possible to compare the contents of two individual structure members, you cannot perform
 *          comparison operations on entire structures. For example, if employee1 and employee2 are both Payroll
 *          structure variables, this comparison will cause an error.
 *
 *                  if (employee1 == employee2)                 // Error!
 *
 *          The following comparison, however, is perfectly legal.
 *
 *                  if (employee1.hours == employee2.hours)     // Legal
 *
 *
 *
 * *** INITIALIZING A STRUCTURE ***
 * --------------------------------
 * - There are two ways a STRUCTURE variable can be initialized when it is defined: with an INITIALIZATION LIST or with
 *          a CONSTRUCTOR.
 *
 * - The simplest way to initialize the members of a STRUCTURE variable is to use an INITIALIZATION LIST. An
 *          INITIALIZATION LIST is a list of values used to initialize a set of memory locations. The items in the list
 *          are separated by commas and surrounded by braces. Suppose, for example, the following Date STRUCTURE has
 *          been declared:
 *
 *                  struct Date
 *                  {
 *                      int day,
 *                          month,
 *                          year;
 *                  };
 *
 * - A Date variable can now be defined and initialized by following the variable name with the assignment operator and
 *          an initialization list, as shown here:
 *
 *                  Date birthday = {23, 8, 1983};
 *
 * - This statement defines birthday to be a variable which is a Date STRUCTURE. The values inside the curly braces are
 *          assigned to its members in order. It is also possible to initialize just some of the members of a
 *          STRUCTURE variable. For example, if we know the birthday to be stored in August 23 but do not know the year,
 *          the variable could be defined and initialized like this:
 *
 *                  Date birthday = {23, 8};
 *
 *          Only the day and month member are initialized here. The year member is not initialized. If you leave a
 *          STRUCTURE member uninitialized, however, you must leave all the members that follow it uninitialized as
 *          well. C++ does not provide a way to skip members when using an initialization list. The following
 *          statement attempts to skip the initialization of the month member. It is NOT legal.
 *
 *                  Date birthday = {23, , 1983};           // ILLEGAL!
 *
 *          It is important to note that you cannot initialize a STRUCTURE member in the declaration of the structure
 *          because the structure declaration just creates a new data type. No variables of this exist yet. For
 *          example, the following declaration is illegal:
 *
 *                  // Illegal STRUCTURE declaration
 *                  struct Date
 *                  {
 *                      int day   = 23,
 *                          month = 8,
 *                          year  = 1983;
 *                  };
 *
 * - Because a STRUCTURE declaration only declares what a STRUCTURE "looks like," the member variables are not created
 *          in memory until the STRUCTURE is instantiated by defining a variable of that STRUCTURE type. Until then,
 *          there is no place to store an initial value.
 *
 *          Although an initialization list is easy to use, it has two drawbacks:
 *
 *          1) It DOES NOT allow you to leave some members uninitialized and still initialize others that follow.
 *          2) It WILL NOT work on many compilers if the STRUCTURE includes any objects, such as strings.
 *
 * - In these cases you can initialize STRUCTURE member variables the same way you initialize class member variables---
 *          by using a constructor. As with a class constructor, a constructor for a STRUCTURE must be a public member
 *          function with the same name as the STRUCTURE and no return type. Because all STRUCTURE members are PUBLIC by
 *          default, however, the KEY WORD PUBLIC DOES NOT need to be used. Here is a STRUCTURE declaration for a
 *          structure named Employee. It includes a two-argument constructor that provides default values in case an
 *          Employee variable is created without passing any arguments to the constructor.
 *
 *                  struct Employee
 *                  {
 *                      string name;                // Employee name
 *                      int vacationDays,           // Vacation days allowed per year
 *                          daysUsed;               // Vacation days used so far
 *
 *                      Employee(string n = "", int d = 0)      // Constructor
 *                      {
 *                          name = n;
 *                          vacationDays = 10;
 *                          daysUsed = d;
 *                      }
 *                  };
 *
 *
 *
 * *** NESTED STRUCTURES ***
 * -------------------------
 * - Just as objects of one class can be nested within another class, instances of one STRUCTURE can be nested within
 *          another structure. For example, consider the following declarations:
 *
 *                  struct Costs
 *                  {
 *                      double wholesale;
 *                      double retail;
 *                  };
 *
 *                  struct Item
 *                  {
 *                      string partNum;
 *                      string description;
 *                      Costs pricing;              // A NESTED Costs STRUCTURE
 *                  };
 *
 *          The Costs STRUCTURE has two double members, wholesale and retail. The Item STRUCTURE has three members. The
 *          first two, partNum and description, are string objects. The third, pricing is a NESTED Costs STRUCTURE. If
 *          widget is defined to be an Item structure, they would be accessed as follows:
 *
 *                  widget.partNum = "123A";
 *                  widget.description = "iron widget";
 *                  widget.pricing.wholesale = 100.0;
 *                  widget.pricing.retail = 150.0;
 *
 *          Notice that wholesale and retail are not members of widget; pricing is. To access wholesale and retail,
 *          widget's pricing member must first be accessed and then, because it is a Costs STRUCTURE, its wholesale and
 *          retail members can be accessed. Notice also, as with all STRUCTURES, it is the MEMBER name, NOT the
 *          STRUCTURE name, that must be used in accessing a member. The following statements would not be legal.
 *
 *                  cout << widget.retail;                      // Wrong!
 *                  cout << widget.Costs.wholesale;             // Wrong!
 *
 * - When you are deciding whether or not to use NESTED STRUCTURES, think about how various members are related. A
 *          STRUCTURE bundles together items that logically belongs together. Normally the members of a structure are
 *          attributes describing some object. In our example, the object was a widget, and its part number,
 *          description, and wholesale and retail prices were its attributes. When some of the attributes are related
 *          and form a logical subgroup of the object's attributes, it makes sense to bundle them together and use a
 *          NESTED STRUCTURE. Notice the relatedness of the attributes in the inner structure of Program14, which uses
 *          a NESTED STRUCTURE.
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          26) Write a STRUCTURE declaration for a STRUCTURE named Student that holds the following data about a
 *              student:
 *                  ID (int)
 *                  entry year (int)
 *                  GPA (double)
 *
 *              Then write definition statements that create the following two Student variables and initialize them
 *              using initialization lists.
 *                  Variable s1 should have ID number 1234, entry year 2008, and GPA 3.41.
 *                  Variable s2 should have ID number 5678 and entry year 2010. The GPA
 *                  member should be left uninitialized.
 *
 *                          struct Student
 *                          {
 *                              int     id,
 *                                      entryYear;
 *                              double  gpa;
 *                          };
 *                          Student s1(1234, 2008, 3.41);
 *                          Student s2(5678, 2010);
 *
 *
 *          27) Write a STRUCTURE declaration for a STRUCTURE named Account that holds the following data about a
 *              savings account. Include a constructor that allows data values to be passed in for all four members
 *                  Account number (string)
 *                  Account balance (double)
 *                  Interest rate (double)
 *                  Average monthly balance (double)
 *
 *              Now write a definition statement for an Account variable that initializes the members with the
 *              following data:
 *                  Account number: ACZ42137
 *                  Account balance: $4512.59
 *                  Interest rate: 4%
 *                  Average monthly balance: $4217.07
 *
 *                          struct Account
 *                          {
 *                              string acctNum;
 *                              double acctBal,
 *                                     intRate,
 *                                     avgBal;
 *
 *                              Account(string num, double bal, double rate, double avg)
 *                              {
 *                                  acctNum = num;  acctBal = bal;
 *                                  intRate = rate; avgBal = avg;
 *                              }
 *                          };
 *                          Account savings("ACZ42137", 4512.59, .04, 4217.07);
 *
 *
 *          28) The following program skeleton, when complete, asks the user to enter the following information about
 *              his or her favorite movie:
 *                  Name of the movie
 *                  Name of the movie's director
 *                  The year the movie was released
 *
 *              Complete the program by declaration the STRUCTURE that holds this information, defining a STRUCTURE
 *              variable, and writing the required individual statements.

 *                  #include <iostream>
 *                  #include <string>
 *                  using namespace std;
 *
 *                  // Write the structure declaration to hold the movie information.
 *                  struct MovieInfo
 *                  {
 *                      string name,
 *                             director;
 *                      int     year;
 *                  };
 *
 *
 *
 *                  int main()
 *                  {
 *                      // Define the STRUCTURE variable here.
 *                      MovieInfo movie;
 *
 *                      cout << "Enter the following information about your "
 *                           << " favorite movie.\n" << "Name: ";
 *                      // Write as statement here that lets the user enter a movie name.
 *                      // Store it in the appropriate STRUCTURE member.
 *
 *                      cout << "Director: ";
 *                      // Write a statement here that lets the user enter the director's
 *                      // name. Store it in the appropriate STRUCTURE member
 *
 *                      cout << "Year of Release: ";
 *                      // Write a statement here that lets the user enter the movie
 *                      // release year. Store it in the appropriate STRUCTURE member.
 *
 *                      cout << "\nHere is information on your favorite movie.\n";
 *                      // Write statements here that display the information
 *                      // just entered into the structure variable.
 *                      return 0;
 *                  }
 *
 *
 *          29) Write a declaration for a STRUCTURE named Location, with the following three double member variables:
 *              latitude, longitude, and height.
 *
 *                  struct Location
 *                  {
 *                      double latitude,
 *                             longitude,
 *                             height;
 *                  };
 *
 *
 *          30) Write a declaration for a STRUCTURE named City, which has the members cityName, a string, and position,
 *              a Location STRUCTURE (declared above). Then define a variable named destination that is an instance of
 *              the City STRUCTURE.
 *
 *                  struct City
 *                  {
 *                      string cityName;
 *                      Location position;
 *                  };
 *                  City destination;
 *
 *
 *          31) Write assignment statements that store the following information in destination.
 *                  city name   : Tupelo
 *                  latitude    : 34.28     // 34.28 degrees north
 *                  longitude   : -88.77    // 88.77 degrees west
 *                  height      : 361.0     // feet above sea level
 *
 *                  destination.cityName "Tupelo";
 *                  destination.position.latitude = 34.28;      // degrees north
 *                  destination.position.longitude = -88.77;    // degrees west
 *                  destination.position.height    = 361.0;     // ft. above sea level
 *
 *
 *
 * *** PASSING STRUCTURES TO FUNCTIONS ***
 * ---------------------------------------
 * - STRUCTURE variables, just like class objects, can be passed to functions by value, by reference, and by constant
 *          reference. By default, they are passed by value. This means that a copy of the entire original STRUCTURE is
 *          made and passed to the function. Because it is nt desirable to take the time to copy an entire STRUCTURE,
 *          unless it is quite small, STRUCTURES are normally passed to functions by reference. This, however, gives
 *          the function access to the member variables of the original STRUCTURE, allowing it to change them. If you
 *          do not want a function to change any member variable values, the STRUCTURE variable should be passed to it
 *          as a constant reference.
 *
 * - Program15 is a modification of Program9 that defines a STRUCTURE variable and passes it to two functions.
 *
 *
 *
 * *** RETURNING A STRUCTURE FROM A FUNCTION ***
 * ---------------------------------------------
 * - A STRUCTURE variable can also be returned from a function. In this case the return type of the function is the
 *          name of the STRUCTURE. Program15 could have been written to allow the getItemData function to create a
 *          local instance of an InvItem STRUCTURE, place data values into its member variables, and then pass it back
 *          to main, instead of receiving it from main as a reference variable. This is what the revised getItemData
 *          function would look like.
 *
 *                     /****************************************************************
 *                      *                        getItemData                           *
 *                      * This function stores data input by the user in the members   *
 *                      * of a local InvItem STRUCTURE variable and then returns it.   *
 *                      ****************************************************************
 *
 *                      InvItem getItemData()
 *                      {
 *                          InvItem item;           // Create a local InvItem variable
 *                                                  // to hold data until it can be returned.
 *                          cout << "Enter the part number: ";
 *                          cin  >> intem.partNum;
 *                          cout << "Enter the part description: ";
 *                          cin.get();              // Move past the '\n\ left in the
 *                                                  // input buffer by the last input.
 *                          getline(cin, item.description);
 *                          cout << "Enter the quantity on hand: ";
 *                          cin  >> item.onHand;
 *                          cout << "Enter the unit price: ";
 *                          cin  >> item.price;
 *
 *                          return item;
 *                      }
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          Use the following structure declaration to answer the questions in this section.
 *
 *                      struct Rectangle
 *                      {
 *                          int length;
 *                          int width;
 *                      };
 *
 *         32) Write a function that accepts the Rectangle structure defined above as its argument and displays the
 *              structure's contents on the screen.
 *
 *                      void showRec(Rectangle r)
 *                      {
 *                          cout << r.length << endl;
 *                          cout << r.width << endl;
 *                      }
 *
 *         33) Write a function that uses a Rectangle structure reference variable as its parameter and stores the
 *              user's input in the structure's members.
 *
 *                      void getRect(Rectangle &r)
 *                      {
 *                          cout << "Width: ";
 *                          cin  >> r.width;
 *                          cout << "Length: ";
 *                          cin  >> r.length;
 *                      }
 *
 *         34) Write a function that returns a Rectangle structure. The function should create a local Rectangle
 *              variable, store the user's input in its members, and then return it.
 *
 *                      Rectangle getRect()     // Function return type is a Rectangle structure
 *                      {
 *                          Rectangle r;
 *                          cout << "Width: ";
 *                          cin  >> r.width;
 *                          cout << "Length: ";
 *                          cin  >> r.length;
 *                          return r;
 *                      }
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
 * ***** MORE ABOUT ENUMERATED DATA TYPES *****
 * --------------------------------------------
 * - These, as you recall, are programmer-defined data types that consist of a set of values known as ENUMERATORS, which
 *          represent integer constants.
 *
 *
 *
 * *** DECLARING AN ENUM DATA TYPE AND DEFINING VARIABLES ALL IN ONE STATEMENT ***
 * -------------------------------------------------------------------------------
 * - The following code uses two lines to declare an ENUMERATED data type and define a variable of the type.
 *
 *                  enum Car { PORSCHE, FERRARI, JAGUAR };
 *                  Car sportCar;
 *
 * - However, C++ allows you to declare an ENUMERATED data type and define one or more variables of the type in the same
 *          statement. So the previous code could be written like this:
 *
 *                  enum Car { PORSCHE, FERRARI, JAGUAR } sportCar;
 *
 * - The following statement declares the Car data type and defines two variables, myCar and yourCar
 *
 *                  enum Car { PORSCHE, FERRARI, JAGUAR } myCar, yourCar;
 *
 *
 *
 * *** ASSIGNING AN INTEGER TO AN ENUM VARIABLE ***
 * ------------------------------------------------
 * - Even though the enumerators of an ENUMERATED data type are stored in memory as integers, you cannot directly
 *          assign an integer value to an enum variable. For example, assume we have a program that contains the
 *          following declarations:
 *
 *                  enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
 *                  Day today;
 *
 *          We could now write the following assignment statement:
 *
 *                  today = THURSDAY;
 *
 * - However, the following statement is illegal and will produce an error message if you try to compile it.
 *
 *                  today = 3;      // Error!
 *
 * - When assigning a value to an enum variable, you should use a valid enumerator. However, if circumstances require
 *          that you store an integer value in an enum variable, you can do so by casting the integer to the enum data
 *          type. Here is an example:
 *
 *                  today = static_cast<Day>(3);
 *
 *          This statement will produce the same result as:
 *                  today = THURSDAY;
 *
 *
 *
 * *** ASSIGNING AN ENUMERATOR TO AN INT VARIABLE ***
 * --------------------------------------------------
 * - Although you cannot directly assign an integer value to an enum variable, you can directly assign an enumerator to
 *          an integer variable. For example, the following code will work just fine.
 *
 *                 enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
 *                 int today = THURSDAY;
 *                 Day workday = FRIDAY;
 *                 int tomorrow = workday;
 *                 cout << today << "  " << tomorrow << endl;
 *
 *          When this code runs it will display 3 4.
 *
 *
 *
 * *** USING MATH OPERATORS TO CHANGE THE VALUE OF AN ENUM VARIABLE ***
 * --------------------------------------------------------------------
 * - Even though enumerators are really integers and enum variables really hold integer values, you can run into
 *          problems when trying to perform math operations with them. For example, look at the following code.
 *
 *                  Day day1, day2;     // Define two day variables
 *                  day1 = TUESDAY;     // Assign TUESDAY to day1
 *                  day2 = day1 + 1;    // ERROR! This will not work
 *
 * - The third statement causes a problem because the expression day1 + 1 results in the integer value 2. The
 *          assignment operator then attempts to assign the integer value 2 to the enum variable day2. Because C++
 *          cannot implicitly convert an int to a Day, as previously discussed, an error occurs. You can fix this by
 *          using a cast as we did above to explicitly convert the result to the Day data type, as shown here:
 *
 *                  day2 = static_cast<Day>(day1 + 1);      // This works
 *
 *
 *
 * *** USING ENUMERATORS TO OUTPUT VALUES ***
 * ------------------------------------------
 * - As you have already seen, sending an enumerator to cout causes the enumerator's integer value to be displayed. For
 *          example, assuming we are using the Day type previously described, the following statement display 0.
 *
 *                  cout << MONDAY << endl;
 *
 * - If you wish to use the enumerator to display a string such as "Monday," you'll have to write code that produces the
 *          desired string. For example, if workDay is a Day variable that has been initialized to some value, the
 *          following SWITCH statement displays the name of a day, based on the value of the variable.
 *
 *                  switch(workDay)
 *                  {
 *                      case MONDAY   : cout << "Monday";
 *                                      break;
 *                      case TUESDAY  : cout << "Tuesday";
 *                                      break;
 *                      case WEDNESDAY: cout << "Wednesday";
 *                                      break;
 *                      case THURSDAY : cout << "Thursday";
 *                                      break;
 *                      case FRIDAY   : cout << "Friday";
 *                  }
 *
 *
 *
 * *** USING ENUMERATORS TO CONTROL LOOP ***
 * -----------------------------------------
 * - Because enumerators are stored in memory as integers, you can use them to control how many iterations a loop
 *          should perform. However, as discussed above, you cannot assign the result of a math operation to an
 *          enumerator without first casting the result to its enum data type. Therefore, you cannot use the ++ or --
 *          operators directly on an enum variable. The following code will not work.
 *
 *                  Double sales, total = 0.0;
 *
 *                  for (Day workday = MONDAY; workday <= FRIDAY; workday++)    // Wrogn!
 *                  {
 *                      cout << "Enter the sales for day " << (workday + 1) << ": ";
 *                      cin  >> sales;
 *                      total += sales;
 *                  }
 *
 *          We can solve the problem by changing the for statement to the following:
 *
 *                  for (Day workday = MONDAY; workday = FRIDAY; workday = static_cast<Day>(workday + 1))
 *
 *          However, it is simpler to make the loop control variable an int. Then you can write the loop like this:
 *
 *                  for (int workday = MONDAY; workday <= FRIDAY; workday++)
 *                  {
 *                      cout << "Enter the sales for day " << (workday + 1) << ": ";
 *                      cin  >> sales;
 *                      total += sales;
 *                  }
 *
 *
 *
 * *** USING STRONGLY TYPED ENUMS IN C++ 11 ***
 * --------------------------------------------
 * - C++ does not allow multiple enumerators with the same name within the same scope. That is, the same enumerator
 *          name cannot be a member of two different enumerated data types defined or used in the same scope. However,
 *          C++ 11 includes a new type of enum, known as a STRONGLY TYPED ENUM (also known as an ENUM CLASS), to get
 *          around this limitation. Here are two examples of a STRONGLY TYPED ENUM declaration:
 *
 *                  enum class Presidents { MCKINLEY, ROOSEVELT, TAFT };
 *                  enum class VicePresidents { ROOSEVELT, FAIRBANKS, SHERMAN };
 *
 * - These statements declare two STRONGLY TYPE ENUMS, Presidents and VicePresidents. Notice that they look like regular
 *          enum declarations, except that the word class appears after enum. Although both enums contain the same
 *          enumerators, ROOSEVELT, these declarations will compile without an error.
 *
 * - When you use a STRONGLY TYPE ENUMERATED data type, however, you must prefix every enumerator you reference with
 *          the name of the enum it belongs to, followed by the :: operator. Here are three examples:
 *
 *                  Presidents prez = Presidents::ROOSEVELT;
 *                  VicePresidents vp1 = VicePresidents::ROOSEVELT;
 *                  VicePresidents vp2 = VicePresidents::SHERMAN;
 *
 * The first statement defines a Presidents variable named prez and initializes it with the Presidents::ROOSEVELT
 *          enumerator. The second statement defines a VicePresidents variable named vp1 and initializes it with the
 *          VicePresidents::ROOSEVELT enumerator. The third statement defines a VicePresidents variable named vp2 and
 *          initializes it with the VicePresident::SHERMAN enumerator. Notice that even though the enumerator SHERMAN is
 *          only a member of one of the enumerated data types, it still must be preceded by the name of the enum it
 *          belongs to.
 *
 * - Here is an example of an if statement that compares the prez variable with an enumerator:
 *
 *                  if (prez == Presidents::ROOSEVELT)
 *                      cout << "Roosevelt is president!\n";
 *
 * - STRONGLY TYPE ENUMERATORS are stored as integers, like regular enumerators. However, if you want to retrieve a
 *          STRONGLY TYPE ENUMERATOR'S underlying integer value, you must use a cast operator. Here is an example that
 *          assigns the underlying integer value of the Presidents::ROOSEVELT enumerator to the variable x.
 *
 *                  int x static_cast<int>(Presidents::ROOSEVELT) << " "
 *
 * - Here is another example. It displays the integer values of the Presidents::TAFT and the Presidents::MCKINLEY
 *          enumerators
 *
 *                  cout << static_cast<int>(Presidents::ROOSEVELT) << "  "
 *                       << static_cast<int>(Presidents::TAFT) << endl;
 *
 * - When you declare a STRONGLY TYPE ENUM, you can optionally specify any integer data type as the underlying type.
 *          You simply write a colon (:) after the enum name, followed by the desired data type. For example, the
 *          following statement declares an enum that uses the char data type for its enumerators:
 *
 *                  enum class Day : char { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDA };
 *
 * - The following statement shows another example. This statement declares an enum named Water that uses an unsigned
 *          as the data type of its enumerators. Additionally, values are assigned to the enumerators.
 *
 *                  enum class Water : unsigned { FREEZING = 32, BOILING = 212 };
 *
 * - Program16 illustrates the use of STRONGLY TYPED ENUMERATED data types.
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
 * ***** INTRODUCTION TO OBJECT-ORIENTED ANALYSIS AND DESIGN *****
 * ---------------------------------------------------------------
 * - Objected-oriented analysis determines the requirements for a system to clarify what it must be able to do, what
 *          classes are needed, and how those classes are related. Object-oriented design then designs the classes and
 *          specifies how they will carry out their responsibilities.
 *
 * So far you have learned the basics of writing a class, creating an object from the class, and using the object to
 *          perform operations. This knowledge is necessary to create an object-oriented application, but it is not the
 *          first step in designing the application. First, a programmer or an analyst must carefully analyze the
 *          problem to be solved to determine exactly what the program must be able to do. In OOP terminology, this
 *          phase of program development is known as the OBJECT-ORIENTED ANALYSIS PHASE. During this time it is
 *          determined what classes are needed.
 *
 *          The process of object-oriented analysis typically includes the following steps:
 *              1. Identify the classes and objects to be used in the program.
 *              2. Define the attributes for each class.
 *              3. Define the behaviors for each class.
 *              4. Define the relationships between classes.
 *
 *
 *          Let's look at each step more closely.
 *
 *              1. IDENTIFY THE CLASSES AND OBJECTS.
 *              ------------------------------------
 *                  Remember, a class is a package that consists of data and procedures that perform operations on the
 *                  data. In order to determine the classes that will appear in a program, the programmer should think
 *                  of the major data elements and decide what procedures or actions are required for each class. For
 *                  example, consider a restaurant that uses an object-oriented program to enter customer orders. A
 *                  customer order is a list of menu items with their respective prices. The restaurant uses this list
 *                  to charge the customer, so a class could be created to model it. Also, the restaurant's menu has
 *                  several main entrees, appetizers, side dishes, and beverages to choose from. A class could be
 *                  designed to represent menu items as well.
 *
 *                  Classes can be easily designed to model real-world objects, such as customer orders and a
 *                  restaurant's menu items. Here are some other types of items that may be candidates for classes in a
 *                  program.
 *
 *                      - User-interface components, such as windows, menus, and dialog boxes
 *                      - Input/output devices, such the keyboard, mouse, display, and printer
 *                      - Physical objects, such vehicles, machines, or manufactured products
 *                      - Record keeping items, such as customer histories, and payroll records
 *                      - A role played by a human (employee, client, teacher, student, and so forth)
 *
 *
 *              2. DEFINE THE ATTRIBUTES FOR EACH CLASS.
 *              ----------------------------------------
 *                  A class's ATTRIBUTES are the data elements used to describe an object instantiated from the class.
 *                  They are the values needed for the object to function properly in the program. Use the restaurant
 *                  example, here is the beginning of a possible specification for a menuItem class.
 *
 *                  Class name:  MenuItem
 *                  Attributes:  itemName
 *                               price
 *                               category       // 1 = appetizer, 2 = salad,   3 = entree
 *                                              // 4 = side dish, 5 = dessert, 6 = beverage
 *
 *                  And here is the beginning of a possible specification for a CustomerOrder class.
 *
 *                  Class name:  CustomerOrder
 *                  Attributes:  orderNumber
 *                               tableNumber
 *                               serverNumber
 *                               date
 *                               items          // a list of MenuItem objects
 *                               totalPrice
 *                               tip
 *
 *
 *              3. DEFINE THE BEHAVIORS FOR EACH CLASS.
 *              ---------------------------------------
 *                  Once the class's attributes have been defined, the programmer must identify the activities, or
 *                  BEHAVIORS, each class must be capable of performing. For example, some of the activities the
 *                  MenuItem class should be able to perform include.
 *
 *                      - Changing a price
 *                      - Displaying a price
 *
 *                  Some of the activities the CustomerOrder class should be able to perform include
 *
 *                      - Accepting the information for a new order
 *                      - Adding an item to an existing order
 *                      - Returning any information on a previously stored order
 *                      - Calculating the total price of all items on an order
 *                      - Printing a list of ordered items for the kitchen
 *                      - Printing a bill for the patron
 *
 *                  In C++, a class's behaviors are its MEMBER FUNCTIONS.
 *
 *
 *              4. DEFINE THE RELATIONSHIPS BETWEEN CLASSES.
 *              --------------------------------------------
 *                  The last step in our object-oriented analysis phase is to define the relationships that exist
 *                  between and among the classes in a program. The possible relationships may be formally stated as
 *
 *                      - Access
 *                      - Ownership (Composition)
 *                      - Inheritance
 *
 *                  Informally, these three relationships can be described as
 *
 *                      - Uses-a
 *                      - Has-a
 *                      - Is-a
 *
 *                  The first relationship, ACCESS, allows an object to modify the attributes of another object.
 *                  Normally, an object has attributes not accessible to parts of the program outside the object. These
 *                  are known as private attributes. An access relationship between two objects means that one object
 *                  will have access to the other object's private attributes. When this relationship exist, it can be
 *                  said that one object USES the other.
 *
 *                  The second relationship, OWNERSHIP, means that one object has another object as one of its member.
 *                  For example, in our restaurant example, the CustomerOrder class has a list of MenuItem objects as
 *                  one of its attributes. In OOP terminology, this type of relationship is also called COMPOSITION.
 *
 *                  The third relationship is INHERITANCE. Sometimes a class is based on another class. This means that
 *                  one class is a specialized case of the other. For example, consider a program that uses classes
 *                  representing cars, trucks, and jet planes. Although those three types of classes in the real world
 *                  are very different, they have many common characteristics: They are all modes of transportation, and
 *                  they all carry some number of passengers. So each of the three classes could be based on a Vehicle
 *                  class that has attributes and behaviors common to them all.
 *
 *                                      Vehicle
 *                                     ---------
 *                         Car       Truck       Jet Plane
 *
 *
 * In OOP terminology, the Vehicle class is the BASE CLASS and the Car, Truck and Jet Plane classes are DERIVED CLASSES.
 *          All of the attributes and behaviors of the Vehicle class are inherited by the Car, Truck, and Jet Plane
 *          classes. The relationship implies that a car is a vehicle, a truck is a vehicle, and a jet plane is a
 *          vehicle.
 *
 * In addition to inheriting the attributes and behaviors of the BASE CLASS, DERIVED CLASSES add their own. For example,
 *          the Car class might have attributes and behaviors that set and indicate whether it is a sedan or a coupe
 *          and the type of engine it has. The Truck class might have attributes and behaviors that set and indicate the
 *          maximum amount of weight it can carry, and how many miles it can travel between refueling. The Jet Plane
 *          class might have attributes and behaviors that set and indicate its altitude and heading. These added
 *          components of the DERIVED CLASSES make them more specialized than the BASE CLASS.
 *
 *          Once an enterprise and its operations have been analyzed, each class can be designed, and a set of programs
 *          can be developed to automate some of these operations.
 *
 *
 *
 * *** FINDING THE CLASSES ***
 * ---------------------------
 * Let's look further at step 1 in the analysis process: identifying the classes. Over the years, software professionals
 *          have developed numerous techniques for doing this, but they all involve identifying the different types of
 *          real-world objects present in the problem, so that classes can be created for them. One simple and popular
 *          technique involves the following steps:
 *
 *                  1. Get a written description of the problem domain.
 *                  2. Identify all the nouns (including pronouns and noun phrases) in the description. Each of these
 *                      is a potential class.
 *                  3. Refine the list to include only the classes that are relevant to the problem.
 *
 *          Let's take a closer look at each of these steps.
 *
 *
 *          WRITE A DESCRIPTION OF THE PROBLEM DOMAIN
 *          -----------------------------------------
 *              The PROBLEM DOMAIN is the set of real-world objects, parties, and major events related to the problem.
 *              If you understand the nature of the problem you are trying to solve, you can write a description of the
 *              problem domain yourself. If you do not thoroughly understand it, you should have an expert write the
 *              description for you.
 *
 *              For example, suppose we are programming an application that the manager of Joe's Automotive Shop will
 *              use to print service quotes for customers. Here is a description that an expert, perhaps Joe himself,
 *              might have written:
 *
 *              Joe's Automotive Shop services foreign cars and specializes in servicing cars made by Mercedes, Porsche,
 *              and BMW. When a customer brings a car to the shop, the manager gets the customer's name, address, and
 *              telephone number. The manager then determines the make, model, and year of the car, and gives the
 *              customer a service quote. The service quote shows the estimated parts charges, estimated labor charges,
 *              sales tax, and total estimated charges.
 *
 *              The PROBLEM DOMAIN description should include any of the following:
 *
 *                  - Physical objects such as vehicles, machines, or products
 *                  - Any role played by a person, such as manager, employee, customer, teacher, or student
 *                  - The results of a business event, such as a customer order, or in this case a service quote
 *                  - Record keeping items, such as customer histories and payroll records
 *
 *
 *          IDENTIFY ALL OF THE NOUNS
 *          -------------------------
 *              The next step is to identify all of the nouns and noun phrases. (If the description contains pronouns,
 *              include them too.) Here's another look at the previous problem domain description. This time the nouns
 *              and noun phrases appear in capital letters
 *
 *                      JOE'S AUTOMOTIVE SHOP services FOREIGN CARS and specializes in servicing cars made by MERCEDES,
 *                      PORSCHE, and BMW. When a customer brings a CAR to the SHOP, the MANAGER gets the CUSTOMER'S
 *                      NAME, ADDRESS, and TELEPHONE NUMBER. The MANAGER then determines the MAKE, MODEL, and YEAR of
 *                      the CAR and gives the CUSTOMER a SERVICE QUOTE. The SERVICE QUOTE shows the ESTIMATED PARTS
 *                      CHARGES, ESTIMATED LABOR CHARGES, SALES TAX, and TOTAL ESTIMATED CHARGES.
 *
 *              Notice that some of the nouns are repeated. The following lists all of the nouns without duplicating
 *              any of them.
 *
 *                      ADDRESS                     FOREIGN CARS                PORSCHE
 *                      BMW                         JOE'S AUTOMOTIVE SHOP       SALES TAX
 *                      CAR                         MAKE                        SERVICE QUOTE
 *                      CARS                        MANAGER                     SHOP
 *                      CUSTOMER                    MERCEDES                    TELEPHONE NUMBER
 *                      ESTIMATED LABOR CHARGES     MODEL                       TOTAL ESTIMATED CHARGES
 *                      ESTIMATED PARTS CHARGES     NAME                        YEAR
 *
 *
 *          REFINE THE LIST OF NOUNS
 *          ------------------------
 *              The nouns that appear in the problem description are merely candidates to become classes. It might not
 *              be necessary to make classes for them all. The next step is to refine the list to include only the
 *              classes that are necessary to solve the particular problem at hand. Here are the common reasons that a
 *              noun can be eliminated from the list of potential classes.
 *
 *
 *              SOME OF THE NOUNS REALLY MEAN THE SAME THING.
 *              ---------------------------------------------
 *                  In this example, the following sets of nouns refer to the same thing:
 *                      - CARS and FOREIGN CARS both refer to the general concept of a car.
 *                      - JOE'S AUTOMOTIVE SHOP and SHOP both refer to the same shop.
 *
 *                  We can settle on a single class for each of these. In this example we will arbitrarily eliminate
 *                  FOREIGN CARS from the list and use the word CARS. Likewise, we will eliminate JOE'S AUTOMOTIVE SHOP
 *                  from the list and use the word SHOP. The updated list of potential classes is:
 *
 *                      ADDRESS                     -------------               PORSCHE
 *                      BMW                         ---------------------       SALES TAX
 *                      CAR                         MAKE                        SERVICE QUOTE
 *                      CARS                        MANAGER                     SHOP
 *                      CUSTOMER                    MERCEDES                    TELEPHONE NUMBER
 *                      ESTIMATED LABOR CHARGES     MODEL                       TOTAL ESTIMATED CHARGES
 *                      ESTIMATED PARTS CHARGES     NAME                        YEAR
 *
 *
 *              SOME NOUNS MIGHT REPRESENT ITEMS THAT WE DO NOT NEED TO BE CONCERNED
 *              WITH IN ORDER TO SOLVE THE PROBLEM.
 *              --------------------------------------------------------------------
 *                  A quick review of the problem description reminds us of what the application should do: print a
 *                  service quote. To do this, two of the potential classes we have listed are not needed.
 *
 *                      - We can cross SHOP off the list because our application only needs to be concerned with
 *                          individual service quotes. It doesn't need to work with or determine any company wide
 *                          information. If the problem description asked us to keep a total of all the service quotes,
 *                          then it would make sense to have a class for the shop.
 *                      - We will also not need a class for the MANAGER because the problem statement does not ask us
 *                          to process any information about the manager. If there were multiple shop managers, and the
 *                          problem description asked us to record which manager wrote each service quote, it would make
 *                          sense to have a class for the manager.
 *
 *                      The updated list of potential classes at this pont is:
 *
 *                      ADDRESS                     -------------               PORSCHE
 *                      BMW                         ---------------------       SALES TAX
 *                      CAR                         MAKE                        SERVICE QUOTE
 *                      CARS                        -------                     ----
 *                      CUSTOMER                    MERCEDES                    TELEPHONE NUMBER
 *                      ESTIMATED LABOR CHARGES     MODEL                       TOTAL ESTIMATED CHARGES
 *                      ESTIMATED PARTS CHARGES     NAME                        YEAR
 *
 *
 *              SOME OF THE NOUNS MIGHT REPRESENT OBJECTS, NOT CLASSES
 *              ------------------------------------------------------
 *                  We can eliminate MERCEDES, PORSCHE, and BMW as classes because, in this example, they all represent
 *                  specific cars and can be considered instances of a single CARS class. We can also eliminate the word
 *                  CAR from the list because, in the description, it refers to a specific car brought to the shop by a
 *                  customer. Therefore, it would also represent an instance of a CARS class. At this point the updated
 *                  list of potential classes is:
 *
 *                      ADDRESS                     -------------               -------
 *                      ---                         ---------------------       SALES TAX
 *                      ---                         MAKE                        SERVICE QUOTE
 *                      CARS                        -------                     ----
 *                      CUSTOMER                    --------                    TELEPHONE NUMBER
 *                      ESTIMATED LABOR CHARGES     MODEL                       TOTAL ESTIMATED CHARGES
 *                      ESTIMATED PARTS CHARGES     NAME                        YEAR
 *
 *
 *              SOME OF THE NOUNS MIGHT REPRESENT SIMPLE VALUES THAT CAN BE STORED
 *              IN A VARIABLE AND DO NOT REQUIRE A CLASS.
 *              ------------------------------------------------------------------
 *                  Remember, a class contains attributes and member functions. Attributes are related items stored
 *                  within a class object that define its state. Member functions are actions or behaviors the class
 *                  object can perform. If a noun represents a type of item that would not have any identifiable
 *                  attributes or member functions, then it can probably be eliminated from the list. To help determine
 *                  whether a noun represents an item that would have attributes and member functions, ask the
 *                  following questions about it:
 *
 *                      - Would you use a group of related values to represent the item's state?
 *                      - Are there any obvious actions to be performed by the item?
 *
 *                  If the answers to both of these questions are no, then the noun probably represents a value that can
 *                  be stored in a simple variable. If we apply this test to each of the nouns that remain in our list,
 *                  we can conclude that the following are probably not classes: ADDRESS, ESTIMATED, TOTAL ESTIMATED
 *                  CHARGES and YEAR. These are all simple string or numeric values that can be stored in variables.
 *
 *                  Here is the updated list of potential classes:
 *
 *                      -------                     -------------               -------
 *                      ---                         ---------------------       --------
 *                      ---                         ----                        SERVICE QUOTE
 *                      CARS                        -------                     ----
 *                      CUSTOMER                    --------                    ---------------
 *                      -----------------------     -----                       ----------------
 *                      -----------------------     ----                        ----
 *
 *                  As you can see from the list, we have eliminated everything except CARS, CUSTOMERS, and SERVICE
 *                  QUOTE. This means that in our application, we will need classes to represent cars, customers, and
 *                  service quotes. Ultimately, we will write a Car class, a Customer class, and a ServiceQuote class.
 *
 *
 *
 * *** IDENTIFYING CLASS RESPONSIBILITIES ***
 * ------------------------------------------
 * Once the classes have been identified, the next task is to identify each class's responsibilities. Class
 *      responsibilities are
 *              - The things that the class is responsible for knowing
 *              - The actions that the class is responsible for doing
 *
 * When you have identified the things that a class is responsible for knowing, then you have identified the class's
 *      attributes. Likewise, when you have identified the actions that a class is responsible for doing, you have
 *      identified its member functions.
 *
 * It is often helpful to ask the question "In the context of this problem, what must the class know? What must the
 *      class do?" The first place to look for the answers is in the description of the problem domain. Many of the
 *      things that a class must know and do will be mentioned. Some class responsibilities, however, might not be
 *      directly mentioned in the problem domain, so additional analysis is often required. Let's apply this
 *      methodology to the classes we previously identified from our problem domain.
 *
 *      ** The Customer Class **
 *      ------------------------
 *          In the context of our problem domain, what must any object of the Customer class know? The description
 *          mentions the following items, which are all attributes of a customer:
 *
 *              - The customer's name
 *              - The customer's address
 *              - The customer's telephone number
 *
 *          These are all values that can be represented as strings and stored in the class's member variables. The
 *          Customer class can potentially know many other things also. One mistake that can be made at this point is
 *          to identify too many things that an object is responsible for knowing. In some applications, for example, a
 *          Customer class might know the customer's email address. However, this particular problem domain does not
 *          mention that the customer's email address is used for any purpose, so it is not the responsibility of this
 *          class to know it, and we should not include it as an attribute.
 *
 *          Now let's identify the class's member functions. In the context of our problem domain, what must the
 *          Customer class do? The only obvious actions are:
 *
 *              - Create an object of the Customer class.
 *              - Set and get the customer's name.
 *              - Set and get the customer's address.
 *              - Set and get the customer's telephone number.
 *
 *          From this list we can see that the Customer class will need a constructor, as well as accessor and mutator
 *          functions for each of its attributes.
 *
 *          Notice that the diagram looks like a simple rectangle with three parts. The top section holds the name of
 *          the class. The middle section lists the class attributes, that is, its member variables. The bottom section
 *          lists its member functions. The minus sign to the left of each attribute indicates that it is private. The
 *          plus sign to the left of each function indicates that it is public. Each attribute name is followed by a
 *          colon and its data type. Each function name is followed by a set of parentheses. If the function accepts
 *          any arguments, its parameters will be listed inside these parentheses, along with the data type of each one.
 *          After the parentheses is a colon, followed by the function's return type.
 *
 *                                     *********************************
 *                                     *         Customer              *
 *                                     *********************************
 *                                     *  - name:string                *
 *                                     *  - address:string             *
 *                                     *  - phone:string               *
 *                                     *********************************
 *                                     *  + Customer():                *
 *                                     *  + setName(n:string):void     *
 *                                     *  + setAddress(a:string):void  *
 *                                     *  + setPhone(p:string):void    *
 *                                     *  + getName():string           *
 *                                     *  + getAddress():string        *
 *                                     *  + getPhone():int             *
 *                                     *********************************
 *
 *
 *
 *      ** The Car Class **
 *      -------------------
 *          In the context of our problem domain, what must an object of the CAR class know? The following items are
 *          all attributes of a car and are mentioned in the problem domain:
 *
 *              - The car's make
 *              - The car's model
 *              - The car's year
 *
 *          Now let's identify the class member functions. In the context of our problem domain, what must the CAR
 *          class do? Once again, the only obvious actions are the standard member functions we find in most classes:
 *          constructors, accessors, and mutators. Specifically, the actions are:
 *
 *              - Create an object of the Car class.
 *              - Set and get the car's make.
 *              - Set and get the car's model.
 *              - Set and get the car's year.
 *
 *                                     *********************************
 *                                     *              Car              *
 *                                     *********************************
 *                                     *  - make:string                *
 *                                     *  - model:string               *
 *                                     *  - year:int                   *
 *                                     *********************************
 *                                     *  + Car():                     *
 *                                     *  + setMake(m:string):void     *
 *                                     *  + setModel(m:string):void    *
 *                                     *  + setYear(y:int):void        *
 *                                     *  + getMake():string           *
 *                                     *  + getModel():string          *
 *                                     *  + getYear():int              *
 *                                     *********************************
 *
 *
 *      ** The ServiceQuote Class **
 *      ----------------------------
 *          In the context of our problem domain, what must an object of the ServiceQuote class know? The problem
 *          domain mentions the following items:
 *
 *              - The estimated parts charges
 *              - The estimated labor charges
 *              - The sales tax
 *              - The total estimated charges
 *
 *          Careful thought will reveal that two of these items are the results of calculations: sales tax and total
 *          estimated charges. These items are dependent on the values of the estimated parts and labor charges. In
 *          order to avoid the risk of holding stale data, we will not store these values in member variables. Rather,
 *          we will provide member functions that calculate these values and return them. The other member functions
 *          that we will need for this class are a constructor and the accessors and mutators for the estimated parts
 *          charges and estimated labor charges attributes.
 *
 *                                     *************************************
 *                                     *             ServiceQoute          *
 *                                     *************************************
 *                                     *  - partsCharges:double            *
 *                                     *  - laborCharges:double            *
 *                                     *************************************
 *                                     *  + ServiceQuote():                *
 *                                     *  + setPartsCharges(c:double):void *
 *                                     *  + setLaborCharges(c:double):void *
 *                                     *  + getPartsCharges():double       *
 *                                     *  + getLaborCharges():double       *
 *                                     *  + getSalesTax():double           *
 *                                     *  + getTotalCharges():double       *
 *                                     *************************************
 *
 *
 *
 *          *** CHECKPOINT ***
 *          ------------------
 *          35) What is a problem domain?
 *                  The problem domain is the set of real-world objects, parties, and major events related to a problem.
 *
 *          36) When designing an object-oriented application, who should write a description of the problem domain?
 *                  Someone who has an adequate understanding of the problem. If you adequately understand the nature
 *                  of the problem you are trying to solve, you can write a description of the problem domain yourself.
 *                  If you do not thoroughly understand the nature of the problem, you should have an expert write the
 *                  description for you.
 *
 *          37) How do you identify the potential classes in a problem domain description?
 *                  Start by identifying all the nouns (including pronouns and noun phrases) in the problem domain
 *                  description. Each of these is a potential class. Then, refine the list to include only the classes
 *                  that are relevant to the problem.
 *
 *          38) What two questions should you ask to determine a class's responsibilities?
 *                  It is often helpful to ask the questions "In the context of this problem, what must the class know?
 *                  What must the class do?"
 *
 *          39) Look at the following description of a problem domain:
 *
 *              A doctor sees patients in her practice. When a patient comes to the practice, the doctor performs one
 *              or more procedures on the patient. Each procedure performed has a description and a standard fee. As
 *              patients leave, they receive a statement that shows their name and address, as well as the procedures
 *              that were performed and the total charges for the procedures.
 *
 *              Assume that you are creating an application to generate a statement that can be printed and given to
 *              the patient.
 *
 *                  A) Identify all of the potential classes in this problem domain.
 *                          Begin by identifying the nouns: doctor, patients, practice, patient, procedure, description,
 *                          fee, statement, office manager, name, address, and total charge. After eliminating
 *                          duplicates, objects, and simple data items that can be stored in variables, the remaining
 *                          list of potential classes is: Doctor, Practice, Patient, Procedure, Statement, and Office
 *                          manager.
 *
 *                  B) Refine the list to include only the necessary class or classes for this problem.
 *                          The necessary classes for this problem are: Patient, Procedure, and Statement.
 *
 *                  C) Identify the responsibilities of the class or classes that you identified in step B.
 *                          The Patient class knows the patient's name and address. The Procedure class knows the
 *                          procedure description and fee. The Statement class knows each procedure that was performed.
 *                          The statement class can calculate total charges.
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
 * ***** SCREEN CONTROL *****
 * --------------------------
 * Operating system functions allow you to control how output appears on the console screen.
 *
 * Until now, all the programs you have created display output beginning on the top line of the screen. They then move
 *          down the screen, one line at a time, when the user presses the [Enter] key or when the program outputs and
 *          endl or "\n". But what if you are writing on the fifth row of the screen and want to go back to the second
 *          row? Or what if you want to display something in the very middle of the screen? You can do these things on
 *          a Windows system by using the SetConsoleCursorPosition function to move the cursor to the desired location
 *          before writing the output.
 *
 * A typical text screen has 25 rows, or lines, with 80 print positions per row. Each of these positions is called a
 *          cell. A cell is a little block that can display a single character, and it is identified by its row number
 *          and its position on that row. The rows range from 0 to 24, with 0 being to top row of the screen. The print
 *          positions on each row, usually referred to as columns, range from 0 to 79, with 0 being at the far left-hand
 *          side. The row and column of a cell, which identifies its location on the screen, are called its COORDINATES.
 *
 * To place the cursor in a specific screen cell, you must specify its cell coordinates by setting two variables in a
 *          COORD structure that is already defined in Windows. This structure has two member variables named X and Y,
 *          with X holding the column and Y holding the row. Here is what the structure looks like.
 *
 *                  struct COORD
 *                  {
 *                      short int X;    // Column position
 *                      short int Y;    // Row position
 *                  };
 *
 *          Here is how you use it. The following code segment writes the word Hello centered on the standard output
 *          screen.
 *
 *                  HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
 *                  COORD position;         // position is a COORD structure
 *
 *                  position.X = 38;        // Set column near screen center
 *                  position.Y = 11;        // Set row near screen center
 *                                          // Place cursor there, then print
 *                  SetConsoleCursorPosition(screen, position);
 *                  cout << "Hello" << endl;
 *
 * Program18 positions the cursor to display a set of nested boxes near the center of the screen. This function pauses
 *          the program execution for part of a second so things do not happen too fast for the user to see them. The
 *          argument passed to the function tells it how many milliseconds it should pause. A millisecond is a
 *          thousandth of a second. So, for example, to pause execution of a program for a half second, the following
 *          function call would work.
 *
 *                  Sleep(500);
 *
 *          Program18 uses the command Sleep(750) to pause the program execution for 3/4 of a second after each box
 *          displays.
 *
 *
 * Program18 is fun to run, but Program19 demonstrates a more practical application of positioning the cursor on the
 *          screen. Instead of prompting the user to input a series of entries one prompt at a time, we can design a
 *          screen input form. This more professional-looking way of getting input from the user involves creating and
 *          displaying a screen that shows all the prompts at once. The cursor is then placed beside a particular prompt
 *          the user is expected to respond to. When the user enters the data for this prompt and presses [Enter], the
 *          cursor moves to the prompt.
 **/




































































































































































































