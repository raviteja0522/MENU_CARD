/*
    NAME: M VENKAT RAVI TEJA
    DATE: 28_OCTOBER_2026
    DESCRIPTION: MENU CARD
*/
//              Mini Project Example            //

#include <stdio.h>
int main()
{
    int option, choice;
    int total = 0;

    //starters//
    int ChickenFry = 0, ChilliChicken = 0, ChickenLollipop = 0, DragonChicken = 0;

    //Biryani//
    int ChickenBiryani = 0, ChickenBiryaniB_L = 0, MuttonBiryani = 0, PrawnsBiryani = 0;

    //FamilyPack Biryani//
    int FChickenBiryani = 0, FChickenBiryaniB_L = 0, FMuttonBiryani = 0, FPrawnsBiryani = 0;

    while(1)
    {
        printf("<--------- WELCOME TO PARADISE BIRYANI --------->\n\n");
        printf("ITEMS\n");
        printf("1) Non-Veg Starters\n");
        printf("2) Biryani\n");
        printf("3) Family Pack Biryani\n");
        printf("4) Finish Your Order\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        if(option == 4)
        {
            break;
        }
        
        switch(option)
        {
            case 1:
                printf("\n Non-Veg Starters\n");
                printf("1. Chicken Fry - Rs. 180\n");
                printf("2. Chilli Chicken - Rs. 180\n");
                printf("3. Chicken Lollipop - Rs. 200\n");
                printf("4. Dragon Chicken - Rs. 220\n");
                printf("Choose Non-Veg Starters: ");
                scanf("%d", &choice);
                
                switch(choice)
                {
                    case 1: printf("\nChicken Fry added\n\n");
                            ChickenFry++;
                            break;
                    case 2: printf("\nChilli Chicken added\n\n");
                            ChilliChicken++;
                            break;
                    case 3: printf("\nChicken Lollipop added\n\n");
                            ChickenLollipop++;
                            break;
                    case 4: printf("\nDragon Chicken added\n\n");
                            DragonChicken++;
                            break;
                    default:
                            printf("\nInvalid Starter Choice\n");
                }
                break;

            case 2:
                printf("\n Biryani\n");
                printf("1. Hyd. Chicken Biryani - Rs. 180\n");
                printf("2. Hyd. Chicken Biryani B/L - Rs. 220\n");
                printf("3. Hyd. Mutton Biryani - Rs. 220\n");
                printf("4. Prawns Biryani - Rs. 220\n");
                printf("Choose Biryani: ");
                scanf("%d", &choice);

                switch(choice)
                {
                    case 1: printf("Hyd. Chicken Biryani added\n");
                            ChickenBiryani++;
                            break;
                    case 2: printf("Hyd. Chicken Biryani B/L added\n");
                            ChickenBiryaniB_L++;
                            break;
                    case 3: printf("Hyd. Mutton Biryani added\n");
                            MuttonBiryani++;
                            break;
                    case 4: printf("Prawns Biryani added\n");
                            PrawnsBiryani++;
                            break;
                    default:
                            printf("Invalid Biryani Choice\n");
                }
                break;

            case 3:
                printf("\n Family Pack Biryani\n");
                printf("1. Hyd. Chicken Biryani - Rs. 460\n");
                printf("2. Hyd. Chicken Biryani B/L - Rs. 500\n");
                printf("3. Hyd. Mutton Biryani - Rs. 550\n");
                printf("4. Prawns Biryani - Rs. 550\n");
                printf("Choose Biryani: ");
                scanf("%d", &choice);

                switch(choice)
                {
                    case 1: printf("Hyd. Chicken Biryani added\n");
                            FChickenBiryani++;
                            break;
                    case 2: printf("Hyd. Chicken Biryani B/L added\n");
                            FChickenBiryaniB_L++;
                            break;
                    case 3: printf("Hyd. Mutton Biryani added\n");
                            FMuttonBiryani++;
                            break;
                    case 4: printf("Prawns Biryani added\n");
                            FPrawnsBiryani++;
                            break;
                    default:
                            printf("Invalid Family Pack Biryani Choice\n");
                }
                break;

            default :
            printf("Invalid option!\nChoose option from 1 to 4\n\n");
        }
    }
    printf("\n\nYOUR ORDER: \n");
    if(ChickenFry > 0)
    {
        printf("Chicken Fry x %d = Rs. %d\n", ChickenFry, ChickenFry * 180);
        total = total + ChickenFry * 180;
    }
    if(ChilliChicken > 0)
    {
        printf("Chilli Chicken x %d = Rs. %d\n", ChilliChicken, ChilliChicken * 180);
        total = total + ChilliChicken * 180;
    }
    if(ChickenLollipop > 0)
    {
        printf("Chicken Lollipop x %d = Rs. %d\n", ChickenLollipop, ChickenLollipop * 220);
        total = total + ChickenLollipop * 220;
    }
    if(DragonChicken > 0)
    {
        printf("Dragon Chicken x %d = Rs. %d\n", DragonChicken, DragonChicken * 220);
        total = total + DragonChicken * 220;
    }
    if(ChickenBiryani > 0)
    {
        printf("ChickenBiryani x %d = Rs. %d\n", ChickenBiryani, ChickenBiryani * 180);
        total = total + ChickenBiryani * 180;
    }
    if(ChickenBiryaniB_L > 0)
    {
        printf("ChickenBiryaniB/L x %d = Rs. %d\n", ChickenBiryaniB_L, ChickenBiryaniB_L * 220);
        total = total + ChickenBiryaniB_L * 220;
    }
    if(MuttonBiryani > 0)
    {
        printf("MuttonBiryani x %d = Rs. %d\n", MuttonBiryani, MuttonBiryani * 220);
        total = total + MuttonBiryani * 220;
    }
    if(PrawnsBiryani > 0)
    {
        printf("PrawnsBiryani x %d = Rs. %d\n", PrawnsBiryani, PrawnsBiryani * 220);
        total = total + PrawnsBiryani * 220;
    }
    if(FChickenBiryani > 0)
    {
        printf("FChickenBiryani x %d = Rs. %d\n", FChickenBiryani, FChickenBiryani * 460);
        total = total + FChickenBiryani * 460;
    }
    if(FChickenBiryaniB_L > 0)
    {
        printf("FChickenBiryaniB/L x %d = Rs. %d\n", FChickenBiryaniB_L, FChickenBiryaniB_L * 500);
        total = total + FChickenBiryaniB_L * 500;
    }
    if(FMuttonBiryani > 0)
    {
        printf("FMuttonBiryani x %d = Rs. %d\n", FMuttonBiryani, FMuttonBiryani * 550);
        total = total + FMuttonBiryani * 550;
    }
    if(FPrawnsBiryani > 0)
    {
        printf("FPrawnsBiryani x %d = Rs. %d\n", FPrawnsBiryani, FPrawnsBiryani * 550);
        total = total + FPrawnsBiryani * 550;
    }

    printf("\n BILL\n");
    printf("Bill amount : Rs. %d\n", total);
    printf("Thankyou for your Order!\n");
    
    return 0;
}