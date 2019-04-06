#pragma once
class Integer
{
	int* m_pInt;
public:
	Integer();			
	Integer(int value);
	Integer(const Integer& obj); // Copy constructor
	~Integer();
	int GetValue() const;	
	void SetValue(int value);
};