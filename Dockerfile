FROM debian:latest

WORKDIR /usr/src/tmp

RUN apt-get update
RUN apt-get install git -y
RUN apt-get install g++ -y
RUN apt-get install gdb -y
RUN apt-get install wget -y
RUN cd /tmp
RUN wget https://github.com/mozilla/rr/releases/download/5.3.0/rr-5.3.0-Linux-$(uname -m).deb
RUN dpkg -i rr-5.3.0-Linux-$(uname -m).deb
RUN apt-get install binutils -y
RUN apt-get install nano -y

WORKDIR /usr/src/projekt
COPY . .
