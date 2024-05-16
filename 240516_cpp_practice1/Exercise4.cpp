#include <iostream>

using namespace std;


class Shape
{
protected:
	Shape() {}

	//���� ���� �Լ�
	virtual void draw() = 0; 
};

class Circle : public Shape
{
public:
	void draw() override //�������̵� �ʼ�
	{
		cout << "��" << endl;
	}
};

class Rect : public Shape
{
public:
	void draw() override //
	{
		cout << "�簢��" << endl;
	}
};

class Triangle : public Shape
{
public:
	void draw() override //
	{
		cout << "�ﰢ��" << endl;
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