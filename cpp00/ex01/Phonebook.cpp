#include "Phonebook.hpp"
#include "Contact.hpp"

void	PhoneBook::display_contacts()
{
	int i = 0;
	int j = 0;

	if (size == 0)
	{
		std::cout << "Please add something first!" << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < size)
	{
		std::cout << "         " << i << "|";
		if (getContact(i).getFirstname().length() > 9)
			std::cout << getContact(i).getFirstname().substr(0, 9) << ".";
		else
		{
			j = getContact(i).getFirstname().length();
			j = 10 - j;
			while (j)
			{
				std::cout << " ";
				j--;
			}
			std::cout << getContact(i).getFirstname();
		}
		std::cout << "|";
		if (getContact(i).getLastname().length() > 9)
			std::cout << getContact(i).getLastname().substr(0, 9) << ".";
		else
		{
			j = getContact(i).getLastname().length();
			j = 10 - j;
			while (j)
			{
				std::cout << " ";
				j--;
			}
			std::cout << getContact(i).getLastname();
		}
		std::cout << "|";
		if (getContact(i).getNickname().length() > 9)
			std::cout << getContact(i).getNickname().substr(0, 9) << ".";
		else
		{
			j = getContact(i).getNickname().length();
			j = 10 - j;
			while (j)
			{
				std::cout << " ";
				j--;
			}
			std::cout << getContact(i).getNickname() << std::endl;
		}
		i++;
	}
	std::cout << std::endl;
	PhoneBook::choose_contact();
}

void PhoneBook::choose_contact()
{
    std::string input;
    int index = 0;

    std::cout << "Please enter the index of the desired contact." << std::endl;
    std::getline(std::cin, input);
    
    if (input.length() != 1 || input[0] < '0' || input[0] >= '0' + size)
    {
        std::cout << "Invalid input. Please enter a number between 0 and " << size - 1 << "." << std::endl;
        PhoneBook::choose_contact();
        return;
    }
    index = input[0] - '0';
    std::cout << std::endl;
    std::cout << "First name        : " << getContact(index).getFirstname() << std::endl;
    std::cout << "Last name         : " << getContact(index).getLastname() << std::endl;
    std::cout << "Nickname          : " << getContact(index).getNickname() << std::endl;
    std::cout << "Phone number      : " << getContact(index).getPhonenumber() << std::endl;
    std::cout << "Darkest secret... : " << getContact(index).getSecret() << std::endl;
}

void PhoneBook::rotate_contacts(PhoneBook *pb)
{
	int i = 1;
	
	while (i <= 7)
	{
		pb->contacts[i - 1] = pb->contacts[i];
		i++;
	}
}

int	PhoneBook::getSize(void)
{
	return(this->size);
}

void PhoneBook::setSize(int n)
{
	this->size = n;
}

void PhoneBook::setContact(int index, Contact contact)
{
	this->contacts[index] = contact.add_contact();
}

Contact PhoneBook::getContact(int index)
{
	return (this->contacts[index]);
}
