FROM python:3.8-buster
ENV LC_CTYPE C.UTF-8

RUN apt-get update \
    && apt-get install -y socat \
    && pip3 install pycryptodome \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /home/ctf/
ADD source.py /home/ctf/source.py

RUN chmod 555 source.py
RUN useradd -s /bin/bash ctf

USER ctf
EXPOSE 1337
CMD socat TCP-LISTEN:1337,reuseaddr,fork EXEC:"/usr/local/bin/python3 /home/ctf/source.py",stderr,pty,ctty,rawer