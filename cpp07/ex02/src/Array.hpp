#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <class T> class Array
{
	public:
		Array()
			: arr(new T[0]), arrSize(0)
			{}
		~Array()
		{
			delete[] arr;
			arr = NULL;
		}
		Array(Array& copy)
		{
			*this = copy;
		}
		Array& operator = (const Array& array)
		{
			if (this == &array)
				return (*this);
			if (arr)
			{
				delete[] arr;
				arr = NULL;
			}
			arr = new T[array.arrSize];
			for (size_t i = 0; i < array.arrSize; i++)
				arr[i] = array.arr[i];
			arrSize = array.arrSize;
			return (*this);
		}
		Array(unsigned int n)
		{
			arr = new T[n];
			arrSize = n;
		}
		T& operator [] (unsigned int n)
		{
			if (n >= arrSize)
				throw std::exception();
			return (arr[n]);
		}
		unsigned int size()
		{
			return (arrSize);
		}
	private:
		T *arr;
		unsigned int arrSize;
};

#endif
