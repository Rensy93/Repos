#pragma once
template <typename T>
class List
{
private:

	void freememory();
	void makeCopy(const List& other);

	struct Node
	{
		Node* next;
		T data;

		Node(T data, Node* next = nullptr)
		{
			this->next = next;
			this->data = data;
		}
		~Node(){}

		/*Node(const Node& other)
		{
			this->next = other.next;
			this->data = other.data;
		}

		Node* clone() const
		{
			return new Node(*this);
		}*/
	};

	Node* first;
	
	int nrOfNodes;
public:

	List();
	virtual ~List();
	List(const List& other);
	List& operator=(const List& other);
	void insertAt(int pos, const T& element);
	T getAt(int pos) const;
	void removeAt(int pos);
	bool removeElement(const T& element);
	bool findElement(const T& toFind) const;
	int length() const;
	void getAll(T arr[], int cap);



};
template <typename T>
void List<T>::freememory()
{
	
	while(first != nullptr)
	{
		Node* temp = first;
		first = first->next;
		delete temp;
	}
	//delete first;
	first = nullptr;

}
template <typename T>
void List<T>::makeCopy(const List& other)
{
	Node* temp = other.first;
	Node* temp2 = nullptr;
	this->nrOfNodes = other.nrOfNodes;
	if (other.nrOfNodes == 0)
	{
		this->first = nullptr;
	}
	else
	{
		this->first = new Node(temp->data, nullptr);
		temp = temp->next;
		Node* endTemp = this->first;
		//T tempData = other.first->data;
		for (int i = 1; i < other.nrOfNodes; i++)
		{
			temp2 = new Node(temp->data, nullptr);
			endTemp->next = temp2;
			endTemp = temp2;
			//insertAt(i, temp->data);
			temp = temp->next;

		}
	}
}

template <typename T>
List<T>::List()
{
	this->first = nullptr;
	this->nrOfNodes = 0;
}

template <typename T>
List<T>::~List()
{
	freememory();
}
template <typename T>
List<T>::List(const List& other)
{
	/*if (other.first != nullptr)
	{
		Node* temp = other.first;
		this->nrOfNodes = 0;

		for (int i = 0; i < other.length(); i++)
		{
			
			insertAt(i, temp->data);
			temp = temp->next;
			
		}
	}*/
	makeCopy(other);
}

template <typename T>
List<T>& List<T>::operator = (const List<T>& other)
{
	if (this != &other)
	{
		freememory();
		makeCopy(other);
	}
	return *this;
	/*// Stop self assignment, like: a = a;
		if (&other != this) {
			// Step 1: Free current memory
			Node<T>* tmp = first;
			while (tmp->next != nullptr) {
				first = first->next;
				delete tmp;
				tmp = first;
			}
			nrOfNodes = 0;

			// Step 2: Create a copy of rhs
			temp = other
			other.first;
			while (tmp != nullptr) {
				add(tmp->next, tmp->data);
			}
		}
		return *this;
	}*/
}


template <typename T>
void List<T>::insertAt(int pos, const T& element)
{
	if (pos > nrOfNodes || pos < 0)
	{
		throw "error1";
	}
	if (pos == 0)
	{
		Node* temp = new Node(element, first);
		first = temp;
		
	}
	else
	{
		Node *pre = first;
		Node *cur = first;
		Node *temp = new Node(element, cur->next);
		

		for (int i = 0; i< pos; i++)
		{
			pre = cur;
			cur = cur->next;

		}
		temp->data = element;
		pre->next = temp;
		temp->next = cur;
	}
		nrOfNodes++;
}
template <typename T>
T List<T>::getAt(int pos) const
{
	if (pos > nrOfNodes || pos < 0)
		throw "error2";
	else
	{
		Node* cur = first;

		for (int i = 0; i < pos; i++)
		{
			cur = cur->next;
		}
		return cur->data;
	}
}
template <typename T>
void List<T>::removeAt(int pos)
{
	if (pos >= nrOfNodes || pos < 0)
		throw  "error3";
	//else
	
		if (pos == 0)
		{
			
			Node* temp = first;
			first = first->next;
			delete temp;
			nrOfNodes--;
		}
		else if(pos<=nrOfNodes)
		{
		
			Node* prev = first;
			Node* cur = first;
			
			for (int i = 0; i < pos; i++)
			{
				prev = cur;
				cur = cur->next;
				
			}
			prev->next = cur->next;
			delete cur; 
			nrOfNodes--;
		
		}
	
}
template <typename T>
bool List<T>::removeElement(const T& element)
{
	bool removed = false;
	Node* cur = first;
	Node* pre = first;
	if (nrOfNodes > 0)
	{
		if (first->data == element)
		{
			pre = first;
			first = first->next;
			delete pre;
			nrOfNodes--;
		}
		else
		{
			for (int i = 0; i < nrOfNodes; i++)
			{
				if (cur->data == element)
				{

					pre = cur->next;
					delete cur;

					removed = true;
					nrOfNodes--;
				}
				pre = cur;
				cur = cur->next;

			}
			return removed;
		}
	}
}
template <typename T>
bool List<T>::findElement(const T& toFind) const
{
	bool exist = false;
	Node* cur = first;

	for (int i = 0; i < nrOfNodes; i++)
	{
		if (cur->data == toFind)
			exist = true;

		cur = cur->next;
	}

	return exist;
}

template <typename T>
int List<T>::length() const
{
	return nrOfNodes;
}

template <typename T>
void List<T>::getAll(T arr[], int cap) throw(...)
{
	Node* cur = first;
	if (cap < 0 || cap < nrOfNodes)
	{
		throw "error4";
	}
	else
	{
		for (int i = 0; i < nrOfNodes && cur != nullptr; i++)
		{
			arr[i] = cur->data;
			cur = cur->next;

		}
	}
}
