#pragma once
#include <iostream>
using namespace std;
class tree {
private:
	double height;
	double life_length;
public:
	tree():height(0), life_length(0) {}
	tree(double h, double l);
	//setters
	void setHeight(double h);
	void setLifeLength(double l);
	//getters
	double getHeight();
	double getLifeLength();

	bool operator==(tree obj);
	bool operator>(tree obj);
	bool operator>(double l);
	tree operator+(double ll);
	void print();
	
	friend istream& operator>>(istream &is, tree & t);
	friend ostream& operator<<(ostream& os, tree t);
};
istream& operator>>(istream &is, tree & t);
ostream& operator<<(ostream &os, tree t);
