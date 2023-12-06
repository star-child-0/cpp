#pragma once

class Data
{
	private:
		const int _num;
	public:
		Data();
		Data(int n);
		Data(Data const &src);
		Data &operator=(Data const &src);
		~Data();

		int getNum() const;
};
