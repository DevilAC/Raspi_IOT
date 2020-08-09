Raspi_IOT:raspi_subscribe.o led.o
	gcc -Wall raspi_subscribe.o led.o -o Raspi_IOT -lpaho-mqtt3c -lwiringPi

raspi_subscribe.o:raspi_subscribe.c
	gcc -Wall -c raspi_subscribe.c -o raspi_subscribe.o
	
led.o:led.c
	gcc -Wall -c led.c -o led.o	
clean:
	rm -rf *.o
