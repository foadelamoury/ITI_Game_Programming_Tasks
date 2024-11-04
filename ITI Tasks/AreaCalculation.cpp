#include <vector>
#include <iostream>
using namespace std;
#pragma region Calculating Area

class GeometricShape
{
protected:
	int x;
public:
	virtual float CalcuateArea()
	{
		return 1.5f;
	}

};

class Circle : public GeometricShape
{
public:

	
	void SetRadius(int x)

	{
		this->x = x;
	}
	float CalcuateArea()
	{
		return x * x * 3.14;
	}


};
class Square : public GeometricShape
{
public:
	void SetLength(int x)
	{
		this->x = x;
	}
	float CalcuateArea()
	{
		return x * x;
	}
};
class Rectangle : public GeometricShape
{
private:
	int y;
public:
	void SetLength(int x)

	{
		this->x = x;
	}
	void SetWidth(int y)
	{
		this->y = y;
	}
	float CalcuateArea()
	{
		return x * y ;
	}

};
class Triangle : public GeometricShape
{
private:
	int y, z, s;
public:
	void setSides(int x, int y, int z)
	{

		this->x = x;
		this->y = y;
		this->z = z;
	}

	float CalcuateArea()
	{
		s = (x + y + z) / 2;
		return sqrt(s * (s - x) * (s - y) * (s - z)) ;
	}

};

float CalculatingArea(GeometricShape* shape)
{
	return shape->CalcuateArea();
}
#pragma endregion

#pragma region Challenge 2 - Average Area of all shapes
void AverageArea(vector<GeometricShape*> shapes)
{
	
	float sum = 0;
	for (GeometricShape* shape : shapes)
	{
		
		sum += CalculatingArea(shape);
	}
	cout << "Average Area: " << sum / shapes.size() << endl;

}

#pragma endregion


int main()
{
#pragma region Calculating Area

	Rectangle rectangle1;
	rectangle1.SetLength(5);
	rectangle1.SetWidth(10);
	cout << CalculatingArea(&rectangle1)<<endl;

	Triangle triangle1;
	triangle1.setSides(12, 6, 14);
	cout << CalculatingArea(&triangle1) << endl;

	Square square1;
	square1.SetLength(5);
	cout << CalculatingArea(&square1) << endl;

	Circle circle1;
	circle1.SetRadius(5);
	cout << CalculatingArea(&circle1) << endl;


#pragma endregion

#pragma region Challenge 2 - Average Area of all shapes

	vector<GeometricShape*> shapes;
	shapes.push_back(&rectangle1);
	shapes.push_back(&triangle1);
	shapes.push_back(&square1);
	shapes.push_back(&circle1);
	AverageArea(shapes);
#pragma endregion



	return 0;
}