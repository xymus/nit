all: fr
	mkdir -p bin/
	nitc --dir bin/ src/opportunity_web.nit

fr:
	make -C src/templates/languages/fr/LC_MESSAGES/

clean:
	rm -rf -- ./bin ./src/templates/languages/*.pot
	$(MAKE) -C ./src/templates/languages/fr/LC_MESSAGES/ clean
