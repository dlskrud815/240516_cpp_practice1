#include <iostream>

using namespace std;


class Shape //virtual �޼ҵ带 �ϳ� �̻� ������ �ִ� �߻� Ŭ����
{
protected:
	Shape() {}

	//���� ���� �Լ�
	virtual void draw() = 0; 
};

class Circle : public Shape
{
public:
	Circle() {}

	void draw() override //�������̵� �ʼ�
	{
		cout << "��" << endl;
	}
};

class Rect : public Shape
{
public:
	Rect() {}

	void draw() override //
	{
		cout << "�簢��" << endl;
	}
};

class Triangle : public Shape
{
public:
	Triangle() {}
	
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