FROM gitpod/workspace-full

USER gitpod

# Install custom tools, runtime, etc. using apt-get
# For example, the command below would install "bastet" - a command line tetris clone:
#
# RUN sudo apt-get -q update && \
#     sudo apt-get install -yq bastet && \
#     sudo rm -rf /var/lib/apt/lists/*
#
# More information: https://www.gitpod.io/docs/config-docker/
RUN sudo apt-get update -q ; \
    sudo wget https://www.lua.org/ftp/lua-5.4.1.tar.gz && tar xvf lua-5.4.1.tar.gz && cd lua-5.4.1 && make -j && sudo make install
