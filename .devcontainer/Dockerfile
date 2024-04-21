FROM intel/oneapi-runtime

RUN wget https://github.com/gottingen/flare/releases/download/v1.0.3/flare-1.0.3-ubuntu-20.04-x86_64.deb
RUN dpkg -i flare-1.0.3-ubuntu-20.04-x86_64.deb
RUN apt update &&  apt install -f
RUN rm flare-1.0.3-ubuntu-20.04-x86_64.deb
