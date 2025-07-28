#include <stdio.h>
#include <string.h>

// Define a structure to hold student information
struct Student 
{
    char name[50];
    int age;
    char standard[5];
    int roll;
    int maths;
    int phy;
    int chem;
    int total;
    float per;

    
};

int main() 
{
    int n,a,serrol,total[9];
    float per[9];

    // Ask for the number of students
    printf("\n\t\t!!!Hello User!!!");
    printf("\n\nEnter the number of students: ");
    scanf("%d", &n);

    // Declare an array to hold student information
    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) 
    {
        printf("\nEntering details for student %d:\n", i + 1);
       
        printf("Enter name: ");
        scanf(" %[^\n]s", students[i].name);  // Using " %[^\n]s" to read strings with spaces
        
        printf("Enter age: ");
        scanf("%d", &students[i].age);
       
        printf("Enter standard: ");
        scanf(" %s", students[i].standard);

        printf("Enter roll nummber :");        
        scanf("%d", &students[i].roll);

        printf("Enter maths marks: ");
        scanf("%d", &students[i].maths);
        
        printf("Enter physics marks : ");
        scanf("%d", &students[i].phy);
        
        printf("Enter chemistry marks : ");
        scanf("%d", &students[i].chem);

         total[i] = students[i].chem+students[i].phy+students[i].maths;
         per[i]=total[i]/3;
        
        
        
    }
    
            printf("\nEnter -- 1 for roll number information\n\t2 for chart form \n Ans =");
            scanf("%d",&a );
            printf("%d",a);
     
    if(a==1)
     {
        printf("\n\n\tEnter the  roll number =");
        scanf("%d",&serrol);

             for(int i=1 ;i<n ;i++)
             { if(serrol == students[i].roll){
                    printf("\nStudent %d: \tName: %s\t\t, Age: %d\t, standard: %s\t\t TOTAL: %d\t\t ,percent : %f", 
                   i+1 ,students[i].name, students[i].age, students[i].standard ,total[i] ,per[i]);
                   
                   if( per[i] < 35)
                        printf("Failed");
                    else if( per[i] > 35 && per[i]<60)
                        printf("\t\tRESULT : PAss  ;;Grade : D ");
                    else if( per[i] >= 60 && per[i]<80)
                        printf("\t\tRESULT : PASS ;; Grade : C");
                    else if( per[i]>=80 && per[i]<95)
                        printf("\t\tRESULT :PASS ;; Grade : B");
                    else
                        printf("\t\tRESULT :PASS ;; GRAde :A");
                   
                   break;
                 }
            }
     }  
    else if(a==2)
    {
          // Print student details
          printf("\nStudent Details:\n");
         for (int i = 0; i < n; i++) 
        {
                printf("\nStudent %d: \tName: %s\t\t, Age: %d\t, standard: %s\t\t  TOTAL: %d\t\t ,percent : %f", 
                i + 1, students[i].name, students[i].age, students[i].standard ,total[i] ,per[i]);
               
                if( per[i] < 35)
                     printf("Failed");
                 else if( per[i] > 35 && per[i]<60)
                    printf("\t\tRESULT : PAss  ;;Grade : D ");
                else if( per[i] >= 60 && per[i]<80)
                    printf("\t\tRESULT : PASS ;; Grade : C");
                else if( per[i]>=80 && per[i]<95)
                    printf("\t\tRESULT :PASS ;; Grade : B");
                else
                    printf("\t\tRESULT :PASS ;; GRAde :A");
        }
    }
    else 
                printf("INVALID");
   
    return 0;
}
