#pragma once


class Box
{

private:

	int width, height;

public:

	Box(int width = 0, int height = 0);
	virtual ~Box();

	int getWidht()const;
	int getHeight()const;
	Box* clone() const;
};