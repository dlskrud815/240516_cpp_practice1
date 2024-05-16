#include <iostream>

using namespace std;


class Shape
{
protected:
	Shape() {}

	//순수 가상 함수
	virtual void draw() = 0; 
};

class Circle : public Shape
{
public:
	void draw() override //오버라이딩 필수
	{
		cout << "원" << endl;
	}
};

class Rect : public Shape
{
public:
	void draw() override //
	{
		cout << "사각형" << endl;
	}
};

class Triangle : public Shape
{
public:
	void draw() override //
	{
		cout << "삼각형" << endl;
	}
};

int main()
{
	Circle circle;
	Rect rect;
	Triangle triangle;

	circle.draw();
	rect.draw();
	triangle.draw();

	return 0;
}