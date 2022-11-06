
#include <stdio.h>

/*function prototypes*/

void start();
void prompt1();
void choice1();
void scen1();
void scen2();
void plot1();
void plot2();
void storyline1();
void storyline2();
void alienFun();
void alienAttack();
void ending();
void endMessage();

void start()
{
    /*beginning of game / choosing spacecraft*/

    int response = 0; 
    printf("Press 1 to begin your adventure: ");
    scanf("%d", &response);

    if(response == 1)
    {
        printf("                    \n");
        printf("********************\n");
        printf("***  Begin !!!  ****\n");
        printf("********************\n");

        printf("                    \n ");
        printf("You have been chosen to search for a new planet!\n");
        printf("Choose your transport.\n");
        printf("                      \n");
        printf("1. X Wing\n");
        printf("2. TARDIS\n");
        printf("3. Starship Enterprise \n");
        printf("Enter the number of your space craft: ");

        printf("                   \n");
        int res = 0;
        scanf("%d", &res);

        if(res == 1)
        {
            printf("             \n");
            printf("You have boarded your X Wing!\n");
            printf("Liftoff!!! May the force be with you!\n");
            printf("             \n");
        }

        if(res == 2)
        {
            printf("             \n");
            printf("You have boarded the TARDIS! \n");
            printf("Liftoff!!!\n");
            printf("             \n");
        }

        if(res == 3)
        {
            printf("             \n");
            printf("You have boarded the Starship Enterprise!!!\n");
            printf("Boldly go where no man has gone before!!!\n");
            printf("             \n");
        }
    }
}

void prompt1()
{ 
    /*prompt that introduces alien planet*/

    printf("                   \n");
    printf("*******************\n");
    printf("                   \n");
    printf("After flying for some time you come ");
    printf("across what appears to be a planet!!!\n");
}

void choice1()
{
    /*first choice of landing or continuing*/

    printf("                   \n");
    printf("You can either: \n");
    printf("1. Land on the planet.\n");
    printf("2. Continue flying.\n");
    printf("Enter your choice: ");

    int choice = 0;
    scanf("%d", &choice);
    if(choice == 1)
    {
        printf("                                  \n");
        printf("You decided to land on the planet.\n");
        printf("You are able to land on the planet safely.\n");
        printf("                                  \n");
        scen1();
    }

    if(choice == 2)
    {
        printf("                     \n");
        printf("You continued flying.\n");
        printf("                     \n");
        scen2();
    }
}

void scen1()
{
    /*result if you decided to land on the planet*/

    printf("                   \n");
    printf("You and your companions go exploring on the planet.\n");
    printf("You see a civilization in the distance...\n");
    printf("                    \n");
    printf("You can either: \n");
    printf("1. Go to the civilization.\n");
    printf("2. Go back to the ship.\n");
    printf("Enter your choice: ");

    int choice = 0;
    scanf("%d", &choice);

    if(choice == 1)
    {
        plot1();
    }

    if(choice == 2)
    {
        plot2();
    }

}

void scen2()
{
    /*result if you decided to continue flying*/

    printf("              \n");
    printf("As you are flying, there is a space storm.\n");
    printf("You are forced to land on the planet.\n");
    printf("              \n");
    scen1();
}

void plot1()
{
    /*result if you approach the alien civilization*/

    printf("               \n");
    printf("You and your crew reach the civilization.\n");
    printf("A group of aliens approaches you. You can either: \n");
    printf("1. Speak to the aliens. \n");
    printf("2. Run from the aliens.\n");
    printf("Enter your choice: ");

    int choice = 0;
    scanf("%d", &choice);

    if(choice == 1)
    {
        storyline1();
    }

    if(choice == 2)
    {
        storyline2();
    }
}

void plot2()
{
    /*result if you return to the ship*/

    printf("          \n");
    printf("You and your crew return to the ship.\n");
    printf("After boarding the ship, you take off.\n");
    scen2();

}

void storyline1()
{
    /*result if you speak to the aliens*/

    printf("         \n");
    printf("You and your crew attempt to speak to the aliens.\n");
    printf("The aliens make a series of confusing noises...\n");
    for(int i = 0; i < 10; i++)
    {
        printf("wooo yah lalala\n");
    }
    printf("          \n");
    printf("You and your crew are confused.\n");
    printf("Click 1 to continue: ");

    int click = 0;
    scanf("%d", &click);

    if(click == 1)
    {
        alienFun();
    }
}

void alienFun()
{
    /*result for after the aliens confuse the crew*/

    printf("      \n");
    printf("The sounds subside.\n");
    printf("The alien that appears to be leader of the group steps forward.\n");
    printf("The alien makes a noise that sounds similar to laughing.\n");
    printf("        \n");
    
    printf("It speaks:\n");
    printf("We are joking travelers! What brings you to our planet?\n");
    printf("       \n");

    printf("You and the crew tell the group of your explorations.\n");
    printf("The aliens are intrigued, and help you fix your ship to withstand the storm.\n");
    printf("        \n");
    ending();
}

void storyline2()
{
    /*result if you run from the aliens*/

    printf("          \n");
    printf("You and your crew run away from the aliens.\n");
    printf("The group of aliens chases you.\n");
    printf("       \n");
    printf("You can either: \n");
    printf("1. Stop running from the aliens.\n");
    printf("2. Confront the aliens.\n");
    printf("Enter your choice: ");

    int choice = 0; 
    scanf("%d", &choice);
    
    if(choice == 1)
    {
        printf("           \n");
        printf("You and your crew stop running from the aliens.\n");
        printf("You decide to try to speak to the group.\n");
        storyline1();
    }

    if(choice == 2)
    {
        alienAttack();
    }

}

void alienAttack()
{
    /*result if you choose to attack the aliens*/

    printf("     \n");
    printf("You and your crew decide to confront the aliens.\n");
    printf("A member of your crew attacks one of the aliens.\n");
    printf("This is unwise, and the group of aliens begins to attack your group.\n");
    printf("         \n");

    printf("You and your crew run for your ship. \n");
    printf("The storm has subsided, and you are able to leave the planet.\n");
    endMessage();
}

void ending()
{
    /*ending for post alien encounter*/

    printf("            \n");
    printf("With the ship fixed,you and your crew are able to continue exploring space.\n");
    printf("You have also gained a new crew member! One of the aliens wanted to explore with you!\n");
    printf("You and your crew continue to have galactic adventures.\n");
    endMessage();
}

void endMessage()
{
    /*prints message for the end of the game*/

    printf("              \n");
    printf("**************\n");
    printf("              \n");

    printf("Thank you for playing!!!\n");
}

int main(void)
{
    /*initial prompts to user*/

    printf("*** Welcome to the space simulator !!! ***\n");
    printf("This is a choose your own adventure game where\n");
    printf("your decisions affect the outcome of the game\n");

    start();
    prompt1();
    choice1();
}
