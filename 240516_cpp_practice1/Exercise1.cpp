#include <iostream>

using namespace std;

class Shape 
{
protected:
	Shape(int sideNum, float baseLength)
	{
		this->sideNum = 0;
		this->baseLength = 0;

		//cout << "Shape Ŭ����" << endl;
	}

	int sideNum; //���� ����
	float baseLength; //�غ��� ����

	void printInfo()
	{
		cout << "���� ����: " << sideNum << endl
			<< "�غ��� ����: " << baseLength << endl;
	}
};

class Rectangle : public Shape
{
private:
	float verticalLength;

public:
	Rectangle(float verticalLength, float baseLength) : Shape(this->sideNum, this->baseLength)
	{
		this->sideNum = 4;
		this->baseLength = baseLength;
		this->verticalLength = verticalLength;

		//cout << "Rectangle Ŭ����" << endl;
	}

	void printArea()
	{
		printInfo();
		cout << "���� ����: " << this->verticalLength << endl << endl
			<< "* �簢�� ���̴�.. " << this->baseLength * this->verticalLength << endl << endl;
	}
};

class Triagle : public Shape
{
private:
	float heightLength;

public:
	Triagle(float heightLength, float baseLength) : Shape(this->sideNum, this->baseLength)
	{
		this->sideNum = 3;
		this->baseLength = baseLength;
		this->heightLength = heightLength;

		//cout << "Triagle Ŭ����" << endl;
	}

	void printArea()
	{
		printInfo();
		cout << "������ ����: " << this->heightLength << endl << endl 
			<< "* �ﰢ�� ���̴�.. " << this->baseLength * this->heightLength * 0.5 << endl << endl;
	}
};

int main()
{
	Rectangle rec(10, 15);
	Triagle tri(5, 8);

	rec.printArea();
	tri.printArea();

	return 0;
}
