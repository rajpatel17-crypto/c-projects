#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a;
    char userid[20], pass[10], USERID[20], PASS[10];
    char name[20], sub, mob[10];

    FILE *fp;
    fp = fopen("Login", "a+");  // a+ = data read + write + append + old data not erase

    start:
    system("cls");
    printf("****** WELCOME TO MY PROGRAM ******\n");
    printf("Press '1' for New User Registration\n"
           "Press '2' for User Login\n");
    scanf("%d", &a);
    printf("------------------------------------------------\n");

    switch (a)
    {
        case 1:
            printf("~ ~ ~ ~ WELCOME TO NEW USER REGISTRATION ~ ~ ~ ~\n\n");
            printf(" Enter your full name : ");
            fflush(stdin);
            scanf("%s", &name);
            fputs(name, fp);
         
            printf(" Enter your mobile    : ");
            fflush(stdin);
            scanf("%d", &mob);
            fputs(mob, fp);
       
            printf(" Enter your UserID    : ");
            fflush(stdin);
            scanf("%s", &userid);
            fputs(userid, fp);
            
            printf(" Enter your password  : ");
            fflush(stdin);
            scanf("%s", &pass);
            fputs(pass, fp);
            fwrite(&userid,sizeof(userid),1,fp);
            
    printf("------------------------------------------------\n"); 
	        
            printf("Do you want to submit your data : \n");
            fflush(stdin);
            scanf("%c", &sub);
                if(sub=='y')
                {
                	printf("------------------------------------------------\n"); 
                	printf("Data is submitted\n");
			    }
		        else if(sub=='n')
			    {
			    	printf("------------------------------------------------\n"); 
			    	printf("Your previous data is deleted\n\n");
			    	goto start;
			    	sleep(10);
			    }
			
            printf("------------------------------------------------\n"); 
            printf(" Your details are :\n  %s\n  %d\n  %s\n  %s\n", name,mob,userid,pass);  
            goto start2;
            break;
        
		case 2:
        	start2:
        //	system("cls");
        	printf("~ ~ ~ ~ WELCOME TO USER LOGIN ~ ~ ~ ~\n\n");
        	printf("Enter UserID   : ");
        	fflush(stdin);
        	scanf("%s", &USERID);
        	printf("Enter Password : ");
        	fflush(stdin);
        	scanf("%s", &PASS);
        	
        //	start2:
        while(fread(&userid,sizeof(userid),1,fp)==1)
        {
        	if(strcmp(userid, USERID)==0 && strcmp(pass, PASS)==0 )
        	{
        		printf("You have successfully login & your details are : \n\n");
        		printf(" Your details are :\n  %s\n  %d\n  %s\n  %s\n", name,mob,userid,pass);
			}
        	else
        	{
        		printf("Your UserID or Password are incorrect. Try Again! \n");
        		break;
        	//	goto start2;
			}
        }
    } 
    fclose(fp);
    getch();
    return 0;
}


