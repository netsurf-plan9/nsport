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

There are two variants of NetSurf available on 9front, the framebuffer and the native frontend.  
Start by building the framebuffer frontend:
```sh
% cd nsport
% mk
```
To build the native frontend and after building the framebuffer:
```sh
% cd netsurf
% mk -f mkfile.native
```

# Installing

To install NetSurf system-wide:
```sh
% cd netsurf
% mk install                    # framebuffer
% mk -f mkfile.native install   # native
```

# Running

First, make sure `webfs` is running then run your frontend of choice
```sh
% nsfb      # framebuffer
% netsurf   # native
```
If you did not install NetSurf system-wide you can run it from within the `netsurf` directory:
```sh
% mk 9res     # only required the first time
% prepns      # binds '9res' over /sys/lib/netsurf
% *.nsfb      # framebuffer
% *.netsurf   # native
```

# Credits

- Jonas Amoson (@jamoson)
- Ori Bernstein (@oridb)
- Kyle Nusbaum (@knusbaum)
- Philippe (@telephil9)
