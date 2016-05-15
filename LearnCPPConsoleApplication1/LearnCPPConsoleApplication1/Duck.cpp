#include "stdafx.h"
#include "Duck.h"



Duck::Duck() : Duck(5, 2)// call to constructor.  // m_numberOfFeet{ 2 } default constructor & member init list for constant assignment ... better done in .h file for C++11 due to multi constructor issue
{
	this->talk();
}

Duck::Duck(int height, int weight) : m_height{ height }, m_weight{ weight }	// init member variables w/o using the copy constructor assignment. 
{
	//m_height = height; better to assign these like above
	//m_weight = weight; 
}

Duck::~Duck() // destructor ... clean memory
{
	talk().talk();
	delete m_name;
}

Duck& Duck::talk() { // returns this ... for method chaining. 
	std::cout << "Quack\n";
	return *this;
}

void Duck::setName(std::string &name)
{
	m_name = new std::string(name); // copy constructor
	name = "Bobby";

	std::cout << *m_name << std::endl;
	std::cout << name << std::endl;
}

std::string const Duck::getName()
{
	return *m_name;
}

void Duck::flap() {
	// do something
}

double Duck::getEggSize() {
	return 2.5;
}
