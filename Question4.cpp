///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 
#include<iostream>
#include<string>

using namespace std;
//Virtual class Animal
class Animal
{
protected:
	string Name, Action;
public:
	virtual void name() {};
	virtual void does() {};
};

//These are concrete classes
class Bird :public Animal
{
	//No need to declare Private menbers for this class
	//because they have already been inherited from Animal class.
public:
	Bird() {};
	void name()
	{
		cout << "I am an Animal,a bird in particular but my name is:\n";
		cout << "Jessica";
	}
};
class Dog :public Animal
{
public:
	Dog() {};
	void name()
	{
		cout << "I am an Animal,a dog in particular but my name is:\n";
		cout << "Frank";
	}

	void does()
	{
		cout << "I bark!";

	}
};

int main()
{
	Bird myBird;
	Dog myDog;
	Animal* animalPtr1;
	Animal* animalPtr2;
	animalPtr1=&myBird;
	animalPtr2 = &myDog;
	myDog.name();//Direct access to member function name.
	animalPtr2->does();
	return 0;

}
