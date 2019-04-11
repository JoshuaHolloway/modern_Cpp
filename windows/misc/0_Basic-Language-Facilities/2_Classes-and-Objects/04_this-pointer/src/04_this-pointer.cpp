// "this" is only accessible through a member function
// "this" is a pointer to the current object instance that the method belongs to

class Entity
{
	int x, y;

	Entity(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

};




int main()
{
	return 0;
}