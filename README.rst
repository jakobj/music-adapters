music-adapters
==============

A collection of adapters for the MUSIC libary.

Software dependencies
=====================

- CMake
- `MUSIC <https://github.com/INCF/MUSIC>`_
- OpenMPI
- pthread

Optional dependencies
=====================
- ZeroMQ
- Json-cpp
- GSL BLAS

Installation
============
.. code:: bash

  cmake -DCMAKE_INSTALL_PREFIX:PATH=<PREFIX> <music-adapters_SOURCE>
  make
  make install

If MUSIC is not found you can provide the MUSIC root path by specifying ``-DMUSIC_ROOT_DIR=<MUSIC_INSTALL_DIR>``.
