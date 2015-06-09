# php5-ext-template

This is a template repository which gives you a skeleton for building a simple PHP5 extension.

It's based on those 3 great blog entries:

* [Extension Writing Part I](http://devzone.zend.com/303/extension-writing-part-i-introduction-to-php-and-zend/)
* [Extension Writing Part II](http://devzone.zend.com/317/extension-writing-part-ii-parameters-arrays-and-zvals/)
* [Extension Writing Part III](http://devzone.zend.com/446/extension-writing-part-iii-resources/)

## Things to replace

There are some things you have to replace in the template file:

`ext_name` and `EXT_NAME` strings in file content and file names should be replaced by the extension name either in lower or upper case.

Pay attention to the `_` in `EXT_NAME` **don't** replace any occurrences of `EXTNAME` (without the underscore).

## Compile the extension

It's the easiest if you store the extension project in `/path/to/php/ext/ext-name`. Then you can do in your extension dir:

* `../../bin/phpize`
* `./configure --enable-ext_name`
* `make` (or `make clean all`)
* `cp ./module/ext_name.so /path/to/php/lib/php/extension/no-debug...`
* In `php.ini` add `extension=ext_name.so`