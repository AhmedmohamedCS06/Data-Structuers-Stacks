#include <iostream>
#include <stack>
using namespace std;
void printtheStack(stack <int> &s)
{
	int x;
	stack <int> t;
	while (!s.empty())
	{
		x = s.top();
		s.pop();
		t.push(x);

	}
	while (!t.empty())
	{
		x = t.top();
		t.pop();
		s.push(x);
		cout << x << endl;

	}
}

void deleteNumberfromstack(stack <int>& s , int data)
{
	bool found = false;
	stack <int> t;
	while ( !s.empty())
	{
		int x = s.top();
		s.pop();

		if (x == data)
		{
			found = true;
			break;
		}

		t.push(x);
	}
	if (!found)
	{
		cout << "Sorry we cannot Found this Number : " << data;
	}
	while (!t.empty())
	{
		int x = t.top();
		t.pop();
		s.push(x);
	}
}

bool CheckEqualityy(stack<int>&s1 , stack<int>&s2) {
	stack <int> t1;
	stack <int> t2;
	bool Equal = true;
	int x1;
	int x2;
	while (!s1.empty() && !s2.empty())
	{
		int x1 = s1.top();
		int x2 = s2.top();

		if (x1 != x2)
		{
			Equal = false;
			cout << "false";
		}
		s1.pop();
		s2.pop();
		t1.push(x1);
		t2.push(x2);
	
	}
	if (!s1.empty() || !s2.empty())
	{
		Equal = false;
		while (!s1.empty())
		{
			t1.push(s1.top());

			s1.pop();
		}
		while (!s2.empty())
		{
			t2.push(s2.top());
			s2.pop();
		}
	}

	while (!t1.empty())
	{
		x1 = t1.top();
		t1.pop();

		s1.push(x1);
	}
	while (!t2.empty())
	{
		x2 = t2.top();
		t2.pop();

		s2.push(x2);
	}
	cout << Equal;
	return Equal;
}
void teststack(stack<int>& s)
{
	stack <int>t1;
	stack<int>t2;
	stack<int>t3;
	t1.push(s.top());
	s.pop();
	while (!s.empty())
	{
		t2.push(s.top());
		s.pop();
	}
	t3.push(t2.top());
	t2.pop();
	s.push(t1.top());
	while (!t2.empty())
	{
		s.push(t2.top());
		t2.pop();
	}
	s.push(t3.top());
}
int main()
{
	stack <int> stack1;
	stack <int> stack2;
	stack1.push(10);
	stack1.push(20);
	stack1.push(30);
	stack1.push(40);
	stack1.push(50);
	printtheStack(stack1);
	teststack(stack1);
	cout << "-------"<<endl;
	printtheStack(stack1);
	return 0;
}
