#pragma once


template <typename T>

class MyVector
{
private:
	int nrOf;
	int cap;
	T *array;

	void expand();


public:
	MyVector(int cap = 10);
	MyVector(const MyVector &other);

	void addLast(T item);
	T deleteLast();
	//void addFirst(T item);
	T deleteFirst();
	int getAntal() const;


};


template<typename T>
void MyVector<T>::expand()
{
	this->cap += 10;
	T* temp = new T[this->cap];
	for (int i = 0; i < this->nrOf; i++)
	{
		temp[i] = this->array[i];
	}
	delete this->array;
	this->array = temp;
}
template <typename T>
MyVector<T>::MyVector(int cap)
{
	this->cap = cap;
	this->nrOf = 0;
	this->array = new T[this->cap];
}

template <typename T>
void MyVector<T>::addLast(T item)
{
	if (this->nrOf == this->cap)
	{
		this->expand();
	}

	this->array[nrOf++] = item;
}

//template<typename T>
//void MyVector<T>::addFirs(int item)
//{
//	if (this->nrOf == this->cap)
//	{
//		this->expand();
//	}
//	nrOf++;
//	for (int i = nrOf; i < 0; i--)
//	{
//		this->array[i]=this->array[i-1]:
//	}
//	this->array[0] = item;
//}

template <typename T>
int MyVector<T>::getAntal() const
{
	return this->nrOf;
}

template<typename T>
T MyVector<T>::deleteLast()
{
	nrOf--;
	return this->array[nrOf];
}
template<typename T>
T MyVector<T>::deleteFirst()
{
	T bla = this->array[0];
	for (int i = 0; i < nrOf-1; i++)
	{
		this->array[i] = this->array[i + 1];

	}
	nrOf--;
	return bla;

}