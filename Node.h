#ifndef NODE_H //Header guard
#define NODE_H //Header guard
#include <iostream>
#include <string>
#include Team.h
using namespace std;


class Node{
public:
	//Default constructor
	Node();
	//Overloaded
	Node(Team*);
	//Getter for object
	Team* GetTeam();
	//Getter for next node
	Node* GetNext();
	//Setter for the team
	void SetTeam(Team* t);
	//Setter for the next node
	void SetNext(Node* next);

private:
	//Pointer for the team object
	Team* m_team;
	//Pointer to the next node
	Node* m_next;
};
#endif
