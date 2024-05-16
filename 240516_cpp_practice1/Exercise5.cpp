#include <iostream>

using namespace std;

class Snack
{
public:
	Snack() {}

	virtual void printSnack() = 0;
};

class Candy : public Snack
{
private:
	string flavor;
	int cost = 0;
	string name;
	string manufacturer;
public:
	Candy(string flavor, int cost, string name, string manufacturer) 
	{
		this->flavor = flavor;
		this->cost = cost;
		this->name = name;
		this->manufacturer = manufacturer;
	}

	void printSnack()
	{
		cout << "»óÇ°¸í: " << this->name << endl;
	}
};

class Chocolate : public Snack
{
private:
	string shape;
	int cost = 0;
	string name;
	string manufacturer;
public:
	Chocolate(string shape, int cost, string name, string manufacturer)
	{
		this->shape = shape;
		this->cost = cost;
		this->name = name;
		this->manufacturer = manufacturer;
	}

	void printSnack()
	{
		cout << "»óÇ°¸í: " << this->name << endl;
	}
};

int main()
{
	Snack* candy1 = new Candy("ÆÄÀÎ¾ÖÇÃ", 500, "·Ñ¸®ÆË", "·Ñ¸®ÆË");
	Snack* candy2 = new Candy("µþ±â", 500, "ÃòÆÄ®½º", "ÃòÆÄÃä½º");
	Snack* chocolate1 = new Chocolate("ÆÇ", 1000, "°¡³ª", "·Ôµ¥");
	Snack* chocolate2 = new Chocolate("È¯", 2500, "Æä·¹·Î·Î½¦", "Æä·¹·Î");

	Snack* snackBasket[4];
	snackBasket[0] = candy1;
	snackBasket[1] = candy2;
	snackBasket[2] = chocolate1;
	snackBasket[3] = chocolate2;

	for (int i = 0; i < 4; i++)
	{
		snackBasket[i]->printSnack();
	}

	return 0;
}