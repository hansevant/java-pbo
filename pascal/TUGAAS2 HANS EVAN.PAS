program repeat_until_by_HansEvanTatipata;
uses crt;
var
 n: integer;

   begin
   clrscr;
       n:=0;
       writeln ('membuat deret angka bilangan genap sampai 100');
       writeln;
   repeat
    begin
        if ( n mod 2 = 0) then write ( n :3);
        n:=n+1;
   end;
   until n>100;
   readln;
end.
