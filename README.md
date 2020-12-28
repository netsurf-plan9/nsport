# About

This is a port of the [Netsurf Browser](http://netsurf-browser.org)
to the Plan 9 ([9front](http://9front.org)) operating system.

This is work in progress, help is welcome.

# Dependencies

NetSurf depends on the following external libraries:
- zlib
- libpng
- libjpeg

These libraries can be found in 9front port system.
To install these dependencies:
```
% hg clone http://code.9front.org/hg/ports /sys/ports
% cd /sys/ports/ape-libs/zlib
% mk
```
Repeat step 2 and 3 with libpng and libjpeg.

In addition, ensure that your system is up to date (see [FQA#5](http://fqa.9front.org/fqa5.html#5.2)) as patches to the system are sometimes required to help with porting NetSurf.

# Getting the sources

All sources can be retrieved using the [git9](https://git.sr.ht/~ori/git9) client.

To retrieve all the sources, you will have to clone the `nsport` repository and then use the `fetch` script to clone the remaining repositories:
```sh
% git/clone git://github.com/netsurf-plan9/nsport
% cd nsport
% fetch clone git
```
To update your copy of the sources:
```sh
% cd nsport
% fetch pull
```

*Note*: if you have a Github account and have registered your public SSH key on Github, you can clone the repositories using the git+ssh protocol (git+ssh://git@github.com/netsurf-plan9/nsport).

# Building

To build Netsurf, go to the directory nsport and run `mk`:
```sh
% cd nsport
% mk
```

# Installing

To install NetSurf system-wide:
```sh
% cd netsurf
% mk install
```

# Running

First, make sure `webfs` is running then execute the netsurf binary:
```sh
% netsurf
```
If you did not install NetSurf system-wide you can run it from within the `netsurf` directory:
```sh
% mk 9res     # only required the first time
% prepns      # binds '9res' over /sys/lib/netsurf
% *.netsurf   # runs the binary you compiled (e.g. for your architecture [568])
```

# Credits

- phil9 (@telephil9)
- Jonas Amoson (@jamoson)
- Ori Bernstein (@oridb)
- Sigrid (@ftrvxmtrx)
- Kyle Nusbaum (@knusbaum)
