# Open Bugs

- [ ] Native frontend crashes when opening an inexistant URL (e.g. http://badaddress7.com)

- [ ] Some PNG images make netsurf crash on 386
	This can be reproduced with the netsurf download page (https://www.netsurf-browser.org/downloads/)
	Full trace: http://okturing.com/src/9184/body

- [ ] Some images are not rendered anymore following 3.11dev merge
	See file:///sys/lib/netsurf which does not show file/directory icons anymore
	This might be related to bug above

- [ ] Artefacts in images rendering in native frontend
	Rendering of images show some artefacts.
	This can be observed by comparing nsfb and netsurf with the file:///sys/lib/netsurf page

- [ ] Image scaling does not work in native frontend
	See images at bottom of http://9front.org

- [ ] HTML frames do not render properly in native frontend
	See https://webbkurs.ei.hv.se/~imjam/plan9/frames/frames.html

