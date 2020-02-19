// C++ code to demonstrate the working of 
// getline(), push_back() and pop_back() 
#include<iostream> 
#include<string> // for string class 
using namespace std;
int main()
{
	// Declaring string 
	string str;

	// Taking string input using getline() 
	// "geeksforgeek" in givin output 
	getline(cin, str);

	// Displaying string 
	cout << "The initial string is : ";
	cout << str << endl;

	// Using push_back() to insert a character 
	// at end 
	// pushes 's' in this case 
	str.push_back('s');

	// Displaying string 
	cout << "The string after push_back operation is : ";
	cout << str << endl;

	// Using pop_back() to delete a character 
	// from end 
	// pops 's' in this case 
	str.pop_back();

	// Displaying string 
	cout << "The string after pop_back operation is : ";
	cout << str << endl;
	
	
	// Initializing string 
	string str = "geeksforgeeks is for geeks";

	// Displaying string 
	cout << "The initial string is : ";
	cout << str << endl;

	// Resizing string using resize() 
	str.resize(13);

	// Displaying string 
	cout << "The string after resize operation is : ";
	cout << str << endl;

	// Displaying capacity of string 
	cout << "The capacity of string is : ";
	cout << str.capacity() << endl;

	//Displaying length of the string 
	cout << "The length of the string is :" << str.length() << endl;

	// Decreasing the capacity of string 
	// using shrink_to_fit() 
	str.shrink_to_fit();

	// Displaying string 
	cout << "The new capacity after shrinking is : ";
	cout << str.capacity() << endl;
	
	return 0;

}
