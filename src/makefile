heapOfStudents: student.o address.o date.o main.o 
	g++ -g student.o address.o date.o main.o -o heapOfStudents

main.o: student.o address.o date.o main.cpp
	g++ -c -g main.cpp

student.o: address.h date.h student.h student.cpp
	g++ -c -g student.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

clean:
	rm *.o
	rm heapOfStudents
	rm fullReport.txt
	rm shortReport.txt

run: heapOfStudents
	./heapOfStudents

debug: heapOfStudents
	gdb heapOfStudents

valgrind: heapOfStudents
	valgrind --leak-check=full ./heapOfStudents