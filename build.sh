autoscan
aclocal;
autoheader;
rm -fr README NEWS AUTHORS ChangeLog
touch README NEWS AUTHORS ChangeLog
autoconf;
automake --add-missing;
./configure;
 make; 
