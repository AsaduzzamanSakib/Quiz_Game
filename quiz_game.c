#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct player_info
{
    char name[20];
    int score;
    int rat;
} p;

void score();
void start();
void help();

void main()
{
    char ch;

    printf("\n\t\t WELCOME TO General Knowledge Quiz Game\n\n") ;
    printf("\n\t\t-------------------------------");
    printf("\n\t\t Enter 's' to start game       ");
    printf("\n\t\t Enter 'v' to view scores  ");
    printf("\n\t\t Enter 'h' for help            ");
    printf("\n\t\t Enter 'q' to quit             ");
    printf("\n\t\t-------------------------------\n\n\t\t  ");
    printf("Your Input Is: ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'S':
    case 's':
        start();
        break;

    case 'V':
    case 'v':
        score();
        break;

    case 'H':
    case 'h':
        help();
        break;

    default:
        exit(1);
    }


}
void score()
{

    FILE *fp;
    if((fp=fopen("score.txt", "r"))==NULL)
    {

        printf("\nNo games played yet!\n");
    }
    else
    {

        printf("\n\n\n               SCORES OF PLAYERS  \n");
        printf("______________________________________________________\n");

        while(fscanf(fp,"%s %d %d",p.name,&p.score,&p.rat)!=-1)
        {
            printf(" Name: %s ",p.name);
            printf("---> Score: %d ",p.score);
            printf("---> Rating: %d\n",p.rat);
            printf("_______________________________________________________\n\n");
        }

        fclose(fp);

    }

    printf("\n\t\t------------------------------");
    printf("\n\t\t Enter  1 to start game       ");
    printf("\n\t\t Enter  2 to view scores      ");
    printf("\n\t\t Enter  3 for help            ");
    printf("\n\t\t Enter  0 to quit       ");
    printf("\n\t\t------------------------------\n\n\t\t");
    printf("Your Input Is: ");
    int ch;
    scanf("%d",&ch);

    if(ch == 1)
    {
        start();


    }
    else if(ch== 2)
    {
        score();


    }
    else if(ch== 3)
    {
        help();


    }
    else
    {
        exit(1);

    }
}

void start()
{
    int i,r1;
    int count=0,countr=0;
    char rating[20];

    FILE *fp;

    if((fp=fopen("score.txt","a"))==NULL)
    {
        printf("error opening file\n");
    }


    printf("\nPlease enter your name: ");
    scanf("%s",p.name);

    printf("    \n\nWelcome \" %s \"  to C Quiz Game\n\n", p.name);


    printf("\n\n\t__________________________________________________\n");
    printf("\t__________________FIRST ROUND_______________________\n");
    printf("\t____________________________________________________\n");

    // First round of the game
    for(i=1; i<=6; i++)
    {

        r1=i;

        switch(r1)
        {
        case 1:
            printf("\n\nWhere the Winter Olympic Games 2022 will be organized?");
            printf("\n\nA.Pyeong Chang, South Korea\t\tB.Vancouver, Canada\n\nC.Beijing, China\t\t\tD.Sochi, Russia");
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                count++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Beijing, China");
                break;
            }

        case 2:
            printf("\n\n\nIn computers, chip is made up of - ");
            printf("\n\nA.A thin layer of copper\t\tB.A thin layer of silver\n\nC.A thin layer silicon\t\t\tD.A thin layer of cobalt");
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!");
                count++;

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.A thin layer silicon");

                break;
            }

        case 3:
            printf("\n\n\nBing is a web search engine owned and operated by -");
            printf("\n\nA.Amazon\t\tB.Microsoft\n\nC.Yahoo\t\t\tD.Alphabet Inc.");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                count++;

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Microsoft");

                break;
            }

        case 4:
            printf("\n\n\nRed Data Book contains data of - ");
            printf("\n\nA.Exotic species\t\t\tB.Endangered species\n\nC.Economically important species\tD.All plant and animal species");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                count++;

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Endangered species");

                break;
            }

        case 5:
            printf("\n\n\nWhich is the third highest mountain in the world?");
            printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");
                count++;

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Mt. Kanchenjunga");

                break;
            }

        case 6:
            printf("\n\n\nThe environment modified by human activities is called -");
            printf("\n\nA.Modem environment\t\tB.Urban environment\n\nC.Natural environment\t\tD.Anthropogenic environment");
            if (toupper(getch())=='D' )
            {
                printf("\n\nCorrect!!!");
                count++;

                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Anthropogenic environment");

                break;
            }
        }
    }


    // second round of the game
    if(count>=4)
    {
        printf("\n\n\t____________________________________________________");
        printf("\n\n\tCONGRATULATION YOU ARE ELIGIBLE TO PLAY SECOND ROUND");
        printf("\n\n\t__________________________________________________\n");
        printf("\t__________________SECOND ROUND________________________\n");
        printf("\t______________________________________________________\n");

        for(i=1; i<=10; i++)
        {

            int r2=i;

            switch(r2)
            {
            case 1:
                printf("\n\nWhat year did the Titanic sink in the Atlantic Ocean on 15 April, on its maiden voyage from Southampton?");
                printf("\n\nA.1913\t\tB.1918\n\nC.1912\t\tD.1916");
                if (toupper(getch())=='C')
                {

                    printf("\n\nCorrect!!!");
                    countr++;

                    break;

                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.1912");

                    break;
                }

            case 2:
                printf("\n\n\nIf a computer has more than one processor then it is known as ?");
                printf("\n\nA.Multiprocessor\t\tB.Uniprocessor\n\nC.Multi-threaded\t\tD.Multiprogramming");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    countr++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Multiprocessor");

                    break;
                }
            case 3:
                printf("\n\n\nWhat is the world's smallest bird?");
                printf("\n\nA.Plover\t\tB.Wrens\n\nC.Hummingbirds\t\tD.Finches");
                if (toupper(getch())=='C')
                {
                    printf("\n\nCorrect!!!");
                    countr++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.Hummingbirds");


                    break;
                }

            case 4:
                printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
                printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    countr++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Faraday");


                    break;
                }

            case 5:
                printf("\n\n\nIn what unit is electric power measured?");
                printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\t\tD.Units");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");
                    countr++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Watt");


                    break;
                }

            case 6:
                printf("\n\n\nFull form of URL is ?");
                printf("\n\nA.Uniform Resource Link\t\tB.Uniform Resource Locator\n\nC.Uniform Registered Link\tD.Unified Resource Link");
                if (toupper(getch())=='B' )
                {
                    printf("\n\nCorrect!!!");
                    countr++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Uniform Resource Locator");

                    break;
                }

            case 7:
                printf("\n\n\nWhat is the National Name of Japan?");
                printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
                if (toupper(getch())=='D')
                {
                    printf("\n\nCorrect!!!");
                    countr++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is D.Nippon");


                    break;
                }

            case 8:
                printf("\n\n\nWhat is the lifespan of a dragonfly?");
                printf("\n\nA.23 hours\t\tB.24 hours\n\nC.25 hours\t\tD.26 hours");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");
                    countr++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.24 hours");


                    break;
                }

            case 9:
                printf("\n\n\nWhat is the capital of Portugal?");
                printf("\n\nA.Lisbon\t\tB.Helsinki\n\nC.Ajax\t\t\tD.Galatasaray");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    countr++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Lisbon");


                    break;
                }

            case 10:
                printf("\n\n\nWhich is the longest River in the world?");
                printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    countr++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Nile");

                    break;
                }

            }
        }
    }

    // Third round of the game
    int counts=0;

    if(countr>=6)
    {
        printf("\n\n\t____________________________________________________");
        printf("\n\n\tCONGRATULATION YOU ARE ELIGIBLE TO PLAY FINAL ROUND");
        printf("\n\n\t____________________________________________________");
        printf("\n\n\t__________________________________________________\n");
        printf("\t__________________THIRD ROUND_______________________\n");
        printf("\t____________________________________________________\n");
        for(i=1; i<=10; i++)
        {

            int r3=i;

            switch(r3)
            {
            case 1:
                printf("\n\n\nWhich of the following place is the headquarters of IMF (International Monetary Fund)?");
                printf("\n\nA.Geneva\t\tB.Paris\n\nC.Washington\t\tD.Hague");
                if (toupper(getch())=='C')
                {
                    printf("\n\nCorrect!!!");
                    counts++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.Washington");

                    break;
                }

            case 2:
                printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
                printf("\n\nA.Rome\t\tB.Vatican City\n\nC.Madrid\tD.Berlin");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    counts++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Rome");

                    break;
                }

            case 3:
                printf("\n\n\nName the country where there no mosquitoes are found?");
                printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\tD.France");
                if (toupper(getch())=='D')
                {
                    printf("\n\nCorrect!!!");
                    counts++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is D.France");

                    break;
                }

            case 4:
                printf("\n\n\nWhich of the following type of Coal, has maximum carbon content?");
                printf("\n\nA.Anthracite\t\tB.Peat\n\nC.Lignite\t\tD.Bituminous");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    counts++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Anthracite");

                    break;
                }

            case 5:
                printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
                printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");
                    counts++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.AB");


                    break;
                }

            case 6:
                printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
                printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    counts++;

                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Light Year");


                    break;
                }


            case 7:
                printf("\n\n\nThe country famous for Samba Dance is........");
                printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
                if (toupper(getch())=='A')
                {
                    printf("\n\nCorrect!!!");
                    counts++;


                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.Brazil");


                    break;
                }

            case 8:
                printf("\n\n\nWind speed is measure by__________?");
                printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
                if (toupper(getch())=='D')
                {
                    printf("\n\nCorrect!!!");
                    counts++;


                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is D.Anemometer");


                    break;
                }



            case 9:
                printf("\n\n\nWhich hardware was used in the First Generation Computer?");
                printf("\n\nA. Transistor\t\tB. Valves\n\nC. I.C\t\t\tD. S.S.I");
                if (toupper(getch())=='B')
                {
                    printf("\n\nCorrect!!!");
                    counts++;


                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.Valves");


                    break;
                }

            case 10:
                printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
                printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\tD. C.F.C");
                if (toupper(getch())=='D')
                {
                    printf("\n\nCorrect!!!");
                    counts++;


                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is D. C.F.C");


                    break;
                }


            }
        }
    }

    count=count+countr+counts;


    //counting number of correct answers and, ratings
    if(count > 0)
    {
        printf("\n\n\nThanks for playing, Your scored: %d points \t", count*5);

        p.score=count*5;

        if(p.score >= 100)
        {

            printf("\n\nYou did Excellent.\t\tRating: * * * * *");
            p.rat=5;
        }
        else if(p.score >= 70 && p.score < 100)
        {

            printf("\n\nSatisfactory.\t\tRating: * * * *");
            p.rat=4;
        }
        else if(p.score >= 40 && p.score < 70)
        {

            printf("\n\nGood.\t\tRating: * * *");
            p.rat=3;
        }
        else if(p.score >= 10 && p.score < 40)
        {

            printf("\n\nAverage.\t\tRating: * *");
            p.rat=2;
        }
        else if(p.score < 10)
        {

            printf("\n\nYou have to study more.\t\tRating: *");
            p.rat=1;
        }

        //writing to file

        fprintf(fp,"%s %d %d", p.name,p.score,p.rat);
        fclose(fp);

        }

      else
      {
          printf("\nTry again!.");

       }

    printf("\n\t\t------------------------------");
    printf("\n\t\t Enter  1 to start game       ");
    printf("\n\t\t Enter  2 to view scores      ");
    printf("\n\t\t Enter  3 for help            ");
    printf("\n\t\t Enter  0 to quit       ");
    printf("\n\t\t------------------------------\n\n\t\t");

    printf("Your Input Is: ");
    int ch;
    scanf("%d",&ch);

    if(ch == 1)
    {
        start();


    }
    else if(ch== 2)
    {
        score();


    }
    else if(ch== 3)
    {
        help();


    }
    else
    {
        exit(1);

    }
}

void help()
{
    printf("\n\n                              GAME HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n 1. There will be three rounds in the game ");
    printf("and they are First Round, Second Round and Final Round.");
    printf("\n 3. First round contains 6 questions, the player have to ");
    printf("give right answers of 4 questions to go to the Second round.");
    printf("\n 3. Second round contains 10 questions, the player have to ");
    printf("give right answers of 6 questions to go to the Final round.");
    printf("\n 3. Final round will contain 10 questions.");
    printf("\n 4. You will be given 4 options and you have to press a, b, c, d for the right option.");
    printf("\n 5. Each question will carry 5 points");
    printf("\n 6. You will be asked questions continuously.");
    printf("\n 7. There is no negative marking for wrong answer.");
    printf("\n\n                         .....Best Of Luck.....\n\n");

    printf("\n\t\t------------------------------");
    printf("\n\t\t Enter  1 to start game       ");
    printf("\n\t\t Enter  2 to view scores      ");
    printf("\n\t\t Enter  3 for help            ");
    printf("\n\t\t Enter  0 to quit       ");
    printf("\n\t\t------------------------------\n\n\t\t");
    printf("Your Input Is: ");
    int ch;
    scanf("%d",&ch);

    if(ch == 1)
    {
        start();


    }
    else if(ch== 2)
    {
        score();


    }
    else if(ch== 3)
    {
        help();


    }
    else
    {
        exit(1);

    }

}
