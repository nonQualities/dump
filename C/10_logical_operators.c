#include<stdio.h>
#include<stdbool.h>

int main(){

    float temp;
    bool weather;
    float humidity;
    
    printf("Is it sunny today?");
    scanf("%d", &weather);

    printf("What is the temperature today?");
    scanf("%f", &temp);

    printf("What is the humidity today?");
    scanf("%f", &humidity);
    

    if (temp>=10 && temp<=40 && humidity<=70 && weather == 0)
    {
        char mood;
        printf("Are you happy? (y/n): ");
        scanf(" %c", &mood);

            if (mood == 'y'){
                printf("\nToday is a good day");
            }
            else{
                printf("\nAtleast the weather seems fine!");
            }
    
    }

    else if (temp>0 && temp<40 && humidity >= 71 || !weather)
    {
        char mood;
        printf("\nAre you happy? (y/n): ");
        scanf(" %c", &mood);
            
            if (mood == 'y'){
                printf("\nIf you are happy, the weather doesn't matter");
            }
            else{
                printf("atleast, the weather is bearable\n");
            }
    }

    else if (temp>0 || temp<50 || humidity < 100){
    
        printf("How are alive");
    }
    
    else{
        printf("It will be fine tomorrow");
    }
    
    return 0;
}