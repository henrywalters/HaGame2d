#pragma once
#include <iostream>
#include "Loggable.h"

class Vector
{
public:
	double x = NULL;
	double y = NULL;
	double z = NULL;

	Vector();
	Vector(double x, double y);
	Vector(double x, double y, double z);
	~Vector();

	void normalize();
	Vector normalized();

	double magnitude();

	double dot(Vector b);

	Vector operator + (const Vector& b);
	Vector operator - (const Vector& b);
	Vector operator * (double scalar);

	bool operator == (const Vector & b);
	bool operator != (const Vector & b);

	Vector& operator += (const Vector & b);
	Vector& operator -= (const Vector & b);

	Vector cross(Vector b);

	bool isContainedBy(double x, double y, double w, double h);

	void display();

	std::string toString();

	static Vector Identity();
	static Vector Zero();
};

struct Transform {
	Vector position;
	Vector scale;
	double rotation;
};