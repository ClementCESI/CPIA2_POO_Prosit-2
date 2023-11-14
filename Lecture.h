#pragma once
class Lecture
{
private :
	int key;
	char data;
	char file_pathout;
	char file_pathin;
public:
	Lecture(int key, char data, char file_pathout, char file_pathin);
	void Encrypt();
	void Decrypt();
};

