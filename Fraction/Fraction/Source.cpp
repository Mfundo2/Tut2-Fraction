#ifndef fraction_H
#define fraction_H

#include <iostream>
#include <cmath>


using namespace std;

class Fraction
	{
	private:
		int num;
		int denom;
	public:
		Fraction(int numerator = 0, int denominator = 1);
		~Fraction();
		Fraction getFrac();
		Fraction addFraction(Fraction add);
		Fraction subFraction(Fraction sub);
		Fraction multFraction(Fraction mult);
		Fraction divFraction(Fraction div);
		void print();
	};


	Fraction::Fraction(int numerator, int denominator)
	{
		num = numerator;
		denom = denominator;
	}
	Fraction Fraction::getFrac() //Method for obtaining the fraction from the user..

	{
		int num, denom; //declaration of variables
		cout << "Number entry\n\n";
		cout << "Enter the numerator:";
		cin >> num;
		cout << "Enter the denominator:";
		cin >> denom;
		return Fraction(num, denom);
	}

	Fraction Fraction::addFraction(Fraction add) //Fraction that adds fractions
	{
		add.num = (num * add.denom) + (denom * add.num);
		add.denom = (denom * add.denom);
		return add;
	}

	Fraction Fraction::subFraction(Fraction sub) //function that subtract fractions
	{
		sub.num = (num * sub.denom) - (denom * sub.num);
		sub.denom = (denom * sub.denom);
		return sub;

	}
	Fraction Fraction::multFraction(Fraction mult) //function that multiply fractions
	{
		mult.num = (num * mult.num);
		mult.denom = (denom * mult.denom);
		return mult;
	}

	Fraction Fraction::divFraction(Fraction div) //function to divide fractions

	{
		div.num = (num * div.denom);
		div.denom = (denom * div.num);
		return div;

	}
	void Fraction::print() // function to display mixed fractions
	{
		int x, y;
		if (num > denom)
		{
			x = num / denom;
			y = num % denom;


			cout << "The result is " << x << "   " << y << " / " << denom << endl;
		}
		else
			cout << "The result is" << num << "/" << denom << endl;

	}
};
#endif