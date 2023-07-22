#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int resident(); //to take the input deatails of the details
int dispres(); //to display residents 
int dispguest(); //to display guests
int rent(); //to find the rent
int maintain(); //to find charges of residents
int random(); //to generate a random number between 2 specific numbers
int square(); //to print box around menu
int continuation(); //for asking the decision of user whether to continue to menu or leave the program
int menu(); //for taking all the data into one single input 
int guest(); //for taking the input of guests
int tot=0;

struct residence{
    char name[20];
    char type[20];
    char flat[20];
       struct rent{
       char flattype[20];
       int rentof;
       }r[20];
       struct maintainence{
        int elec;
        int water;
        int pool;
       }m[20];
       struct guest{
        char nameg[20];
        char flatno[20];
        char timeofentry[20];
       }g[20];

}s[]={};


int menu(){
int task,x;
    square(6,50,"       \tAMRITA APARTMENTS RESIDENT DATABASE\n\n"
                "\t-> 1. RESIDENT ENTRY  \n"
                "\t-> 2. RENT CHECKING\n "
                "\t-> 3. LIST RESIDENT DETAILS\n"
                "\t-> 4. GUEST ENTRY\n"
                "\t-> 5. GUEST LIST\n"
                "\t-> 6. MAINTAINANCE CHECKING\n");
    printf("What do you want to do : ");
    scanf("%d",&task);
    switch(task){
        case (1):
        printf("How many entries will you make :  ");
        scanf("%d",&x);
        resident(x);
        tot+=x;
        break;
        
        case(2):
        if(tot==0){
        printf("\n\nno resident available \n\n");
        break;
        }
        else{
            
        rent(tot);
        break;}
        
        
        case(3):
        if(tot==0){
        printf("\n\nno resident available\n\n");
        break;
        }
        else{
        dispres(tot);
        break;}
        
        case(4):
        if(tot==0){
        printf("\n\nno resident available\n\n");
        break;
        }
        else{
        guest();
        break;}

        case(5):
        if(tot==0){
        printf("\n\nno resident available\n\n");
        break;
        }
        else{
        dispguest();
        break;}

        case(6):
        if(tot==0){
        printf("\n\nno resident available\n\n");
        break;
        }
        else{
        maintain(tot);
        break;}

         
    }
    continuation();
    
}

int main(){
    menu();
}
//

int resident(int a){
    for(int i=tot;i<a+tot;++i){
        printf("Enter name of resident : ");
        scanf("%s",&s[i].name);
        printf("Enter type of resident(rent/owner): ");
        scanf("%s",&s[i].type);
        printf("Enter flat number : ");
        scanf("%s",&s[i].flat);
        printf("Enter flat type(2BHK,3BHK,4BHK,Villa) : ");
        scanf("%s",s[i].r[i].flattype);
        int d,j,k=7,q=50;
        for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
        printf("\tNAME- %s \n  \tTYPE - %s \n \tFLAT.NO - %s \n \tFLAT TYPE - %s\n",s[i].name,s[i].type,s[i].flat,s[i].r[i].flattype);
        }
    
    }
    }
}

    

int rent(int a){
    char ch[20];
    int d,j,k=7,q=50;
    printf("Enter name of resident : ");
    scanf("%s",ch);
    for(int i=0;i<a;++i){
        if(strcmp(s[i].name,ch)==0){
            if(strcmp(s[i].r[i].flattype,"2BHK")==0 || strcmp(s[i].r[i].flattype,"2bhk")==0){
            s[i].r[i].rentof = 10000;
               for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
            printf(" \n\n\t ##RENT##\n\n");
        printf("\tNAME - %s \n \tFLAT TYPE - %s\n \tRENT - %d\n\n",s[i].name,s[i].r[i].flattype,s[i].r[i].rentof);
        
        
        }
        }
           break;
            }

           else if(strcmp(s[i].r[i].flattype,"3BHK")==0 || strcmp(s[i].r[i].flattype,"3bhk")==0){
            s[i].r[i].rentof = 25000;
                  for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
            printf(" \n\n\t ##RENT##\n\n");
        printf("\tNAME - %s \n \tFLAT TYPE - %s\n \tRENT - %d\n\n",s[i].name,s[i].r[i].flattype,s[i].r[i].rentof);
        
        
        }
        }
           break;
           }

           else if(strcmp(s[i].r[i].flattype,"4BHK")==0 || strcmp(s[i].r[i].flattype,"4bhk")==0){
            s[i].r[i].rentof = 35000;
                  for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
            printf(" \n\n\t ## RENT ##\n\n");
        printf("\tNAME - %s \n \tFLAT TYPE - %s\n \tRENT - %d\n\n",s[i].name,s[i].r[i].flattype,s[i].r[i].rentof);
        
        
        }
        }
           break;
           }
        }
        else{
            continue;
        }
    
    }
    }
    



int maintain(int a){
    int d,j,k=7,q=50;
    char ch[20];
    printf("Enter name of resident : ");
    scanf("%s",ch);
    for(int i=0;i<a;++i){
        if(strcmp(s[i].name,ch)==0){
            if(strcmp(s[i].r[i].flattype,"2BHK")==0 || strcmp(s[i].r[i].flattype,"2bhk")==0){
            s[i].m[i].water = random(900,2000);
            s[i].m[i].elec = random(900,2000);
            s[i].m[i].pool = random(700,900);
           for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
            printf(" \n\n\t ## MAINTENANCE ##\n\n");
        printf("\tNAME - %s \n \tWATER BILL - %d\n \tELECTRICITY - %d\n \tPOOL MAINTAINANCE - %d\n\n",s[i].name,s[i].m[i].water,s[i].m[i].elec,s[i].m[i].pool);
        
        
        }
        }
           break;
            }

           else if(strcmp(s[i].r[i].flattype,"3BHK")==0 || strcmp(s[i].r[i].flattype,"3bhk")==0){
           s[i].m[i].water = random(1500,3000);
           s[i].m[i].elec = random(1000,2500);
           s[i].m[i].pool = random(700,900);
           for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
            printf(" \n\n\t ##MAINTENANCE##\n\n");
        printf("NAME - %s \n WATER BILL - %d\n ELECTRICITY - %d\n POOL MAINTAINANCE - %d\n",s[i].name,s[i].m[i].water,s[i].m[i].elec,s[i].m[i].pool);
        
        
        }
        }
           break;
           }

           else if(strcmp(s[i].r[i].flattype,"4BHK")==0 || strcmp(s[i].r[i].flattype,"4bhk")==0){
           s[i].m[i].water = random(2000,3000);
           s[i].m[i].elec = random(1500,3000);
           s[i].m[i].pool = random(1000,1500);
          for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
            printf(" \n\n\t ##MAINTENANCE##\n\n");
        printf("NAME - %s \n WATER BILL - %d\n ELECTRICITY - %d\n POOL MAINTAINANCE - %d\n",s[i].name,s[i].m[i].water,s[i].m[i].elec,s[i].m[i].pool);
        
        
        }
        }
           break;
           }
        }
        else{
            printf("no entry available!");
            break;
        }
    }
    }


int guest(){
    char ch[20];
    int d,j,k=7,q=50;
    printf("Enter name of resident : ");
    scanf("%s",ch);
    for(int i=0;i<tot;++i){
        if(strcmp(s[i].name,ch)==0){
           printf("\n\nNAME - %s \n FLAT NO  - %s\n\n",s[i].name,s[i].flat);
           printf("RESIDENT EXISTS\n\n");
           printf(" ENTER NAME OF GUEST :  ");
           scanf("%s",s[i].g[i].nameg);
           printf("ENTER TIME OF ENTRY : ");
           scanf("%s",s[i].g[i].timeofentry);
           strcpy(s[i].g[i].flatno,s[i].flat);
        for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
        printf(" \t->ENTRY COMPLETE\n\n "
               " \t->NAME OF RESIDENT - %s\n"
               " \t->FLATNO - %s\n"
               " \t->GUEST NAME : %s\n"
               " \t->TIME OF ENTRY : %s\n\n",s[i].name,s[i].g[i].flatno,s[i].g[i].nameg,s[i].g[i].timeofentry);
        }
    
        }
        break;
    }
        else {
            printf("invalid resident input!!\n");
        }
    }
    }
    




int dispguest(){
    
    
        int d,j,k=7,q=50;
        for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
        printf(" \n\n\t ##GUEST LIST##\n\n");
        for(int i=0;i<tot;++i){ 
        printf("\tNAME OF RESIDENT- %s \n\n\n",s[i].name);
        printf("\tGUEST NAME  - %s \n \tFLAT NUMBER - %s \n \tTIME FO ENTRY - %s \n\n\n ",s[i].g[i].nameg,s[i].g[i].flatno,s[i].g[i].timeofentry);
        
        
        }
        }
    
    }

    
}





int dispres(int a){
    
    
        int d,j,k=7,q=50;
        for(d=1;d<=k;d++){
        for(j=1;j<=q;j++){
            if(d==1 | j==1 | d==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if (d==k/2){
        printf(" \n\n\t ##LIST OF RESIDENTS##\n\n");
        for(int i=0;i<a;++i){ 
        printf("\tNAME- %s \n  \tTYPE - %s \n \tFLAT.NO - %s \n\n\n ",s[i].name,s[i].type,s[i].flat);
        }
        }
    
    }

    
}


int random(int i, int j){
    int lower = i, upper = j, num;
    num = (rand() % (upper - lower + 1)) + lower;
return num;
}

int square(int k, int q,char s[200]){
    int i,j;
    for(i=1;i<=k;i++){
        for(j=1;j<=q;j++){
            if(i==1 | j==1 | i==k | j==q ){
            printf("*");
            }
            else{
                printf(" ");
            }
            
            
        }
    
    printf("\n");
    if (i==k/2){
    printf("%s",s);
            }
    }
    
}


int continuation() 
{
    char input;
    printf("Do you want to continue?(y/n)\n"
    " --> ");
    scanf("%s",&input);
    if (input=='y'| input == 'Y'){
    menu();
}
    else if (input == 'n'| input =='N'){
    printf("GOOD BYE, HAVE A GREAT DAY!!!");
    }
    else{
    printf("invalid input");
    }

    }