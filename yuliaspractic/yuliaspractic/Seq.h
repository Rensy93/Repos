#pragma once

template <typename T>
class Seq
{
private:
	int nrOf;
	int cap;
	T* arr;
public:
	Seq(int cap = 10);
	Seq(const Seq<T> &other);

	void expand();
	void addFirst(T item);
	void addLast(T item);
	void addAt(int index, T item);

	T getFisrt() const;
	T getLast() const;
	T removeFirst();
	T removeLast();
	T removeAt(int index, T item);
	void removeBetween(int end, int start);

	int getSize() const;
};

template <typename T>
Seq<T>::Seq(int cap)
{
	this->cap = cap;
	this->nrOf = 0;
	this->arr = new T[this->cap];
}

template <typename T>
Seq<T>::Seq(const Seq<T> &other)
{
	this->cap = other.cap;
	this->nrOf = other.nrOf;
	this->arr = new T(this->cap);
	for(int i=0; i<this->nrOf; i++)
	{
		this->arr[i] = other.arr[i];
	}


	
}

template <typename T>
void Seq<T>::expand()
{
	this->cap += 10;
	T* temp = new T[this->cap];
	for (int i = 0; i < this->nrOf; i++)
	{
		temp[i] = this->arr[i];
	}
	delete this->arr;
	this->arr = temp;

}

template <typename T>
void Seq<T>::addFirst(T item)
{

	if (cap == nrOf)
	{
		this->expand();
	}
	nrOf++;
	for (int i = nrOf; i > 0; i--)
	{
		this->arr[i] = this->arr[i - 1];
	}
	this->arr[0] = item;
}

template <typename T>
void Seq<T>::addLast(T item)
{
	if(cap==nrOf)
	{
		this->expand();
	}
	this->arr[nrof++] = item;
}

template <typename T>
void Seq<T>::addAt(int index, T item)
{
	if (cap == nrOf)
	{
		this->expand();
	}
	nrOf++;
	for (int i = NrOf; i > index; i--)
	{
		this->arr[i] = this->arr[i - 1];
	}
	this->arr[index] = item;
}

template <typename T>
T Seq<T>::removeLast()
{
	
	return this->arr[nrOf--];
	
}

template <typename T>
T Seq<T>::removeFirst()
{
	T first = this->arr[0];
	for (int i = 0; i < nrOf - 1; i++)
	{
		this->arr[i] = this->arr[i + 1];
	}
	nrOf--;
	return first;
}

template <typename T>
T Seq<T>::removeAt(int index, T item)
{
	T at = this->arr[index];
	for (int i = index; i < nrOf - 1; i++)
	{
		this->arr[i] = this->arr[i + 1];
	}
	nrOf--;
	return at;
}

template <typename T>
void Seq<T>::removeBetween(int end, int start)
{
	for (int i = 0; i < nrOf - 1; i++)
	{
		this->arr[i + start] = this->arr[i + end + 1];
		nrOf -= (end - start);
	}
}

template <typename T>
int Seq<T>::getSize() const
{
	return this->nrOf;
}

template <typename T>
T Seq<T>::getFisrt() const
{
	return this->arr[0];
}

template <typename T>
T Seq<T>::getLast() const
{
	return this->arr[nrOf-1];
}