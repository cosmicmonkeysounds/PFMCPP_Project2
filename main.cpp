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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int
 unsigned int
 float
 double
 bool
 char
 void // I understand this is a return type and not used for variable declarations, but some resources say this is a primitive type, so I am including it.
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    int semitoneFromRoot = -3;
    int latticeCoordinate = -20;
    int dailyCalorieIntake = 2400;
    
    unsigned int keyPressed = 88;
    unsigned int filterMode = 2;
    unsigned int numberOfMistakes = 9001;

    float frequency = 440.0f;
    float cutoffFreq = 1002.14f;
    float distance = 192.83f;

    double planckNumber = 6.62607015e-34;
    double cosmologicalConstant = 2.036e-35;
    double gravitationalConstant = 6.6743e-11;

    bool shouldWeMakeANoise = true;
    bool filterEnabled = false;
    bool humanizeEnabled = false;

    char version = 'B';
    char myGrade = 'F';
    char averageGrade = 'C';
    
    
    ignoreUnused(number, semitoneFromRoot, latticeCoordinate, dailyCalorieIntake, keyPressed, filterMode, numberOfMistakes, frequency, cutoffFreq, distance, planckNumber, cosmologicalConstant, gravitationalConstant, shouldWeMakeANoise, filterEnabled, humanizeEnabled, version, myGrade, averageGrade); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void makeNoise(int note, int instrument)
{
    ignoreUnused(note, instrument);
}


/*
 2)
 */
float calculateVelocity(float distanceA, float distanceB, float dt)
{
    ignoreUnused(distanceA, distanceB, dt);
    return {};
}

/*
 3)
 */

int caloriesBurned(float minutesOfExercise)
{
    ignoreUnused(minutesOfExercise);
    return {};
}

/*
 4)
 */
void addInstrument(int instrument = 10)
{
    ignoreUnused(instrument);
}

/*
 5)
 */
void removeInstrument(int instrument = 10)
{
    ignoreUnused(instrument);
}

/*
 6)
 */
void readMIDI(int input = 0)
{
    ignoreUnused(input);
}

/*
 7)
 */
float noteToFreq(int note)
{
    ignoreUnused(note);
    return {};
}


/*
 8)
 */
int freqToNote(float freq)
{
    ignoreUnused(freq);
    return {};
}

/*
 9)
 */
float newtonsMethod(float x, float dx, float guess = 1)
{
    ignoreUnused(x, dx, guess);
    return {};
}


/*
 10)
 */
int fibonacci(int fibNumber = 100)
{
    ignoreUnused(fibNumber);
    return {};
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    makeNoise(1, 44);
    
    //2)
    auto velocity = calculateVelocity(1.5f, 20.4f, 5.03f);
    
    //3)
    auto burntCalories = caloriesBurned(45.3f);
    
    //4)
    addInstrument();
    
    //5)
    removeInstrument(11);
    
    //6)
    readMIDI(1);
    
    //7)
    auto freq = noteToFreq(22);
    
    //8)
    auto note = freqToNote(432.0f);
    
    //9)
    auto newtonApprox = newtonsMethod(10.2f, 2.2f, 8.254f);
    
    //10)
    auto fibNum = fibonacci(1000);
    
    
    ignoreUnused(carRented, velocity, burntCalories, freq, note, newtonApprox, fibNum);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
