all:
	mkdir -p bin/
	g++ -o bin/factorial factorial/main.cpp

tests:
	byexample -l shell doctests/factorial.md
