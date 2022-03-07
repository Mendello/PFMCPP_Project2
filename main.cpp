#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:

int
float
bool
double
char
unsigned int
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2    
    
    int cars = 4;
    int coins = -300;
    int fingers = 5;
    float height = 16.f;
    float width = 80.9f;
    float diff = -20.4f;
    bool isOpen = true;
    bool isRed = false;
    bool moneyAvailable = false;
    double betterThanFloat = 40.5;
    double smallNumber = 2E-1;
    double numberOfBitcoins = 1.4;
    char space = 'X';
    char lengthInBit = 8;
    char bestGrade = 'A';
    unsigned int maximum = 32;
    unsigned int onlyPositive = 1;
    unsigned int whatEver = 50;
    
    ignoreUnused(number, cars, coins, fingers, height, width, diff, isOpen, isRed, moneyAvailable, betterThanFloat, smallNumber, numberOfBitcoins, space, lengthInBit, bestGrade, maximum, onlyPositive, whatEver); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int getheight(int upperBound = 5, int lowerBound = 3)
{
    ignoreUnused(upperBound, lowerBound);
    return {};
}
/*
 2)
 */
int changeColor(float alpha, int red = 100, int green = 0, int blue = 0)
{
    ignoreUnused(alpha, red, green, blue);
    return {};
}
/*
 3)
 */
float getPercentage(float numberA, float numberB)
{
    ignoreUnused(numberA, numberB);
    return {};
}
/*
 4)
 */
void sendMessage(bool isRecipientSet = true, bool isSubjectSet = true)
{
    ignoreUnused(isRecipientSet, isSubjectSet);
}
/*
 5)
 */
double listProperties(int length, int numberOfElements, bool isSorted)
{
    ignoreUnused(length, numberOfElements, isSorted);
    return {};
}
/*
 6)
 */
void autopilot(bool isOn = true, bool sensorCheck = true, int systemErrors = 0)
{
    ignoreUnused(isOn, sensorCheck, systemErrors);
}
/*
 7)
 */
double treeClassification (int numberOfBranches, char typeOfLeafs = 'A', char typeOfBark = 'G')
{
    ignoreUnused(numberOfBranches, typeOfLeafs, typeOfBark);
    return {};
}
/*
 8)
 */
unsigned int getIndex(unsigned int end, unsigned int start = 0)
{
    ignoreUnused(end, start);
    return {};
}
/*
 9)
 */
bool whichVehicle (int numberOfWheels, bool hasMotor)
{
    ignoreUnused(numberOfWheels, hasMotor);
    return {};
}
/*
 10)
 */
void drawPPM(double inputStream = 0xf, double bufferSize = 1024, double frameIndex = 0)
{
    ignoreUnused(inputStream, bufferSize, frameIndex);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto height = getheight(3, 6);
    //2)
    auto color = changeColor(1.5f, 255, 255, 255);
    //3)
    auto percentage = getPercentage(50.f, 20.3f);
    //4)
    sendMessage();
    //5)
    auto list = listProperties(4096, 20, true);
    //6)
    autopilot();
    //7)
    auto tree = treeClassification(40, 'F', 'Z');
    //8)
    auto index = getIndex(0, 128);
    //9)
    auto bike = whichVehicle(2, true);
    //10)
    drawPPM();
    
    ignoreUnused(carRented, height, color, percentage, list, tree, index, bike);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
