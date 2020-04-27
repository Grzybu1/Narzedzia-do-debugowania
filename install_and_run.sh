sudo docker build --tag test .
sudo docker run --rm -it --cap-add=SYS_PTRACE --security-opt seccomp=unconfined --privileged test
