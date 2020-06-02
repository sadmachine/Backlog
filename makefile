all: backlog

backlog: backlog.cpp ./controller/*.hpp ./model/*.hpp ./view/*.hpp ./res/*.hpp
	g++	backlog.cpp -o backlog