#include "tree.h"

tree::tree(double h, double l)
{	height = h;
	life_length = l;}
void tree::setHeight(double h)
{	this->height = h;}
void tree::setLifeLength(double l)
{
	this->life_length = l;
}
double tree::getHeight()
{
	return height;
}
double tree::getLifeLength()
{
	return life_length;
}
bool tree::operator==(tree obj)
{
	return(height == obj.height);}
bool tree::operator>(tree obj)
{
	return height>obj.height;}

bool tree::operator>(double l)
{
	return life_length > l;}
tree tree::operator+(double ll)
{
	this->life_length += ll;
	this->height += ll * 0.5;
	return (*this);
}
void tree::print()
{
	cout << height << " " << life_length << endl;}

istream & operator>>(istream & is, tree & t)
{
	
		is >> t.height >> t.life_length;
		return is;
	

}

ostream & operator<<(ostream & os, tree t)
{
	os << "Tree neight: " << t.height << "\tTree life length: " << t.life_length << endl;
	return os;
}
