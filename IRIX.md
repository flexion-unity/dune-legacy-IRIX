# build on IRIX (with SGUG-RSE)

$ autoreconf --install
$ mkdir build && cd build
$ ../configure --prefix=/usr/sgug
$ make

or make -j4 if you have 4 CPUs, because this will take a while to compile!
