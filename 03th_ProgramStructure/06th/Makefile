person:main.o person.o dog.o
#$@代表目标(person)  $^代表 所有的依赖(main.o person.o)
	g++ -o $@ $^
%.o:%.cpp
#-o 输出 $@目标(main.o person.o) $<第一个依赖(main.cpp person.cpp)
	g++ -c -o $@ $<
clean:
	rm -f *.o person
