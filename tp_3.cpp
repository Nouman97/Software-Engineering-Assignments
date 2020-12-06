#include <iostream>
using namespace std;

// ------------ZooAnimal#1--------------

class ZooAnimal   
{ 
	private: 
		const char *name; 
		int cageNumber; 
		int weightDate; 
		int weight; 
		ZooAnimal* mother;

	public: 

		// 1.1 refers to Create		

		ZooAnimal(const char* string1, int x, int y, int z)
		{
			name = string1;
			cageNumber = x;
			weightDate = y;
			weight = z;
		}

		void Destroy () // destroy function 
		{}

		// 1.3	
	
		const char* reptName ()
		{
			return name;
		}

		// 1.2

		inline int daysSinceLastWeighed(int today)
		{ 

			int startday, thisday; 
			thisday = today/100*30 + today - today/100*100; 
			startday = weightDate/100*30 + weightDate - weightDate/100*100; 
			if (thisday < startday)  
			{
				thisday += 360;
			} 
			return (thisday-startday); 

		} 

		// 2.1

		inline int reptWeightDate()
		{
			return weightDate;
		}

		// 2.2

		inline void changeWeightDate(int today)
		{
			weightDate = today;
		}

		// 2.3

		void isMotherof(ZooAnimal& animal)
		{
			mother = &animal;
		}			
					

}; 

int main()
{
	ZooAnimal bozo("Bozo", 408, 1027, 400);
	cout << "This animal's name is " << bozo.reptName() << endl;
	cout << "This animal's weighting was done on day: " << bozo.reptWeightDate() << endl;
	cout << "Days since last weighed: " << bozo.daysSinceLastWeighed(5) << endl;
	bozo.changeWeightDate(5);
	cout << "This animal's weighting was done on day: " << bozo.reptWeightDate() << endl;
	
	ZooAnimal onzo("Onzo", 30, 30, 30);
	bozo.isMotherof(onzo);
}
	
