#pragma once
template <typename T>
class MyVector
{
private:
	T * myArray;
	int capacity, currentNrOfItem;

	void expand();

public:

	MyVector(int capacity = 10);
	MyVector(const MyVector& otherObjeect);
	/*
	~MyVector();
	MyVector& operator=(const MyVector& otherObject);
	*/
	void addLast(T item);
	int getAt(int index) const;
	int size() const;
	MyVector operator+(cosnt MyVector<T>& other) cosnt;
	operator[](int index)const;
	T getLast();
};

template <typename T>
void MyVector<T>::expand()
{

}

template <typename T>
void MyVector<T>::addLast()
{
	if (this->currentNrOfItem == this->capacity)
		this->expand();

	this->myArray[this->currentNrOfItem++];
}

template <typename T>
T MyVector<T>::MyVector(int capacity = 10)
{

	this->capacity = capacity;
	this->currentNrOfItem = 0;
	this->myArray = new T[this->capacity];

}

template <typename T>
T MyVector<T>::getLast() const
{
	if (this->curretntNrOfItems == 0)
		throw "Exception call of getLast() on empty vector";
	return this->myArray[this->currentNrOfItem - 1];

}

template <typename T>
MyVector<T>::getAt(int index) const
{
	if (index < 0 || index >= this->currentNrOfItems)
		throw "Exeption: index out of bounds calling getArt(...)";
	return this->myArray[index];
}

template<typename T>
int Myvector<T>::size() const
{
	return this->currentNrOfItems;
}