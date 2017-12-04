#pragma once
// en klassmall kan inte delas upp i h och cpp

template <typename T>
class MyVector
{
private:
	int CurrentNrOfElements;
	int capacity;
	T *MyArray;

public:

	MyVector(int capacity = 10);
	MyVector(const MyVector &otherObjekt);
	/*virtual ~MyVector();
	MyVector& operator=(const MyVector &otherObjekt);*/

	void addLast(T item);
	/*void addFirst(T item);
	void addAt(int index, T item);
	T getFirst() const;*/
	T getLast() const;
	/*T getAt(int index) const;
	T removeFirst();
	T removeLast();
	T removeAt(int index);
	void removeBetween(int start, int end);
	void clear();
	int size() const;*/
	/*Operatorer
		+ operatorn // vect3 = vect + vect2;
		[]operatorn*/

};

template <typename T>
MyVector<T>::MyVector(int capacity)
{
	this->capacity = capacity;
	CurrentNrOfElements = 0;
	MyArray = new T[this->capacity];

}

template <typename T>
void MyVector<T>::addLast(T item)
{
	this->MyArray[CurrentNrOfElements] = item;
}

template <typename T>
T MyVector<T>::getLast() const
{
	if (CurrentNrOfElements != 0)
	{
		return this->MyArray[CurrentNrOfElements - 1];
	}
	else
	{
		cout << "Are you trying to troll me or what!!" << endl;
	}
}
template<typename T>
MyVector<T>::MyVector(const MyVector<T> &otherObjekt);
