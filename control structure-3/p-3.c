#include<stdio.h>
main(){
    int a,b;
    printf("Press 1 for English \n");
    printf("Press 2 for Hindi \n");
    printf("Press 3 for Gujarati \n");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("English\n");
                 printf("Press 1 for Internet Recharge \n");
printf("Press 2 for Top-up Recharge \n");
printf("Press 3 for Special Recharge \n");
    scanf("%d",&b);
     switch (b)
        {
            case 1 :
            printf("You have succefully done Internet Recharge");
            break;
            case 2 :
            printf("You have succefully done Top-up Recharge");
            break;
            case 3 :
            printf("You have succefully done Special Recharge");
            break;
            default:
            printf("Dekh ke likho....!");
         break;   
        }
        break;
  
      
    case 2:
        printf("Hindi \n");
         printf("Internet Recharge ke liye 1 dabaiye \n");
printf("Top-up Recharge ke liye 2 dabaiye \n");
printf("Special Recharge ke liye 3 dabaiye \n");
    scanf("%d",&b);
     switch (b)
        {
            case 1 :
            printf("Aapne safaltapurvak Internet Recharge kar liya he.");
            break;
            case 2 :
            printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
            break;
            case 3 :
            printf("Aapne safaltapurvak special Recharge kar liya he.");
            break;
            default:
            printf("Dekh ke likho....!");
         break;   
        }
        break;
    case 3:
        printf("Gujarati \n");
         printf("Internet Recharge mate 1 dabavo \n");
printf("Top-up Recharge mate 2 dabavo \n");
printf("Special Recharge mate 3 dabavo \n");
    scanf("%d",&b);
     switch (b)
        {
            case 1 :
            printf("Tame safaltapurvak Internet Recharge karyu chhe.");
            break;
            case 2 :
            printf("Tame safaltapurvak Top-up Recharge karyu chhe..");
            break;
            case 3 :
            printf("Tame safaltapurvak Special Recharge karyu chhe..");
            break;
            default:
            printf("Dekh ke likho....!");
         break;   
        }
        break;
    
    default:
    printf("Dekh ke likho....!");
        break;
    }
  
        
        
}