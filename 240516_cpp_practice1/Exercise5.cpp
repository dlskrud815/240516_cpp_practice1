#include <iostream>
#define SNACK_BASKET_SIZE 4

using namespace std;

class Snack
{
public:
	Snack() {}

	virtual void printSnack() = 0;

protected:
	int cost = 0;
	string name;
	string manufacturer;
};

class Candy : public Snack
{
private:
	string flavor;

public:
	Candy(string flavor, int cost, string name, string manufacturer) 
	{
		this->flavor = flavor;
		this->cost = cost;
		this->name = name;
		this->manufacturer = manufacturer;
	}
	
	void printSnack() override
	{
		cout << "��ǰ��: " << this->name << endl;
	}
};

class Chocolate : public Snack
{
private:
	string shape;

public:
	Chocolate(string shape, int cost, string name, string manufacturer)
	{
		this->shape = shape;
		this->cost = cost;
		this->name = name;
		this->manufacturer = manufacturer;
	}

	void printSnack() override
	{
		cout << "��ǰ��: " << this->name << endl;
	}
};

int main()
{
	Snack* candy1 = new Candy("���ξ���", 500, "�Ѹ���", "�Ѹ���");
	Snack* candy2 = new Candy("����", 500, "���Į���", "�����佺");
	Snack* chocolate1 = new Chocolate("��", 1000, "����", "�Ե�");
	Snack* chocolate2 = new Chocolate("ȯ", 2500, "�䷹�ην�", "�䷹��");

	Snack* snackBasket[SNACK_BASKET_SIZE] = {candy1, candy2, chocolate1, chocolate2};

	for (int i = 0; i < sizeof(snackBasket) / sizeof(snackBasket[0]); i++)
	{
		snackBasket[i]->printSnack();
	}

	return 0;
}