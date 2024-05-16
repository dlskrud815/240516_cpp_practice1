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
		cout << "��ǰ��: " << this->name << endl;
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
		cout << "��ǰ��: " << this->name << endl;
	}
};

int main()
{
	Snack* candy1 = new Candy("���ξ���", 500, "�Ѹ���", "�Ѹ���");
	Snack* candy2 = new Candy("����", 500, "���Į���", "�����佺");
	Snack* chocolate1 = new Chocolate("��", 1000, "����", "�Ե�");
	Snack* chocolate2 = new Chocolate("ȯ", 2500, "�䷹�ην�", "�䷹��");

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