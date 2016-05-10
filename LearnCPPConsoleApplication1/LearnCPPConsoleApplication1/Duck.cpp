#include "stdafx.h"
#include "Duck.h"



Duck::Duck() // m_numberOfFeet{ 2 } default constructor & member init list for constant assignment;
{
	this->talk();
}

Duck::Duck(int height, int weight) : Duck()	// call to default constructor
{
	m_height = height;
	m_weight = weight; 
}

Duck::~Duck() // destructor ... clean memory
{
	talk().talk();
	delete m_name;
}

Duck& Duck::talk() {
	std::cout << "Quack\n";
	return *this;
}

void Duck::setName(std::string &name)
{
	m_name = new std::string(name); // copy constructor? 
	name = nullptr;

	std::cout << m_name << std::endl;
	std::cout << name << std::endl;
}

std::string const Duck::getName()
{
	return *m_name;
}
