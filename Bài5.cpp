#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int a,b,c,delta;
	float x,x1,x2;
	cout<<"nhap a : ";cin>>a;
	cout<<"nhap b : ";cin>>b;
	cout<<"nhap c : ";cin>>c;
	if ( a == 0 ){
      if (b == 0){
	   if (c == 0)
	      cout<<"phuong trinh co vo so nghiem";
	 else 
	      cout<<"phuong trinh vo nghiem";
     }else{
         x=(float)-b/a;
		 }
   }else
	delta=pow(b,2)-4*a*c;
	if(delta > 0)
	{
		x1=(float)(-b+sqrt(delta))/2*a;
		x2=(float)(-b-sqrt(delta))/2*a;
			cout<<"Phuong trinh co 2 nghiem phan biet x1 :"<<x1<<",va x2 :"<<x2;
	} 
	else if (delta = 0 )
      cout<<"Phuong trinh co nghiem kep x : "<<(float)-b/(2*a);
    else{
       cout<<"Phuong trinh vo nghiem";
       }
     return 0;
       

	  
	   
        

		
	
}
