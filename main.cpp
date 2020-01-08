/*
 
 Chapter 2 Part 5 Task:
 User-Defined Types
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */

struct SoftwareEngineer 
{
    float experienceLevel;
    bool isAtMeeting;
    bool hasCubicle;
    bool likesPairedProgramming;    
    bool isMentor;
    int numberOfCoffees;

    struct Meeting 
    {
        bool isDevDiscussion;
        float timeStart;
        float timeEnd;
        float currentTimeElapsed;


        void timePasses() 
        {
            currentTimeElapsed += 1.00f;
        }
    };

    bool isEngineersMeetingOver(Meeting meeting);

    void goToMeeting(Meeting meeting);

};

/*
 2)
 */

struct FlatTopGrill  
{
    bool isClean;
    bool isHot;
    bool isOiled;
    float spaceAvailable;

    void turnOn();
    void turnOff();
};
/*
 3)
 */
 struct Fryer
 {
    bool isFullOfOil;
    bool hasFriesInIt;
    bool isHot;

    void turnOn();
    void turnOff();
 };
/*
 4)
 */
 struct Chef
 {
    float experienceLevel;
    bool isGourmet;
    int typeId;

    void writeRecipe();
    void trainCook();
 };

/*
 5)
 */

struct Knife
{
    bool isSharp;

    void cutFood();
};


/*
 6)
 */

struct Cook
{
    float experienceLevel;
    int age;
    bool reliable;

    void learnFromChef();
    void cookFood();
    void cleanKitched();

    void sharpenKnife(Knife knife)
    {
        if (!knife.isSharp)
        {
            knife.isSharp = true;
        }
    }
};

/*
 7)
 */
struct Ingredient 
{
    float spiceLevel;
    int quantity;
};

/*
 8)
 */
struct Meal
{
    Ingredient rice;
    Ingredient sauce;
    Ingredient chicken;
    Ingredient bellPepper;
    Ingredient onion;
    Ingredient avacado;
};

/*
 9)
 */
struct Kitchen 
{
    FlatTopGrill flatTopGrill;
    Fryer fryer;
    Chef chef;
    Cook cook;
    Knife knife;


    Meal produceMeal();
};

/*
 10)
 */
struct Dog
{
    bool hasToy;
    bool hasFood;
    
    void play();
};


#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
