#pragma once

class Entry
{
public:
	Entry();			// initializes all values to blanks
	const char* GetName();		// returns name in an entry

private:
	char name[20];		// A name is 20 characters,
	char phoneNumber[20];	// so is a phone number,
	char address[20];		// and so is an address.

	class PhonesList
	{
	public:
		void list();
		void addPhone();
		void search();
		void remove();

	private:
		int	maxSize,
			currentSize;
		Entry* entryList;
		void Grow();
		int FindName(char* aName);
	}
};

class PhonesList
{
public:
	void list();
	void addPhone();
	void search();
	void remove();

private:
	int	maxSize,
		currentSize;
	Entry* entryList;
	void Grow();
	int FindName(char* aName);
};