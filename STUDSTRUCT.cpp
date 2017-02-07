#include<iostream>
using namespace std;
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
struct student a[no_stud];
 void setMarks()
   {
    int i,j;
   for (i=0;i<no_stud;i++)
      {
       cout<<"Enter rollno no:\n";
       cin>>a[i].rollno;
  /* cout<<rollno[i];*/
       for(j=0;j<subject;j++)
	 {
	  cout<<"Enter marks:\n";
	  cin>>a[i].marks[j];
    /*cout<<marks[i][j]);*/
	  }
    }
}
    void getMarks()
       {
       int i,j;
       for(i=0;i<no_stud;i++)
	 {
	  cout<<"\nRoll No ->"<<a[i].rollno;
	  for(j=0;j<subject;j++)
	    {
	     cout<<"\nMarks"<<a[i].marks[j];
	    }

	  }

       }


 int sum(int marks[])
   {
   int i,total=0;
   for (i=0;i<subject;i++)
   {
/*   cout<<"The marks in sum fn: "<<marks[i]<<endl;*/
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
     for(i=0;i<no_stud;i++){
       if(a[i].total > temp)
       index=i;
       temp=a[i].total;}
    return index;
   }
int  main()
{
 int i,j;

 setMarks();
 getMarks();

     for (i=0;i<no_stud;i++)
       {
      a[i].total=sum(a[i].marks);
      cout<<"\nstudent-->"<<i+1<<" "<<a[i].total;
       }
     for (i=0;i<no_stud;i++)
       {
   a[i].avg=average(a[i].total);
    cout<<"\nThe avg of student"<<i+1<<" "<<a[i].avg;
       }
   cout<<"Get The Best Score \n"<<a[bestScore()].rollno ;

return 0;
   }
