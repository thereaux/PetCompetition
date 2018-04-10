CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

PetCompetition: main.o Dog.o Sealion.o Petshow.o
	$(CXX) $(CXXFLAGS) -o PetCompetition main.o Dog.o Sealion.o Petshow.o

# The main.o target can be written more simply

main.o: main.cpp Dog.h Sealion.h Petshow.h

Dog.o: Dog.h

Sealion.o: Sealion.h

Petshow.o: Petshow.h Dog.h Sealion.h
