#pragma once
class Duck : public IFeatheredAnimal, public IEggLayer<double>
{

private:
	const int m_numberOfFeet{ 2 }; // must be set here for it to be a const member var. 
	int m_height;
	int m_weight;
	std::string *m_name;
protected:
	int m_featherCount;
public:
	Duck();
	Duck(int height, int weight);
	virtual ~Duck();
	virtual Duck& talk(); // virtual keyword allows for polymorphism ... otherwise methods will be invoked by whatever the reference is. 
	// standard bean getter/setters are defined in the .h file
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

	void flap();
	double getEggSize();
};

