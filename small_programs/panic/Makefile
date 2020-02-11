obj-m += panic.o

all:
	make -C /home/nanker/Embedded/buildroot/output/build/linux-v4.9.13 \
		M=$(PWD) ARCH=arm \
		CROSS_COMPILE=/home/nanker/Embedded/buildroot/output/host/bin/arm-linux-gnueabihf- modules
clean:
	rm -rf *.o *.ko