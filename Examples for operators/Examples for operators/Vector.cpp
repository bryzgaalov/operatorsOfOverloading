#include "Vector.h"

Vector::Vector()
{
	els = 0;
	cur_size = buf_size = 0;
}

Vector::Vector(int size)
{
	cur_size = 0;
	buf_size = size;
	els = new tree[buf_size];
}

Vector::Vector(const Vector & obj)
{
	cur_size = buf_size = obj.cur_size;
	els = new tree[buf_size];
	for (int i = 0; i < buf_size; i++) {
		els[i] = obj.els[i];
	}
}

Vector::~Vector()
{
	delete[] els;
}

int Vector::size()
{
	return cur_size;
}

tree & Vector::operator[](int index)
{
	return els[index];
}

Vector Vector::operator=(const Vector & obj)
{
	cur_size = buf_size = obj.cur_size;
	els = new tree[buf_size];
	for (int i = 0; i < buf_size; i++) {
		els[i] = obj.els[i];
	}

	return *this;
}

void Vector::add(tree el)
{
	if (buf_size == 0)
	{
		buf_size = 4;
		els = new tree[buf_size];
	}
	else
	{
		if (cur_size == buf_size)
		{
			buf_size *= 2;
			tree* tmp = new tree[buf_size];
			for (int i = 0; i < cur_size; i++)
			{
				tmp[i] = els[i];
			}
			delete[] els;
			els = tmp;
		}
	}
	els[cur_size++] = el;
}

