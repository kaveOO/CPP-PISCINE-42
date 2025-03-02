#pragma once

template <typename T> void ft_swap(T &a, T &b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}
