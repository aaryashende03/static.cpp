#include<iostream>
using namespace std;
class Demo
{
	public:
	    
		      int x,y,z;  //non static characteristics  -> instance variable
			  
			  static int no;  //static characteristics -> class variable
			  
	
    void fun()  //(Demo*const this)
	
	//non static behaviour = instance method
	{
       cout<<"Inside non static function"<<endl;
	   cout<<x<<"\n"; //accessing the non static characteristics 
	   cout<<no<<"\n"; //accessing the static characteristics 
	   
	   
	}

   static void gun() //static behaviour = class method 
   {
     cout<<"Inside static function"<<endl;
	 cout<<no<<"\n"; //accessing only the static chaaracteristics is allowed
   }
   
   Demo(int a = 10, int b = 20, int c = 30) //Parameterized constructor with default arguements
   {
	   this->x=a; //this pointer 
	   this->y=b; //this pointer 
	   this->z=c; //this pointer
   }
};   
int Demo::no=51; //value intialization of static characteristic (outside the class complusory otherwise an "ERROR")
//Demo class cha no mahnun characteristics which is an integer



int main()
{
  cout<<"Value of num is:"<<Demo::no<<"\n";
	
  Demo obj1(1,2,3);  
  Demo obj2(11,22,33);
  
  obj1.fun(); //fun(&obj) //non static function can access non static characterisctics & static characteristics( this pointer allowed)

  Demo::gun();  //static function can access only static characteristics(no this pointer concept)
  
  cout<<"Size of obj is:"<<sizeof(obj1)<<"\n"; //size of obj1 = Summation of non static characteristics 
  cout<<"Size of obj is:"<<sizeof(obj2)<<"\n"; ///size of obj2 = Summation of non static characteristics 
  
   return 0;
}   
			  
			  