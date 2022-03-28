all: libone

libone: ${obj_dir}/libone.o
	g++ -shared -o ${release_dir}/libone.so ${obj_dir}/libone.o -Wl,--out-implib,${release_dir}/libone.a

${obj_dir}/libone.o: src/libone.cpp
	g++ -fPIC -c src/libone.cpp -o ${obj_dir}/libone.o
