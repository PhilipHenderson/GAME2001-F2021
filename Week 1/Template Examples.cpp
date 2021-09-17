// "generic" classes or functions
// Compair 2 things. return smallest. return the largest
#include <iostream>
using namespace std;

//Template function
// check 2 "things". Return the smallest
template <class T>
T  min_func(T lVal, T rVal)
{
	if (lVal > rVal)
	{
		return rVal;
	}
	return lVal;
}


//Template function 


// check 2 "things". Return the largest
template <class T>
T max_func(T lVal, T rVal)
{
	if (lVal > rVal)
	{
		return lVal;
	}
	return rVal;
}

//implement a template class

template <class T>
class TemplateClass
{
public:
	// Constructor
	TemplateClass(T val)
	{
		m_val = val;
	}
	bool operator<(TemplateClass& rVal) // a < b ==) a.operator<(b);
	{
		return m_val < rVal.GetVal();
	}
	bool operator>(TemplateClass& rVal) // a > b ==) a.operator>(b);
	{
		return m_val > rVal.GetVal();
	}
	T GetVal()
	{
		return m_val;
	}
private:
	T m_val;
};
/*
// Main function

int main()
{
	cout << "Template Example" << endl << endl;
	cout << "Min = " << min_func(56.1, 43.6) << endl;
	cout << "Max = " << max_func('c', 'd') << endl;

	//Create 2 "TemplateClass" objects and compare them.
	cout << "Max (Objects) = " << max_func(TemplateClass<int>(7), TemplateClass<int>(4)).GetVal();

	return 0;
}*/