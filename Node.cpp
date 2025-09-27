#include "Node.h"


Node::Node() : m_team(nullptr) {
	cout << "No Team" << endl;
}

Node::Node(Team* t) : m_team(t) {}


Team* Node::GetTeam() {
	return m_team;
}

Node* Node::GetNext() {
	return m_next;
}

void Node::SetTeam(Team* t){
	m_team = t;
}

void Node::SetNext(Node* next) {
	m_next = next;
}
