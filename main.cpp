/*
 Project 3 - Part 3
 video: Chapter 2 - Part 8
 Constructors tasks

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) Instantiate a few of your user-defined types in the main function at the bottom of that file, and call some of those member functions.
 
 3) make them print out something interesting via std::cout
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type
{
    int a; //a member variable
    UDT() { a = 0; }             //3) the constructor
    void printThing()            //1) the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //5) printing out something interesting
    }
};

int main()
{
    UDT foo;              //4) instantiating a UDT in main()
    foo.printThing();     //4) calling a member function of the instance that was instantiated.
    
    return 0;
}
}


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

bool SoftwareEngineer::isEngineersMeetingOver(Meeting meeting)
{
    return meeting.timeEnd - meeting.currentTimeElapsed <= meeting.timeStart;
}

void SoftwareEngineer::goToMeeting(Meeting meeting)
{   
    if( meeting.isDevDiscussion) 
    {
        isAtMeeting = true;
    }
}

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

void FlatTopGrill::turnOn()
{
    isHot = true;
}

void FlatTopGrill::turnOff()
{
    isHot = false;
}
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

void Fryer::turnOn()
{
    isHot = true;
}

void Fryer::turnOff()
{
    isHot = false;
}

/*
 4)
 */

struct Knife
{
    bool isSharp;

    void cutFood();
};

void Knife::cutFood()
{
    //cuts food.
}

/*
 5)
 */
struct Cook
{
    float experienceLevel;
    int age;
    bool reliable;

    void learnFromChef( float duration);
    void cookFood();
    void cleanKitchen();

    void sharpenKnife(Knife knife);
};

void Cook::sharpenKnife(Knife knife)
{
    if (!knife.isSharp)
    {
        knife.isSharp = true;
    }
}

void Cook::cookFood()
{
    //cooks food
}

void Cook::cleanKitchen()
{
    //cleans kitchen.
}

void Cook::learnFromChef( float duration)
{
    experienceLevel += duration;
}
/*
 6)
 */
struct Chef
{
    float experienceLevel;
    bool isGourmet;
    int typeId;

    void writeRecipe();
    void trainCook( Cook cook, float duration);
};

void Chef::writeRecipe()
{
    //writes recipe
}

void Chef::trainCook( Cook cook, float duration)
{
    cook.experienceLevel += duration;
}
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

    void produceMeal();
};

void Kitchen::produceMeal()
{
   //produces meal.
}

/*
 10)
 */
struct Dog
{
    bool hasToy;
    bool hasFood;
    
    void play();
};

void Dog::play()
{
    //dog plays
}


#include <iostream>
int main()
{
	Example::main();
    std::cout << "good to go!" << std::endl;
}
