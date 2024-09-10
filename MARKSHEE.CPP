
#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int wd,oops,python,state,iks,total;
	float per;
	void getmarks()
	{
		cout<<"enter marks of wed designing :";
		cin>>wd;
		cout<<"enter marks of oops :";
		cin>>oops;
		cout<<"enter marks of python :";
		cin>>python;
		cout<<"enter marks of state :";
		cin>>state;
		cout<<"enter marks of iks :";
		cin>>iks;
	 }
	 void marks()
	 {        clrscr();
		  cout<<"wd\t\toops\t\tpython\t\tstate\t\tiks\t\t";
		  cout<<wd<<"\t\t"<<oops<<"\t\t"<<python<<"\t\t"<<state<<"\t\t"<<iks;
		  total=wd+oops+python+state+iks;
		  cout<<"\n\the total is :"<<total;
		  per=total/5;
		  cout<<"\n\the percentage is"<<per ;
	 }
	  void greade()
	  {         if (per>80)
		    {
			cout<<"\ngreade a";
		    }
		    else if (per>70)
		    {
			cout<<"\ngreade b";
		    }
		    else if (per>60)
		    {
			 cout<<"\ngreade c";
		    }
		    else if (per>50)
		    {
			 cout<<"ngreade d";
		    }
		    else if (per>40)
		    {
			cout<<"ngreade f";
		    }

	       }
 };
 void main()
 {
	   student s1;
	   clrscr();
	   s1.getmarks();
	   s1.marks();
	   s1.greade();
	   getch();
}