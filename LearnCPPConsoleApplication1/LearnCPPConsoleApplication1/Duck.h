#pragma once
class Duck
{

private:
	const int m_numberOfFeet{ 2 };
	int m_height;
	int m_weight;
	std::string *m_name;
protected:

public:
	Duck();
	Duck(int height, int weight);
	~Duck();
	Duck& talk();

	int getHeight() {
		return m_height;
	}

	void setHeight(int height)
	{
		m_height = height;
	}

	int getWeight()
	{
		return m_weight;
	}

	void setWeight(int weight)
	{
		m_weight = weight;
	}

	int getNumberOfFeet() {
		return m_numberOfFeet;
	}
	void setName(std::string & name);
	std::string const getName();

};

