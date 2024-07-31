AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = aztec
aztec_SOURCES = main.cpp Aztec.cpp Aztec.h
pkginclude_HEADERS = Aztec.h
dist_man_MANS = aztec.1
nobase_dist_pkgdata_DATA = data/data.txt

SUBDIRS = tests

.PHONY: deb debug

CTRLF_DIR=$(CURDIR)/deb/DEBIAN
CTRLF_NAME=$(CTRLF_DIR)/control


deb:
	mkdir -p $(CTRLF_DIR)
	echo Package: $(PACKAGE) > $(CTRLF_NAME)
	echo Version: $(VERSION) >> $(CTRLF_NAME)
	echo Architecture: all >> $(CTRLF_NAME)
	echo Maintainer: $(PACKAGE_BUGREPORT) >> $(CTRLF_NAME)
	read -p "Enter package description: " PACKAGE_DESCR ;  \
	echo Description: $$PACKAGE_DESCR >> $(CTRLF_NAME)
	make DESTDIR=$(CURDIR)/deb install


debug:
	$(foreach v, $(.VARIABLES), $(info $(v)=$($(v))))

uninstall-hook:
	rm -d $(DESTDIR)$(datarootdir)/$(PACKAGE)/data
	rm -d $(DESTDIR)$(datarootdir)/$(PACKAGE)

