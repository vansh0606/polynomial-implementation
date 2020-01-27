/*#include<iostream>
using namespace std;

class Polynomial
{
  private:
    // Variables to store information about polynomial
  public:
    Polynomial()
    {
      // Behavior of default constructor
    }

    Polynomial(int deg)
    {
      // Behavior of constructor with arguments
    }
  
    ~Polynomial()
    {
      // Behavior of destructor
    }
  
    //  Overload copy constructor, +, - and = operators
  
    void storePolynomial()
    {
      //  Code to enter and store polynomial
    }
    void display()
    {
      //  Code to print the polynomial in readable format
    }
  
}

int main()
{
  int degFirst, degSecond;
  // Ask user to input the values of degFirst and degSecond 
  Polynomial firstPolynomial(degFirst);
  Polynomial secondPolynomial(degSecond);
  Polynomial thirdPolynomial;
  
  firstPolynomial.storePolynomial();
  secondPolynomial.storePolynomial();
  
  thirdPolynomial=firstPolynomial+secondPolynomial;
  Polynomial fourthPolynomial=firstPolynomial-secondPolynomial;
  
  firstPolynomial.display();
  secondPolynomial.display();
  thirdPolynomial.display();
  fourthPolynomial.display();
}*/
#include<iostream>
using namespace std;

class Polynomial
{
  private:
    // Variables to store information about polynomial
  int degree;
  int a[10];
  public:
    Polynomial()
    {
      // Behavior of default constructor
       degree=0;
       //cout<<"DEFAULT CONSTRUCTOR CALLED "<<endl; 
    }

    Polynomial(int deg)
    {  
         degree=deg;
      //   cout<<" PARAMETERIZED CONSTRUCTOR CALLED "<<endl;
      // Behavior of constructor with arguments
    }
  
    ~Polynomial()
    {
    //	cout<<"DESTRUCTOR CALLED ";
      // Behavior of destructor
    }
  
    //  Overload copy constructor, +, - and = operators
    Polynomial operator +(Polynomial A)
    {    Polynomial min;
         Polynomial max;
    	min.degree=this->degree<=A.degree?this->degree:A.degree;
    	max.degree=this->degree>=A.degree?this->degree:A.degree;
    	for(int i=0;i<=max.degree;i++)
    	{if(min.degree<=max.degree)
		max.a[i]=A.a[i]+this->a[i];
		else
		max.a[i]=a[i]+0;}
    
    	return max;
	}
	Polynomial operator =(Polynomial A)
	{
		this->degree=A.degree;
		for(int i=0;i<this->degree;i++)
		this->a[i]=A.a[i];
	}
	Polynomial operator -(Polynomial A)
	{
         Polynomial max;
    
    	max.degree=this->degree>A.degree?this->degree:A.degree;
    	for(int i=0;i<=max.degree;i++)
    	{  if(i>=this->degree)
    	   this->a[i]=0;
    	   if(i>=A.degree)
    	   A.a[i]=0;
    	   max.a[i]=this->a[i]-A.a[i];
    }    return max;
	}
    void storePolynomial()
    { 
      //  Code to enter and store polynomial
       cout<<"ENTER COEFFECIENT of X1,X2........respectively "<<endl;
       for(int i=0;i<degree;i++)
       cin>>a[i];
	}
    void display()
    {
      //  Code to print the polynomial in readable format
      for(int i=0;i<degree;i++)
      {
      	cout<<"("<<a[i]<<")"<<"x^"<<i;
        if(i<degree-1)
			cout<<"+";
	  }
	}
    
  
};

int main()
{
  int degFirst, degSecond;
  // Ask user to input the values of degFirst and degSecond
  cout<<"ENTER DEGREE of FIRST POLYNOMIAL "<<endl;
  cin>>degFirst; 
  Polynomial firstPolynomial(degFirst);
   cout<<"ENTER DEGREE of SECOND POLYNOMIAL "<<endl;
  cin>>degSecond;
  Polynomial secondPolynomial(degSecond);
  Polynomial thirdPolynomial;
  
  firstPolynomial.storePolynomial();
  secondPolynomial.storePolynomial();
  
  thirdPolynomial=firstPolynomial+secondPolynomial;
  Polynomial fourthPolynomial=firstPolynomial-secondPolynomial;
  cout<<"FIRST POLYNOMIAL "<<endl; firstPolynomial.display();cout<<endl;
  cout<<"SECOND POLYNOMIAL "<<endl;secondPolynomial.display();cout<<endl;cout<<"THIRD POLYNOMIAL AFTER THE ADDTION OF FIRST AND SECOND"<<endl;
  thirdPolynomial.display();cout<<endl<<"FOURTH POLYNOMIAL AFTER THE ADDTION OF FIRST AND SECOND "<<endl;
  fourthPolynomial.display();
}
