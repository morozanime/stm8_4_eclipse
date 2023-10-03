BEGIN {
	mask = 0;
}


/__IO_REG8_BIT([ \t]+)?\(.+\);/ {
	print "//" $0;

    	x = match($0, /\(.*\)/);
	params = substr($0, x + 1, RLENGTH - 2); 	
	n = split(params, a, /,[ \t]+/);

	print "unsigned char " a[1] "; //" a[2] " " a[3];
	print a[4] " " a[1] "_bit;";
	mask = 1;
}

/__IO_REG8([ \t]+)?\(.+\);/ {
	print "//" $0;

    	x = match($0, /\(.*\)/);
	params = substr($0, x + 1, RLENGTH - 2); 	
	n = split(params, a, /,[ \t]+/);

	print "unsigned char " a[1] "; //" a[2] " " a[3];
	mask = 1;
}

{
	if(mask == 0) {
		print;
	}
	mask  = 0;
}
