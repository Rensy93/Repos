#pragma once
template <typename T>

class Template
{
private:
	int nrOf;
	int cap;
	T *arr;


public:
	Template(int cap = 10);

	void expand();
	void addLast(T item);
	void addAt(int index, T item);
	void addFirst(T item);


	T removeFirst();
	T removeLast();
	T removeAt(int index);
};


template <typename T>
Template<T>::Template(int cap)
{
	this->cap = cap;
	this->nrOf = 0;
	this->arr = new T[this->cap];
}




template <typename T>
void Template<T>::expand()
{
	this->cap += 10;
	T*temp = new T[this->cap];
	for (int i = 0; i < this->nrOf; i++)
	{
		temp[i] = this->arr[i];

	}
	delete this->arr;
	this->arr = temp;
}

template <typename T>
void Template<T>::addLast(T item)
{
	if (this->nrOf == this->cap)
	{
		this->expand();
	}
	this->arr[nrOf++] = item;
}


template <typename T>
T Template <T>::removeFirst()
{
	T bla = arr[0];
	for (int i = 0; i < this->nrOf - 1; i++)
	{
		this->arr[i] = this->arr[i + 1];
	}
	nrOf--;
	return bla;
}

template <typename T>
void Template<T>::addFirst(T item)
{
	if (this->nrOf == this->cap)
	{
		this->expand();
	}
	nrOf++;
	for (int i = nrOf; i > 0; i--)
	{
		this->arr[i] = arr[i - 1];
	}
	this->arr[0] = item;
}