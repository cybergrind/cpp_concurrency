
CPP=clang++ -std=c++17 -pthread

run_rvalues: rvalues.out
	./rvalues.out

rvalues.out: rvalues.cpp
	$(CPP) rvalues.cpp -o rvalues.out

run_nodetach: nodetach.out
	./nodetach.out

nodetach.out: nodetach.cpp
	$(CPP) nodetach.cpp -o nodetach.out

run: launch.out
	./launch.out

launch.out: launch.cpp
	$(CPP) launch.cpp -o launch.out

clean:
	rm launch.out
