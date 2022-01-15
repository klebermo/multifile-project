all: libone

libone: ${obj_dir}/libone.o
	g++ -shared -o ${release_dir}/libone.so ${obj_dir}/libone.o -Wl,--out-implib,${release_dir}/libone.a

${obj_dir}/libone.o: libone.cpp
	g++ -fPIC -c libone.cpp -o ${obj_dir}/libone.o
