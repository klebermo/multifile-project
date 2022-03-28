all: libtwo

libtwo: ${obj_dir}/libtwo.o
	g++ -shared -o ${release_dir}/libtwo.so ${obj_dir}/libtwo.o -Wl,--out-implib,${release_dir}/libtwo.a

${obj_dir}/libtwo.o: src/libtwo.cpp
	g++ -fPIC -c src/libtwo.cpp -o ${obj_dir}/libtwo.o
