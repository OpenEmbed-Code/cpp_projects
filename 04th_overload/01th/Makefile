main:main.o
	g++ -o $@ $^
%.o:%.cpp
	g++ -c -o $@ $<
	
clean:
	rm -rf  *.o  main