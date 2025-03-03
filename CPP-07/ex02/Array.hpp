#pragma once

#include <iostream>
#include <vector>

template <typename T>
class Array
{
	private:
		std::vector<T> array;
	public:
		Array<T>();
		Array<T>(unsigned int n);
		~Array<T>();
};

template <typename T> Array<T>::Array()
{
	new T;
}

template <typename T> Array<T>::Array(unsigned int n)
{
	new T[n];
}

template <typename T> Array<T>::~Array()
{
	delete [] array;
}
