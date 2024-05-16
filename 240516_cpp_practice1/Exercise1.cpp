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
			<< "�غ��� ����: " << baseLength << endl << endl;
	}
};

class Rectangle : public Shape
{
public:
	Rectangle(float verticalLength, float baseLength) : Shape(this->sideNum, this->baseLength)
	{
		this->sideNum = 4;
		this->baseLength = baseLength;
		this->verticalLength = verticalLength;

		//cout << "Rectangle Ŭ����" << endl;
	}

	float verticalLength;

	void printArea()
	{
		printInfo();
		cout << "�簢�� ����.. " << baseLength * verticalLength << endl;
	}
};

class Triagle : public Shape
{
public:
	Triagle(float heightLength, float baseLength) : Shape(this->sideNum, this->baseLength)
	{
		this->sideNum = 3;
		this->baseLength = baseLength;
		this->heightLength = heightLength;

		//cout << "Triagle Ŭ����" << endl;
	}
	
	float heightLength;

	void printArea()
	{
		printInfo();
		cout << "�ﰢ�� ���̴�.. " << baseLength * heightLength * 0.5 << endl;
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
