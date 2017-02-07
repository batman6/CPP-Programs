#include<stdio.h>
//#include<conio.h>
//#define no_stud 2
#define subject 2
const int no_stud =2;
struct student
{
long int rollno;
int marks[subject];
float avg;
int total;
};
struct student ecei[no_stud];
 void setMarks()
   {
    int i,j;
   for (i=0;i<no_stud;i++)
      {
       printf("Enter rollno no:\n");
       scanf("%ld",&ecei[i].rollno);
  /* printf("%ld\n", rollno[i]);*/
       for(j=0;j<subject;j++)
	 {
	  printf("Enter marks:\n");
	  scanf("%d",&ecei[i].marks[j]);
    /*printf("%d\n", marks[i][j]);*/
	  }
    }
}
    void getMarks()
       {
       int i,j;
       for(i=0;i<no_stud;i++)
	 {
	  printf("\nRoll No ->%ld\n", ecei[i].rollno);
	  for(j=0;j<subject;j++)
	    {
	     printf("Marks%d %d\t,",j,ecei[i].marks[j]);
	    }

	  }

       }


 int sum(int marks[])
   {
   int i,total=0;
   for (i=0;i<subject;i++)
   {
/*   printf("The marks in sum fn: %d ",marks[i]);*/
    total+=marks[i];

   }
   return total;
   }
    float average(int tot)
   {

     return ((float) tot/no_stud);
    }
int bestScore()
   {
     int i;
     int temp=0;
     int index=0;
     for(i=0;i<no_stud;i++)
       if(ecei[i].total > temp)
       index=i;
       temp=ecei[i].total;
        return index;
   }
int  main()
{
 int i,j;

 setMarks();
 getMarks();

     for (i=0;i<no_stud;i++)
       {
      ecei[i].total=sum(ecei[i].marks);
      printf("\nstudent %d--> total %d\n",i+1,ecei[i].total);
       }
     for (i=0;i<no_stud;i++)
       {
   ecei[i].avg=  average(ecei[i].total);
    printf("The avg of student %d %f\n",i+1,ecei[i].avg);
       }
   printf("Get The Best Score %d\n",ecei[bestScore()].rollno) ;

return 0;
   }
