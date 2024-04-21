FROM intel/oneapi-runtime

RUN apt update
RUN wget https://github.com/gottingen/flare/releases/download/v1.0.3/flare-1.0.3-deb-x86_64.sh
RUN chmod +x flare-1.0.3-deb-x86_64.sh && ./flare-1.0.3-deb-x86_64.sh --prefix=/opt/EA/flare -e
