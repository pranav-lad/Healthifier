// All header Files
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// Pranav Lad
// User Structure, All merging, animations and flow
struct user
{
    char name[20];
    int age;
    int weight;
    int height;
    int pro;
    int password;
} user1;

// Functions to set Colors in C :-
void red()
{
    printf("\033[1;31m");
}
void yellow()
{
    printf("\033[1;33m");
}
void black()
{
    printf("\033[0;30m");
}
void green()
{
    printf("\033[0;32m");
}
void blue()
{
    printf("\033[0;34m");
}
void purple()
{
    printf("\033[0;35m");
}
void cyan()
{
    printf("\033[0;36m");
}
void reset()
{
    printf("\033[0m");
}
                 
//  Background color

/*  For system color function
    0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White

*/

void green_black(){
    system("COLOR 10");
}

void reset_background(){
    system("COLOR 00");
}

// Main functions
void calorimeter();
void dietplanner();
void exerciseplanner();
void healthfacts();
void bmicalculator();
void bmi();
void end_message();

// Getting User Details...
void getdetails()
{
    printf("\n\n\n\n\t\tUsername : ");
    scanf("%s", user1.name);
    printf("\t\tPassword : ");
    scanf("%d", &user1.age);
}

// Processing Animation...
void processing(){
    cyan();
    printf("\n\tProcessing.");
    printf("| ");
    // sleep(1);
    reset();
    system("cls");
    title();
    reset();
    printf("\n\tProcessing..");
    printf("/ ");
    sleep(1);
    system("cls");
    title();
    reset();
    printf("\n\tProcessing...");
    printf("-- ");
    sleep(1);
    system("cls");
    title();
    reset();
    printf("\n\tProcessing....");
    printf("\\ ");
    sleep(1);
    system("cls");
    title();
    reset();
    printf("\n\tProcessing....");
    printf("| ");
    sleep(1);
    system("cls");
    reset();
}

// Introductory Message...
void introduction()
{
    yellow();
    sleep(1);
    for (int i = 0; i < 40; i++) {
        printf("\n\n\n\n\n\n\n\t\t");
        for (int i1 = 0; i1 < i; i1++) {
            printf(" |");
        }
            system("cls");
    }
    for (int i = 0; i < 60; i++) {
        printf("\n\n\n\n\n\t\tHi, %s", user1.name);
        system("cls");
    }
    printf("\n\n\n\n\n\t\tHi, %s", user1.name);
    sleep(1);
    cyan();
    printf("\n\n\t\tWelcome to");
    reset();
    sleep(1);
    system("cls");
    blue();
    sleep(1);
    printf("\t\t       ___________________________\n");
    printf("\t\t       ---------------------------------------------------------------------------------");
    sleep(1);
    printf("\n");
    cyan();
    printf("\t\t\t   |  |  |====     ^     |      =====  |  |  ==|==  |====  ==|== |====  |==   \n");
    green();
    printf("\t\t\t   |  |  |        / \\    |        |    |  |    |    |        |   |      |  |   \n");
    printf("\t\t\t   |==|  |==     /===\\   |        |    |==|    |    |====    |   |==    |==   \n");
    printf("\t\t\t   |  |  |      /     \\  |        |    |  |    |    |        |   |      | \\   \n");
    cyan();
    printf("\t\t\t   |  |  |==== /       \\ |====    |    |  |  ==|==  |      ==|== |====  |  \\   \n");
    sleep(1);
    blue();
    printf("\t\t       ___________________________\n");
    printf("\t\t       ---------------------------------------------------------------------------------");
    sleep(1);
    printf("\n\n");
    reset();
}

// Healthifier Title...
void title()
{
    system("cls");
    cyan();
    printf("\t   ___________________________\n");
    // printf("\t   ---------------------------------------------------------------------------------");
    printf("\n\n");
    printf("\t   |  |  |====     ^     |      ==|==  =====  |  |  ==|==  |====  ==|== |====  |==   \n");
    printf("\t   |  |  |        / \\    |        |      |    |  |    |    |        |   |      |  |   \n");
    printf("\t   |==|  |==     /   \\   |        |      |    |==|    |    |====    |   |==    |==   \n");
    printf("\t   |  |  |      /=====\\  |        |      |    |  |    |    |        |   |      | \\   \n");
    printf("\t   |  |  |==== /       \\ |====  ==|==    |    |  |  ==|==  |      ==|== |====  |  \\   \n");
    // printf("\t   ___________________________\n");
    printf("\n\t   ---------------------------------------------------------------------------------");
    reset();
}

void dashboard(){
    title();
    red();
    printf("\n\t\t\t\t\t\t\t-----------");

    printf("\n\t\t\t\t\t\t\t DashBoard\n");
    printf("\t\t\t\t\t\t\t-----------\n\n");
    sleep(1);
    yellow();
    printf("\t\t\t\t\t\t    | 1.Calorimeter    |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 2.Diet Plan      |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 3.Exercise Plan  |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 4.Health Facts   |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 5.BMI Calculator |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 6.Payment Window |\n");
    printf("\t\t\t\t\t\t --------------------------\n");
    printf("\t\t\t\t\t\t |  7 / 0 : Exit Program  |\n");
    reset();
    printf("\n\n\t\t\t\tEnter your option :==> ");
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 0:
        end_message();
        return;
        break;
    case 1:
        calorimeter();
        break;
    case 2:
        dietplanner();
        break;
    case 3:
        exerciseplanner();
        break;
    case 4:
        healthfacts();
        break;
    case 5:
        bmi();
        break;
    case 6:
        payment();
        break;
    case 7:
        end_message();
        return;
    }
}

void payment(){
    red();
    printf("\n\n\n\t\tGood Choice!");
    sleep(1);
    system("cls");
    printf("\n\n\n\n\t\tTo Get Healthifier Pro\n");
    cyan();
    sleep(1);
    printf("\n\n\t1.After instruction the site will load automatically.\n");
    sleep(4);
    printf("\n\t2.Then follow the instructions on the site.\n");
    sleep(3);
    printf("\n\t3.After Payment : \"Copy The Code\" at the end of the site and \"paste it here\"...\n");
    sleep(4);
    reset();
    printf("\n\tRead the instructions?\n\t");
    system("Pause");
    red();
    printf("\n\n\n\tLoading site in...\n");
    printf("\t3");
    sleep(1);
    printf("..2");
    sleep(1);
    printf("..1\n\n\n");
    sleep(1);
    system("cmd /c start https://pranavlad.me");
    sleep(4);
    system("cls");
    title();
    yellow();
    printf("\n\t|  PRO  |");
    red();
    not_right :
    printf("\n\n\n\n\t\t\t\t--------------------\n");
    printf("\t\t\t\t|Please enter Code | ");
    printf("\n\t\t\t\t--------------------\n");
    printf("\n\t\t\t\t --> ");
    int code;
    scanf("%d", &code);
    sleep(1);
    printf("\n");
    if(code == 3454){
        green();
        printf("\n\t\t Payment Successfull ! Enjoy... Healthifier PRO \n\n\t");
    }
    else{
        red();
        printf("\n\t\t Wrong Code please try again ..... \n\n\t");
        goto not_right;
    }
    reset();
    system("Pause");
    dashboard();
}

int main()
{

    system("cls");
    green_black();
    getdetails();
    reset();
    introduction();
    red();
    printf("\t\t\t\t\t\t\t-----------");

    printf("\n\t\t\t\t\t\t\t DashBoard\n");
    printf("\t\t\t\t\t\t\t-----------\n\n");
    sleep(1);
    yellow();
    printf("\t\t\t\t\t\t    | 1.Calorimeter    |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 2.Diet Plan      |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 3.Exercise Plan  |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 4.Health Facts   |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 5.BMI Calculator |\n");
    printf("\t\t\t\t\t\t    --------------------\n");
    printf("\t\t\t\t\t\t    | 6.Payment Window |\n");
    reset();
    printf("\n\n\t\t\t\tEnter your option :==> ");
    int x;
    scanf("%d", &x);
    system("cls");
    title();
    reset();
    processing();

    // Running choice...
    switch (x)
    {
    case 1:
        calorimeter();
        break;
    case 2:
        dietplanner();
        break;
    case 3:
        exerciseplanner();
        break;
    case 4:
        healthfacts();
        break;
    case 5:
        bmi();
        break;
    case 6:
        payment();
        break;
    }
}

// Main Function codes..

// ==========================================================================================================
// Nipun Kulkarni
void calorimeter()
{
    system("cls");
    title();
    green();
    printf("\n\n\n\t\tWelcome to Calorimeter ");
    printf("\n\t\t----------------------\n");
    printf("\n\n\n");
    int i = 0, p = 0, a = 0, b = 0;
    int eat[] = {266, 299, 312, 390, 110, 200, 150, 156, 546, 0};
    int work[] = {106, 105, 245, 103, 75, 157, 106, 209, 1};
    sleep(1);
    red();
    printf("\t\tWhat have you eaten today ?\n");
    printf("\tEnter \"10\" To Stop Input Else Keep Entering Values\n\n");
    sleep(1);
    yellow();
    printf("\n\t1)Pizza 🍕\t2)Chicken Strips 🐥\n\t3)French Fries 🍟\t4)Pav Bhaji 🍱\n\t5)Paneer 🍴\t6)Puranpoli 😋\n\t7)Bhaje or Pakoda 🥟\t8)Egg 🥚\n\t9)Chocolate 🍫 or sugary drink 🍹\n\n");
    sleep(1);
    reset();
    do
    {
        printf("---> ");
        scanf("%d", &i);
        a = a + eat[i - 1];
    } while (i != 10);
    green();
    printf("\n\t\t------------------------------------------");
    printf("\n\t\t| You have Gained %d calories Today 🧍‍♂️🧍‍♀️ |", a);
    printf("\n\t\t------------------------------------------\n\n");
    reset();
    sleep(1);
    red();
    printf("\t\tWhat Exercise 🦾 Did You Do Today ? \n");
    printf("\tEnter \"9\" To Stop Input Else Keep Entering Values\n\n");
    sleep(1);
    yellow();
    printf("\n\t 1)RUNNING 300m 🏃‍♀️\n\t 2)PUSHUPS 5*3 or 15 min ✊ \n\t 3)SKIPPING 50*2 or 15 🤸‍♂️\n\t 4)SQUATS 5*3 or 10 🙆‍♂️\n\t 5)SITUPS 5*3 or 15 👨‍🦼🧍‍♀️\n\t 6)JUMPING JACKS 3 rounds 30/sec each or 10🤾‍♂️\n\t 7)WIDE ARM PUSHUPS 5*3 or 1 🏋️‍♀️\n\t 8)COBRA STRETCH 3 rounds 20sec/eac 🖐\n\n");
    reset();
    while (1)
    {
        printf("---> ");
        scanf("%d", &p);
        b = b + work[p - 1];
        if (p == 9)
        {
            break;
        }
    };
    sleep(1);
    green();
    printf("\n\t\t-------------------------------");
    printf("\n\t\t| You had Lossed %d calories |\n", b);
    printf("\t\t-------------------------------\n\n\n");
    a > b ? printf("\t\t|| You have %d calories in EXCESS ☠ ||\n\n", a - b) : printf("\t\t|| You have Burnt %d calories in ADVANCE 😊||\n\n", b - a);
    reset();
    system("Pause");
    dashboard();
}

// ==========================================================================================================
// Shreyash Kharde
void dietplanner()
{
    int r = 1;
    while (r == 1)
    {
        int i = 0, age = 0;
        char name[20];
        title();
        sleep(1);
        red();
        printf("\n==========================================");
        printf("\n\n------Welcome to AI Diet Planer------\n\n");
        printf("==========================================\n\n");
        // printf("\nBot==>  Enter your Name\nUser==>  ");
        // scanf("%s", name);
        // printf("\nBot==>  Enter your Age\nUser==>  ");
        // scanf("%d", &age);
        printf("\nBot==>  Enter your Weight in kg\n");
        printf("User==> ");
        scanf("%d", &i);
        user1.weight = i;
        printf("\n**********************");

        printf("\n\nBot==>\tCHOOSE ANY ONE");
        printf("\n \t1. Weight Gain  \t2. Weight Loss ");
        printf("\nUser==> ");
        scanf("%d", &i);
        int j = 0;
        j = i;
        printf("\n**********************");

        if (j == 1)
        {
            printf("\n\nBot==>\tHow much WEIGHT you want to GAIN");
        }
        else if (j == 2)
        {
            printf("\n\nBot==>\tHow much WEIGHT you want to LOOSE");
        }

        printf("\n \t1. 0-2kg  \n\t2. 2-4kg \n \t3. Above 4 kg");
        printf("\nUser==> ");
        scanf("%d", &i);
        int z = 0;
        z = i;
        printf("\n**");

        printf("\n\nBot==>\tCHOOSE ONE PLAN ");
        printf("\n \t1.Normal Plan  \n\t2.Advance Plan");
        printf("\nUser==> ");
        scanf("%d", &i);
        printf("\n**********************");
        yellow();
        sleep();
        char buffer[32];
        struct tm *ts;
        size_t last;
        time_t timestamp = time(NULL);

        ts = localtime(&timestamp);
        last = strftime(buffer, 32, "%A", ts);
        buffer[last] = '\0';

        if (j == 1)
        {
            if (i == 1)
            {

                if (z == 1)
                {
                    printf("\n\nBreakfast:- Peanut Butter on Wholegrain Toast: Toasted wholegrain ");
                    printf("\n\t    bread+ 2 tbsp peanut butter. Drizzle with honey to taste. Serve with");
                    printf("\n\t    1 hot chocolate, made with milk + 1 serve of fruit (eg. 1 medium pear or orange).");
                    printf("\n\nLunch    :- Chicken and Pasta Salad: Cooked chicken + pasta + 1 cup leafy green ");
                    printf("\n\t    vegetables (eg. spinach, rocket) + tomato + avocado + crumbled feta cheese + olive oil/vinegar dressing.");
                    printf("\n\nDinner   :- Lamb Chops and Vegetables: Lamb chop, trimmed & shallow fried in olive oil. Serve with ");
                    printf("\n\t    sweet potato mash made with milk and olive oil + 2 cups cooked vegetables");
                }
                if (z == 2)
                {
                    printf("\n\nBreakfast:- Chia Porridge with Fruit: 2 tbsp chia seeds + rolled oats +");
                    printf("\n\t    1.5 cup full cream milk + 1 serve of fruit (eg. 1 medium banana or 6 dried prunes).");
                    printf("\n\nLunch    :- Egg, Cheese and Salad Wrap: 2 boiled & mashed eggs + 2 cheese slices +");
                    printf("\n\t    avocado + 1 cup salad vegetables (eg. lettuce, cucumber, carrot, capsicum) rolled ");
                    printf("\n\t    up in tortilla bread (make 2 wraps) + 1 cup fruit juice.");
                    printf("\n\nDinner   :- Baked Salmon, Cous Cous and Vegetables: Oven baked salmon fillet,");
                    printf("\n\t    sprinkled with sesame oil and sesame seeds + wholemeal cous cous + 2 cups cooked ");
                    printf("\n\t    vegetables. Serve with hommus.");
                }
                else if (z == 3)
                {
                    printf("\n\nBreakfast:- Sweet Potato Spanish Omelette (1 serve): Serve with 1 cafe ");
                    printf("\n\t    latte or hot chocolate made with full cream milk.");
                    printf("\n\nLunch    :- Lentil, Vegetables and Barley Soup: Lentils with 1 cup chopped");
                    printf("\n\t    vegetables (eg. carrot, pumpkin, celery, onion), vegetable stock and barley.");
                    printf("\n\t    Serve with dollop of natural yoghurt. + 1 serve of fruit.");
                    printf("\n\nDinner   :- Spaghetti Bolognese: Lean mince with tomato, tomato puree, herbs ");
                    printf("\n\t    & garlic served on spaghetti and sprinkled with cheese + 1 cup salad (eg. baby");
                    printf("\n\t    spinach, carrots, cucumber) with olive oil based dressing.");
                }
            }
            else if (i == 2)
            {
                if (z == 1)
                {
                    printf("\t\t** Weight Gain Diet Plan **\n\t\t\t(0 To 2 Kg)\n");
                    printf("\n\n1. Sunday :-\n\n\t-Breakfast (8:00-8:30AM) ");
                    printf("\n\t\t2 egg brown bread sandwich + green chutney \n\t\t+ 1 cup milk + 3 cashews + 4 almonds + 2 walnuts\n\t\t722 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM) ");
                    printf("\n\t\t1 cup arhar dal + 1 cup potato curry + 3 chapatti \n\t\t+ 1/2 cup rice + 1/2 cup low fat curd + salad\n\t\t844 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM)");
                    printf("\n\t\t1.5 cup chicken curry + 3 chapatti + salad\n\t\t929 Calories");

                    printf("\n\n\n2. Monday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\t3 paneer stuffed besan cheela + green chutney \n\t\t+ 1 cup curd + 3 cashews + 4 almonds + 2 walnuts \n\t\t671 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)  ");
                    printf("\n\t\t1 cup masoor dal + 1 cup calocasia + 3 chapatti \n\t\t+ 1/2 cup rice + 1 cup low curd + salad\n\t\t889 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\t1 cup carrot peas vegetable +3 chapatti + salad\n\t\t956 Calories");

                    printf("\n\n\n3. Tuesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\t3 onion stuffed parantha + 1 cup curd + 3 cashews + 4 almonds + 2 walnuts\n\t\t821 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\t1 cup moong dal/ chicken curry + 1 cup potato \n\t\tand caulifllower vegetable + 3 chapatti + 1/2 cup rice + salad\n\t\t888 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\t1 cup beans potato vegetable + 3 chapatti + salad\n\t\t960 Calories");

                    printf("\n\n\n4. Wednesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\t1.5 cup vegetable bread upma + 1 cup milk + 3 cashews + 4 almonds + 2 walnuts\n\t\t828 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\t1 cup rajma curry + 1 cup spinach potato + 3 chapatti + 1/2 cup rice + salad\n\t\t835 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\t1.5 cup parwal vegetable + 3 chapatti + salad\n\t\t957 Calories");

                    printf("\n\n\n5. Thursday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\t2 cucmber potato sandwich + 1 tsp green chutney \n\t\t+ 1 orange juice + 3 cshews + 2 walnuts + 4 almonds\n\t\t789 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\t2 cucmber potato sandwich + 1 tsp green chutney + 1 orange juice \n\t\t+ 3 cshews + 2 walnuts + 4 almonds\n\t\t765 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\t1 cup cauliflower potato vegetable + 3 chapatti + salad\n\t\t955 Calories");

                    printf("\n\n\n6. Friday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\t2 cup vegetable poha + 1 cup curd + 3 cashews + 4 almonds + 2 walnuts\n\t\t861 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\t1 cup chana dal + 1 cup bhindi vegetable + 3 chapatti \n\t\t+ 1/2 cup rice + salad\n\t\t973 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\t1 cup peas mushroom vegetable + 3 chapatti + salad\n\t\t930 Calories");

                    printf("\n\n\n7.Saturday :-\n\t\t-Cheat Day !\n\n\n\n\n\n");
                }
                if (z == 2)
                {
                    printf("\t\t** Weight Gain Diet Plan **\n\t\t\t(2 To 4 Kg)\n");
                    printf("\n\n1. Sunday :-\n\n\t-Breakfast (8:00-8:30AM) ");
                    printf("\n\t\tHam & cheese omelet+Fruit Juice ");
                    printf("\n\n\t-Lunch (1:00-1:30PM) ");
                    printf("\n\t\tBarbeque Chicken +Potato salad +Fruits+whole  milk ");
                    printf("\n\n\t-Dinner (7:00-7:30PM)");
                    printf("\n\t\tSpaghetti  with meatballs+Garlic bread+High calories shake+Milk ");

                    printf("\n\n\n2. Monday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tWaffles with butter and syrap+Yogurt+Whole Milk");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tSalad Sandwich+Baby Carrots+Peanut butter");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tRoll with butter+Whole milk+High calorie shake");

                    printf("\n\n\n3. Tuesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tBoiled eggs+Toast with butter & jelly+Fruit Juice ");
                    printf("\n\n\t-Lunch (1:00-1:30PM)  ");
                    printf("\n\t\tCheeseburger with bun+Fries+Choclate Milkshake");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tSalmon with butter+Rice+Broccoli+whole milk");

                    printf("\n\n\n4. Wednesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tOatmeal+Fruit Juice ");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tChicken Curry+Roti+salad+papad+Butter Milk ");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tPaneer Masala+Roto+Rice+salad");

                    printf("\n\n\n5. Thursday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tTea/Coffee+Whole Milk+Fruits+Idle Chutni");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\t2 Chapati +Rice+curd+Soyabeen  Chunks+Butter Milk");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tBrown rice+Garlic bread +Strawberry Shake+Vegetable curry");

                    printf("\n\n\n6. Friday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tIdle Cutney+Oatmeal+Fresh Fruits");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tTomato soup+Grilled cheese sandwich+Veg Pulav");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tGreen beans+Cooked Carrots+Roti+Brown Rice+Milk Shake");

                    printf("\n\n\n7.Saturday :-\n\t\t-Cheat Day !\n\n\n\n\n\n");
                }
                else if (z == 3)
                {
                    printf("\t\t** Weight Gain Diet Plan **\n\t\t\t(Above 4 Kg)\n");
                    printf("\n\n1. Sunday :-\n\n\t-Breakfast (8:00-8:30AM) ");
                    printf("\n\t\tMilk+Eggs+Banana+Poha");
                    printf("\n\n\t-Lunch (1:00-1:30PM) ");
                    printf("\n\t\t2 small bowls of plain rice +2 chapatis+1bowl moung dal+2 bowls vegetable curry");
                    printf("\n\n\t-Dinner (7:00-7:30PM)");
                    printf("\n\t\t3 chapatis+1 bowl  masoor dal+vegetable  curry,1 bowl  curd ");

                    printf("\n\n\n2. Monday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tBread Omlet+Dryfruits");
                    printf("\n\n\t-Lunch (1:00-1:30PM)  ");
                    printf("\n\t\t150 gms of brown rice or whole wheat chapattis\n\t\t+fish + 1 bowl of mixed vegetables+ green chutney+ salad");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tchicken + stir fried veggies with baked potato\n\t\t + 1 cup of brown rice/ whole wheat chapati");

                    printf("\n\n\n3. Tuesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tOatmeal+Milk+Upma");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\t2 chapatis+dal Rice+salad+vegetable curry+Potatos");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tVegetable salad+jowar roti and brinjal chutney");

                    printf("\n\n\n4. Wednesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tCup of Fruits+Moong dal dosa and pudina chutney");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\t2 chapatis+Vegetable Salad +Tuvar dal+sambar  and brown rice ");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tFried Rice+4 eggs+2 Chapati+ Vegetable Salad");

                    printf("\n\n\n5. Thursday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tPaneer Paratha+Mango milkshake+Fruits");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\t2 Chapati +Rice+curd+Vegetable curry");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tBrown rice+2 chapatis+vegetable curry+baked Potatos");

                    printf("\n\n\n6. Friday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tIdle Cutney+Milk+Fresh fruits");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\t2 chapatis+Vegetable salad+Potato Curry+Dal rice+Chutney");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\t2 chapatis+Vegetable curry+Tomato soup\n\t\t+Dal+Brown rice+Sweet dish ");

                    printf("\n\n\n7.Saturday :-\n\t\t-Cheat Day !\n\n\n\n\n\n");
                }
            }
            sleep(1);
            green();
            if (strcmp(buffer, "Sunday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Make realistic weight loss goals \nOnly eat when you are hungry. This could mean 3 meals and 1 snack every day. ");
            }

            if (strcmp(buffer, "Monday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\nEat soluble fiber");
                printf("Drink coffee or tea");
            }

            if (strcmp(buffer, "Tuesday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Understand a healthy goal weight and timeframe \nDon't skip meals");
            }

            if (strcmp(buffer, "Wednesday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Plan out appropriate exercise \n Wait 15 minutes before getting a second helping of food.");
            }

            if (strcmp(buffer, "Thursday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Take your current medications into consideration \n Try to eat a variety of whole foods. ");
            }

            if (strcmp(buffer, "Friday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\nReview your family history \nAvoid processed foods and foods high in fat or sugar.");
            }

            if (strcmp(buffer, "Saturday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Tips for weight gain  \n Add More Calories \n Focus on Proteins \nWorkout Regularly \nDrink Enough Water");
            }
        }
        else if (j == 2)
        {
            if (i == 1)
            {
                if (z == 1)
                {
                    printf("\n\nBreakfast:- Sambar with 2 brown rice idlis/");
                    printf("\n\t    Paneer sandwich with mint chutney");
                    printf("\n\nLunch    :- Whole-grain roti with mixed-vegetable");
                    printf("\n\t    curry with one dal");
                    printf("\n\nDinner   :- Tofu/chicken curry with mixed vegetables");
                    printf("\n\t    and a fresh spinach salad/chicken gravy with 2 multigrain rotis");
                }
                if (z == 2)
                {
                    printf("\n\nBreakfast:- Chana dal pancakes with mixed vegetables");
                    printf("\n\t    and a glass of milk/ bread and egg with fruits");
                    printf("\n\nLunch :- Chickpea curry with brown rice/");
                    printf("\n\t    Brown rice with dal");
                    printf("\n\nDinner:- Khichdi with sprout salad/Veg paratha with raita");
                }
                else if (z == 3)
                {
                    printf("\n\nBreakfast:- Apple cinnamon porridge/");
                    printf("\n\t    Vegetable uttapam with sambhar");
                    printf("\n\nLunch    :- Whole-grain roti with tofu/ ");
                    printf("\n\t    non veg and mixed vegetables");
                    printf("\n\nDinner   :- Palak paneer with brown rice and vegetables/");
                    printf("\n\t    2 Multigrain rotis with chicken and curd");
                }
            }
            if (i == 2)
            {
                if (z == 1)
                {
                    printf("\t\t** Weight Loss Diet Plan **\n\t\t\t(0 To 2 Kg)\n");
                    printf("\n\n1. Sunday :-\n\n\t-Breakfast (8:00-8:30AM) ");
                    printf("\n\t\tEgg White Omelet\n\t\t300 to 350 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM) ");
                    printf("\n\t\t2 Cups Mixed Greens with 1 Cup of Other Veggies,\n\t\t Chopped, Dressed with Aged Balsamic Vinegar\n\t\t500 to 700 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM)");
                    printf("\n\t\tSalad Baked Potato with 2 Tablespoons Fat-Free \n\t\tSour Cream and a Sprinkling of Chives or Scallions\n\t\t500 to 700 Calories");

                    printf("\n\n\n2. Monday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tOatmeal with Fresh or Frozen (No Sugar Added)\n\t\t Fruit, Tea or Coffee\n\t\t300 to 350 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)  ");
                    printf("\n\t\tSalad, Turkey Sandwich\n\t\t500 to 700 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tVegetables Veggie Burger on a Whole-Wheat Bun \n\t\twith Roasted Red Bell Peppers, Steamed Fresh \n\t\t500 to 700 Calories");

                    printf("\n\n\n3. Tuesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tHot Whole-Grain Cereal with Blueberries Tea or Coffee\n\t\t300 to 350 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tVegetarian Chili 1 Ear of Corn\n\t\t500 to 700 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tSpinach Salad, Chicken with Cherry Tomatoes, Brown Rice\n\t\t500 to 700 Calories");

                    printf("\n\n\n4. Wednesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\t1 Cup Fresh Fruit, 1 Cup Nonfat Plain or Nonfat,\n\t\tNo-Sugar-Added Yogurt, Tea or Coffee\n\t\t300 to 350 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tTuna Sandwich, Carrot and Pineapple Salad\n\t\t500 to 700 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tSalad with Honey Mustard Dressing, Honey Mustard Salad Dressing,\n\t\t Curried Quinoa and Tofu\n\t\t500 to 700 Calories");

                    printf("\n\n\n5. Thursday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tOrange-Vanilla Oatmeal, Tea or Coffee, Carrots\n\t\t300 to 350 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tTomato Cream Soup, Butter Beans With Lemon \n\t\tand Scallions, 1 to 2 Cups of Fresh Fruit\n\t\t500 to 700 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tEasy Tangy Salmon, Soba Noodles With Spicy Cucumbers, Fruit Smoothie\n\t\t500 to 700 Calories");

                    printf("\n\n\n6. Friday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tProtein pancakes, Egg muffins\n\t\t300 to 500 Calories");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tGreek grilled chicken and hummus wrap, Quinoa salad\n\t\t500 to 700 Calories");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tHealthful turkey chili, Smoothie \n\t\t500 to 700 calories");

                    printf("\n\n\n7.Saturday :-\n\t\t-Cheat Day ! \n\t\tBut please do not Overeat\n\t\tNot more than 1800 Calories\n\n\n\n\n\n");
                }
                if (z == 2)
                {
                    printf("\t\t** Weight Loss Diet Plan **\n\t\t\t(2 To 4 Kg)\n");
                    printf("\n\n1. Sunday :-\n\n\t-Breakfast (8:00-8:30AM) ");
                    printf("\n\t\tWheatgrass Juice+Veg chapatti +skimmed curd ");
                    printf("\n\n\t-Lunch (1:00-1:30PM) ");
                    printf("\n\t\tCucumber salad+Veg brown rice pulav+Soya bean curry and raita");
                    printf("\n\n\t-Dinner (7:00-7:30PM)");
                    printf("\n\t\tGreen salad+2 Bajra Roti+Brinjal Sabji+Carrot soup");

                    printf("\n\n\n2. Monday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tVegetable Poha +Skimmed milk");
                    printf("\n\n\t-Lunch (1:00-1:30PM)  ");
                    printf("\n\t\tSaute veg+Brown Rice+Lobia curry+Curd");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tCarrot Capsicum salad+2 Phulka+Bottle guard sabji+corn");

                    printf("\n\n\n3. Tuesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tLauki Juice+Brown Rice idle +milk ");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tveg Salad+Vegetable Khichdi+Cabbaje Peas Sabji");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tSalmon with Green salad+2 roti+Beetoot sabji+Vegetable soup");

                    printf("\n\n\n4. Wednesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tRava cheela with vegetables+Milk");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tSaute veg+Brown rice+Lobia Curry+Curd");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tCarrot Capsecum salad+2 Roti+Bottle Guard sabji");

                    printf("\n\n\n5. Thursday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tPeanut Butter+Banana+Brown Bread");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tCucumber  Salad+vegetable brown pulav+Rajma Curry");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tMixed Vegetable Soup+3 Bajra Roti + Beetroot Sabji");

                    printf("\n\n\n6. Friday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tApple+Sugar free Tea+Upma");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tHalf cup sprouts with Lemon+Brown Rice+Curd");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tCapsicum Salad+2 Phulka+Bottle gourd sabje+Corn soup");

                    printf("\n\n\n7.Saturday :-\n\t\t-Cheat Day !\n\n\n\n\n\n");
                }
                else if (z == 3)
                {
                    printf("\t\t** Weight Loss Diet Plan **\n\t\t\t(Above 4 Kg)\n");
                    printf("\n\n1. Sunday :-\n\n\t-Breakfast (8:00-8:30AM) ");
                    printf("\n\t\t-Bottle Guard Juice+Sprouts+Mint  Jerra  Butter ");
                    printf("\n\n\t-Lunch (1:00-1:30PM) ");
                    printf("\n\t\tBrown Rice+Kosumber+Dal +veg curry");
                    printf("\n\n\t-Dinner (7:00-7:30PM)");
                    printf("\n\t\tWhole Wheat Phulka+Veg Curry+Pumpkin Lentil Soup ");

                    printf("\n\n\n2. Monday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tRoasted Makhana+Brown Rice Idle++sambar");
                    printf("\n\n\t-Lunch (1:00-1:30PM)  ");
                    printf("\n\t\tFruit Bowl+ Whole Wheat Phulka +Curry+Mixed Pepper  Corn  Salad");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tPumpkin Dal Soups and Oats+Sauteed coloured pepper");

                    printf("\n\n\n3. Tuesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tGinger and Tulsi Tea+Oats with Milk+Moong Sprouts Raw ");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tStuffled multi grain paratha+Cucumber Raita");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tWhole Wheat Phulka +Capsicum Curry+Dal Garlic Soup");

                    printf("\n\n\n4. Wednesday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tLemon Ginger Tea+Almonds+Cucumber carrot Juice");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tRice+Dal+Tomato Garlic Rasum");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tBoiled Sweet Potatos+Mushroom Soup+Turmeric Milk");

                    printf("\n\n\n5. Thursday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tMixed Nuts+Chole Paratha Chutney+Spinach Cucumber Juice");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tMultigrain Roti+Lauki Dal+Buttermilk");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tBoiled Peanut+Broken wheat Khichadi+Chutni");

                    printf("\n\n\n6. Friday :-\n\n\t-Breakfast (8:00-8:30AM)");
                    printf("\n\t\tBrown Rice Dosa+Sambhar+Ragi Buttermilk+Fruits");
                    printf("\n\n\t-Lunch (1:00-1:30PM)");
                    printf("\n\t\tMillet Roti+Matki amti curry+Tomato pepper rasam");
                    printf("\n\n\t-Dinner (7:00-7:30PM) ");
                    printf("\n\t\tJowar Phulka+Green Peas Curry+Vegetable Salad+Tomato Soup");

                    printf("\n\n\n7.Saturday :-\n\t\t-Cheat Day !\n\n\n\n\n\n");
                }
            }
            if (strcmp(buffer, "Sunday") == 0)
            {
                printf("\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Make realistic weight loss goals \nOnly eat when you are hungry. This could mean 3 meals and 1 snack every day. ");
            }

            if (strcmp(buffer, "Monday") == 0)
            {

                printf("\n\nToday is %s", buffer);
                printf("\nEat soluble fiber");
                printf("Drink coffee or tea");
            }

            if (strcmp(buffer, "Tuesday") == 0)
            {

                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Understand a healthy goal weight and timeframe \nDon't skip meals");
            }

            if (strcmp(buffer, "Wednesday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Plan out appropriate exercise \n Wait 15 minutes before getting a second helping of food.");
            }

            if (strcmp(buffer, "Thursday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Take your current medications into consideration \n Try to eat a variety of whole foods. ");
            }

            if (strcmp(buffer, "Friday") == 0)
            {

                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\nReview your family history \nAvoid processed foods and foods high in fat or sugar.");
            }

            if (strcmp(buffer, "Saturday") == 0)
            {
                printf("\n\nToday is %s", buffer);
                printf("\nGeneral Points");
                printf("\n Tips for weight gain  \n Add More Calories \n Focus on Proteins \nWorkout Regularly \nDrink Enough Water");
            }
        }

        if (j == 1)
        {
            printf("\nWEIGHT GAIN \nWeight Category:-");
            if (z == 1)
            {
                printf("  0 to 2 Kg ");
            }
            if (z == 2)
            {
                printf("  2 to 4 Kg");
            }
            else if (z == 3)
            {
                printf("  Above 4 Kg");
            }
        }
        else if (j == 2)
        {
            printf("\nWEIGHT LOOSE \nWeight Category:-");
            if (z == 1)
            {
                printf("  0 to 2 Kg ");
            }
            if (z == 2)
            {
                printf("  2 to 4 Kg");
            }
            else if (z == 3)
            {
                printf("  Above 4 Kg");
            }
        }

        if (i == 1)
        {
            printf("\nDiet Plan:- Normal Diet Plan\n\n");
        }
        else if (i == 2)
        {
            printf("\nDiet Plan:- Advance Diet Plan \n\n");
        }
        printf("\nTry For Another Person:- \n\n1.Yes\n2.No\n==>");
        scanf("%d", &r);
    }
    reset();
    system("Pause"); 
    dashboard();
}

// ==========================================================================================================
// Atharva Khupse
void exerciseplanner()
{   
    system("cls");
    cyan();
    int choice;
  puts(" **PLANS:**");
  puts("1 - NORMAL PLAN");
  puts("2 - ADVANCED PLAN");
  printf("YOUR CHOICE: ");
  scanf("%d",&choice);
  getchar();
  reset();
  green();
  switch(choice)
  {
   case 1:
   {
     int choice_;
     puts("\t\t\n **YOUR PLAN:**");
     puts("1 - WEIGHT LOSS EXERCISES");
     puts("2 - FITNESS AND MAINTENANCE EXERCISES");
     puts("3 - WEIGHT GAIN EXERCISES");
     printf("YOUR CHOICE:");
     scanf("%d",&choice_);
     int choices;
    char buffer[32];
    printf("Enter (1/0) if you want to veiw live assigned exercises : ");
    scanf("%d",&choices);
    
    if (choices)
   {
  
    struct tm *ts;
    size_t last;
    time_t timestamp = time(NULL);

    ts   = localtime(&timestamp);
    last = strftime(buffer, 32, "%A", ts);
    buffer[last] = '\0';
   }
      else 
  {
        printf("\n Enter the day to see its exercises \n");
     scanf("%s",buffer); 
   }
     printf("\t**💪 YOUR EXERCISES ARE💪 :** \n");
     switch(choice_)
     {

     case 1:
      
        if(strcmp(buffer,"Sunday") == 0)
        {
            printf("Today is %s,today is Rest day.",buffer);
            printf("\nEnjoy your day and give your body some rest.");
        }
    
        if(strcmp(buffer,"Monday") == 0)
        {
            printf("Today is %s,today is Chest day",buffer);
            printf("\n These are your exercises \n Resistancr band flyes 5 sets\n Dumbell chest press 5 sets \n Incline pushups sets of 5 \n Alternating plank row 3 sets\n ");
        }
    
        if(strcmp(buffer,"Tuesday") == 0)
        {
            printf("Today is %s,today is Legs day",buffer);
            printf("\n These are your exercises \n Squat jumps 10 sets\n Single leg hip thrust 10 sets \n Clamshells 5 sets \n Romanian dead lift 3 sets\n ");
        }
    
        if(strcmp(buffer,"Wednesday") == 0)
        {
            printf("Today is %s,today is Cardio day",buffer);
            printf("\n These are your exercises \n Box Jumps 5 sets \n Pulsing Squats 5 sets \n Ski Jumps 10 sets\n Toe taps 10 sets\n ");
        }
    
        if(strcmp(buffer,"Thursday") == 0)
        {
            printf("Today is %s,today is Back day",buffer);
            printf("\n These are your exercises \n Deadlift 5 sets \n Dumbell Shrugs 7 sets\n Opposit Arm and Leg Raises 5 sets\n Resistance Bands Face Pulls 5 sets \n ");
        }
    
        if(strcmp(buffer,"Friday") == 0)
        {
            printf("Today is %s,today is Abs day",buffer);
            printf("\n These are your exercises \n Standing oblique Twists 5 sets \n Suitecase Crunches 5 sets \n Plank 3 set \n Bicycle Crunches 5 sets\n ");
        }
    
        if(strcmp(buffer,"Saturday") == 0)
        {
            printf("Today is %s,today is Arms day",buffer);
            printf("\n These are your exercises \n Triceps Kickbacks 5 sets \n Hammer Curls 5 sets \n Overhead Circles 5 sets\n Lateral Raises 5 sets\n ");
        }
      break;
    
     case 2:
     {
        if(strcmp(buffer,"Sunday") == 0)
        {
            printf("Today is %s,today is Rest day.",buffer);
            printf("\nEnjoy your day and give your body some rest.");
        }
    
       if(strcmp(buffer,"Monday") == 0)
        {
            printf("Today is %s,today is Chest day",buffer);
            printf("\n These are your exercises \n Resistancr band flyes 4 sets\n Dumbell chest press 4 sets \n Incline pushups 5 sets\n Alternating plank row 3 stes \n ");
        }
    
       if(strcmp(buffer,"Tuesday") == 0)
        {
            printf("Today is %s,today is Legs day",buffer);
            printf("\n These are your exercises \n Squat jumps 5 sets \n Single leg hip thrust 5 sets \n Clamshells 5 sets\n Romanian dead lift 4 sets\n ");
        }
    
       if(strcmp(buffer,"Wednesday") == 0)
        {
            printf("Today is %s,today is Cardio day",buffer);
            printf("\n These are your exercises \n Box Jumps 10 sets\n Pulsing Squats 7 sets\n Ski Jumps 7 sets\n Toe taps 5 sets\n ");
        }
    
        if(strcmp(buffer,"Thursday") == 0)
        {
           printf("Today is %s,today is Back day",buffer);
           printf("\n These are your exercises \n Deadlift 3 sets\n Dumbell Shrugs 5 sets\n Opposit Arm and Leg Raises 5 sets\n Resistance Bands Face Pulls 5 sets\n ");
        }
    
        if(strcmp(buffer,"Friday") == 0)
        {
           printf("Today is %s,today is Abs day",buffer);
           printf("\n These are your exercises \n Standing oblique Twists 4 sets\n Suitecase Crunches 5 sets\n Plank 3 sets\n Bicycle Crunches 7 sets\n ");
        }
    
        if(strcmp(buffer,"Saturday") == 0)
        {
           printf("Today is %s,today is Arms day",buffer);
           printf("\n These are your exercises \n Triceps Kickbacks 5 sets \n Hammer Curls 7 sets \n Overhead Circles 7 sets \n Lateral Raises 5 sets \n ");
        }
     }
      break;
    
     case 3:
      if(strcmp(buffer,"Sunday") == 0)
    {
        printf("Today is %s,today is Rest day.",buffer);
        printf("\nEnjoy your day and give your body some rest.");
    }
    
    if(strcmp(buffer,"Monday") == 0)
    {
        printf("Today is %s,today is Chest day",buffer);
        printf("\n These are your exercises \n Resistancr band flyes 7 sets\n Dumbell chest press 7 sets\n Incline pushups 7 sets\n Alternating plank row 5 sets \n ");
    }
    
    if(strcmp(buffer,"Tuesday") == 0)
    {
        printf("Today is %s,today is Legs day",buffer);
        printf("\n These are your exercises \n Squat jumps 7 sets\n Single leg hip thrust 6 sets\n Clamshells 7 sets\n Romanian dead lift 5 sets\n ");
    }
    
    if(strcmp(buffer,"Wednesday") == 0)
    {
        printf("Today is %s,today is Cardio day",buffer);
        printf("\n These are your exercises \n Box Jumps 7 sets\n Pulsing Squats 7 sets\n Ski Jumps 7 sets \n Toe taps 7 sets\n ");
    }
    
    if(strcmp(buffer,"Thursday") == 0)
    {
        printf("Today is %s,today is Back day",buffer);
        printf("\n These are your exercises \n Deadlift 5 sets\n Dumbell Shrugs 7 sets \n Opposit Arm and Leg Raises 7 sets\n Resistance Bands Face Pulls 7 sets\n ");
    }
    
    if(strcmp(buffer,"Friday") == 0)
    {
        printf("Today is %s,today is Abs day",buffer);
        printf("\n These are your exercises \n Standing oblique Twists 7 sets \n Suitecase Crunches 7 sets\n Plank 5 sets\n Bicycle Crunches 7 sets\n ");
    }
    
    if(strcmp(buffer,"Saturday") == 0)
    {
        printf("Today is %s,today is Arms day",buffer);
        printf("\n These are your exercises \n Triceps Kickbacks 7 sets \n Hammer Curls 8 sets\n Overhead Circles 7 sets\n Lateral Raises 7 sets\n ");
    }
      break;
     }
     system("Pause");
     dashboard();
     return;
    } 
    break;
    case 2:
  {
    int choice_;
    puts("\t\t **YOUR PLAN:**");
    puts("1 - WEIGHT LOSS EXERCISES");
    puts("2 - FTNESS AND MAINTAINENECE EXERCISES");
    puts("3 - WEIGHT GAIN EXERCISES");
    printf("YOUR CHOICE:");
    scanf("%d",&choice_);
    int choices;
    char buffer[32];
    printf("Would like to veiw live assigned exercises? (1/0)");
    scanf("%d",&choices);
    
    if (choices)
   {

    struct tm *ts;
    size_t last;
    time_t timestamp = time(NULL);

    ts   = localtime(&timestamp);
    last = strftime(buffer, 32, "%A", ts);
    buffer[last] = '\0';
   }
    else
  {
        printf("\n Enter the day to see its exercises in camel case : \n");
     scanf("%s",buffer); 
   }
    printf("\t**💪 YOUR EXERCISES ARE💪 :** \n");
    switch(choice_)
   {

     case 1:
      if(strcmp(buffer,"Sunday") == 0)
    {
        printf("Today is %s,today is Rest day.",buffer);
        printf("\nEnjoy your day and give your body some rest.");
    }
    
    if(strcmp(buffer,"Monday") == 0)
    {
        printf("Today is %s,today is Chest day",buffer);
        printf("\n These are your exercises \n Resistancr band flyes 8 sets \n Dumbell chest press 8 sets\n Incline pushups 8 sets\n Alternating plank row 7sets\n ");
    }
    
    if(strcmp(buffer,"Tuesday") == 0)
    {
        printf("Today is %s,today is Legs day",buffer);
        printf("\n These are your exercises \n Squat jumps 7 sets\n Single leg hip thrust 8 sets\n Clamshells 10 sets\n Romanian dead lift 7 sets\n ");
    }
    
    if(strcmp(buffer,"Wednesday") == 0)
    {
        printf("Today is %s,today is Cardio day",buffer);
        printf("\n These are your exercises \n Box Jumps 10 sets\n Pulsing Squats 8 sets \n Ski Jumps 8 sets \n Toe taps 8 sets\n ");
    }
    
    if(strcmp(buffer,"Thursday") == 0)
    {
        printf("Today is %s,today is Back day",buffer);
        printf("\n These are your exercises \n Deadlift 7 sets \n Dumbell Shrugs 8 sets\n Opposit Arm and Leg Raises 10 sets \n Resistance Bands Face Pulls 8 sets\n ");
    }
    
    if(strcmp(buffer,"Friday") == 0)
    {
        printf("Today is %s,today is Abs day",buffer);
        printf("\n These are your exercises \n Standing oblique Twists 10 sets \n Suitecase Crunches 8 sets\n Plank 7 sets\n Bicycle Crunches 8 sets\n ");
    }
    
    if(strcmp(buffer,"Saturday") == 0)
    {
        printf("Today is %s,today is Arms day",buffer);
        printf("\n These are your exercises \n Triceps Kickbacks 8 sets \n Hammer Curls 8 sets\n Overhead Circles 10 sets \n Lateral Raises 9 sts\n ");
    }
     break;
    
     case 2:
      if(strcmp(buffer,"Sunday") == 0)
    {
        printf("Today is %s,today is Rest day.",buffer);
        printf("\nEnjoy your day and give your body some rest.");
    }
    
    if(strcmp(buffer,"Monday") == 0)
    {
        printf("Today is %s,today is Chest day",buffer);
        printf("\n These are your exercises \n Resistancr band flyes 7 sets\n Dumbell chest press 8 sets\n Incline pushups 8 sets\n Alternating plank row 7 sets\n ");
    }
    
    if(strcmp(buffer,"Tuesday") == 0)
    {
        printf("Today is %s,today is Legs day",buffer);
        printf("\n These are your exercises \n Squat jumps 9 sets\n Single leg hip thrust 8 sets\n Clamshells 7 sets\n Romanian dead lift 5 sets\n ");
    }
    
    if(strcmp(buffer,"Wednesday") == 0)
    {
        printf("Today is %s,today is Cardio day",buffer);
        printf("\n These are your exercises \n Box Jumps 10 sets\n Pulsing Squats 12 sets\n Ski Jumps 10 sets\n Toe taps 10 sets \n ");
    }
    
    if(strcmp(buffer,"Thursday") == 0)
    {
        printf("Today is %s,today is Back day",buffer);
        printf("\n These are your exercises \n Deadlift 8 sets\n Dumbell Shrugs 8 sets\n Opposit Arm and Leg Raises 8 sets\n Resistance Bands Face Pulls 10 sets\n ");
    }
    
    if(strcmp(buffer,"Friday") == 0)
    {
        printf("Today is %s,today is Abs day",buffer);
        printf("\n These are your exercises \n Standing oblique Twists 9 sets\n Suitecase Crunches 8 sets\n Plank 7 sets\n Bicycle Crunches 8 sets\n ");
    }
    
    if(strcmp(buffer,"Saturday") == 0)
    {
        printf("Today is %s,today is Arms day",buffer);
        printf("\n These are your exercises \n Triceps Kickbacks 8 sets\n Hammer Curls 8 sets\n Overhead Circles 8 sets \n Lateral Raises 8 sets\n ");
    }
      break;
    
     case 3:
      if(strcmp(buffer,"Sunday") == 0)
    {
        printf("Today is %s,today is Rest day.",buffer);
        printf("\nEnjoy your day and give your body some rest.");
    }
    
    if(strcmp(buffer,"Monday") == 0)
    {
        printf("Today is %s,today is Chest day",buffer);
        printf("\n These are your exercises \n Resistancr band flyes 12 sets\n Dumbell chest press 10 sets\n Incline pushups 10 sets\n Alternating plank row 8 sets\n ");
    }
    
    if(strcmp(buffer,"Tuesday") == 0)
    {
        printf("Today is %s,today is Legs day",buffer);
        printf("\n These are your exercises \n Squat jumps 10 sets\n Single leg hip thrust 8 sets \n Clamshells 8 sets \n Romanian dead lift 6 sets\n ");
    }
    
    if(strcmp(buffer,"Wednesday") == 0)
    {
        printf("Today is %s,today is Cardio day",buffer);
        printf("\n These are your exercises \n Box Jumps 12 sets\n Pulsing Squats 10 sets\n Ski Jumps 12 sets \n Toe taps 10 sets\n ");
    }
    
    if(strcmp(buffer,"Thursday") == 0)
    {
        printf("Today is %s,today is Back day",buffer);
        printf("\n These are your exercises \n Deadlift 7 sets\n Dumbell Shrugs 10 sets\n Opposit Arm and Leg Raises 10 sets\n Resistance Bands Face Pulls 10 sets\n ");
    }
    
    if(strcmp(buffer,"Friday") == 0)
    {
        printf("Today is %s,today is Abs day",buffer);
        printf("\n These are your exercises \n Standing oblique Twists 12 sets\n Suitecase Crunches 10 sets\n Plank 8 sets\n Bicycle Crunches 10 sets\n ");
    }
    
    if(strcmp(buffer,"Saturday") == 0)
    {
        printf("Today is %s,today is Arms",buffer);
        printf("\n These are your exercises \n Triceps Kickbacks 12 sets\n Hammer Curls 10 sets\n Overhead Circles 12 sets\n Lateral Raises 10 sets\n ");
    }
      break;
    }
    
    break;
   }
     break;
  }
  system("Pause");
  dashboard();
  return;
}

// ==========================================================================================================
// Shubham Kumare
void healthfacts()
{
    int x;
    printf("\nWhat are you looking for...\n1 - Gain or 2 - loose : ");
    scanf("%d", &x);
    green();
    if (x == 1)
    {
        printf("\n\n1.Exercise turns fat into muscle.\n2.Breakfast must be eaten to start caloric consumption\n3.No pain, no gain\n4.You’re never too old for exercise so work Hard");
    }
    else
    {
        printf("\n\n1.Running burns more than cycling\n2.Only 10%% of people are successful at losing\n3.weight through diet alone.\n4.Swimming is a great form of exercise because it incorporates both cardio and strength training.\n5.Fitness is losing weight\nThe more you sweat, the more fat you will burn");
    }
    printf("\n");
    reset();
    sleep(1);
    system("Pause");
    dashboard();
}

// Shubham Kumare
void bmi(){
    printf("\nEnter your weight in KiloGram (KG) : ");
    float weight, height;
    scanf("%f", &weight);
    printf("Enter your Height in metres (m) :");
    scanf("%f", &height);
    printf("----------------------------\n");
    printf("Your BMI Is |  %.2f KG/M^2 |", weight / (height * height));
    printf("\n----------------------------\n");
    system("Pause");
    dashboard();
}

// ==========================================================================================================
// Pranav Lad
void end_message(){
    title();
    green_black();
    system("cls");
    printf("\n\n\n\n\n\t\tThankyou For Using Healthifier");
    printf("\n\t\tSee You Next Time");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    system("cls");
    system("COLOR 00");
}
