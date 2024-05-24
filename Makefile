all: build

build:
	@echo "Construyendo..."
	g++ -c easy_23.cpp
	g++ -c main.cpp
	g++ easy_23.o main.o -o main
	.\main.exe

clean_o:
	rm*.clean_o

clean.exe:
	rm*.exe