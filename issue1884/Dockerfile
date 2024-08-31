FROM ubuntu:latest

WORKDIR /build
RUN apt update && apt install g++ -y

COPY httplib.h .
COPY issue1884/main.cc .
RUN g++ -o test -I. main.cc

CMD ["./test"]
