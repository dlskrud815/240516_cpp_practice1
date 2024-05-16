#include <iostream>

using namespace std;

class Shape 
{
protected:
	Shape(int sideNum, float baseLength)
	{
		this->sideNum = 0;
		this->baseLength = 0;

		//cout << "Shape 클래스" << endl;
	}

	int sideNum; //변의 개수
	float baseLength; //밑변의 길이

	void printInfo()
	{
		cout << "변의 개수: " << sideNum << endl
			<< "밑변의 길이: " << baseLength << endl;
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

		//cout << "Rectangle 클래스" << endl;
	}

	void printArea()
	{
		printInfo();
		cout << "세로 길이: " << this->verticalLength << endl << endl
			<< "* 사각형 넓이는.. " << this->baseLength * this->verticalLength << endl << endl;
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

		//cout << "Triagle 클래스" << endl;
	}

	void printArea()
	{
		printInfo();
		cout << "높이의 길이: " << this->heightLength << endl << endl 
			<< "* 삼각형 넓이는.. " << this->baseLength * this->heightLength * 0.5 << endl << endl;
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
