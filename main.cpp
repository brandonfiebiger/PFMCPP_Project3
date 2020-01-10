/*
  Chapter 2 Part 6 
 Implementations tasks
 
 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */


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
