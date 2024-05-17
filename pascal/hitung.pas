Program HitungNlai;
uses crt;
label atas;
var
nil1, nil2 : integer;
nilrata : real;
lagi : char;
begin
atas:
clrscr;
writeln(Program Hitung nilai');
writeln('-------------------');
writeln;
writeln('Masukan nilai 1 : ');
readln(Nil1); 
writeln('Masukan nilai 2 : ');
readln*nil2);
nilrata := (nilai1 + nilai2)/2;
writeln('nilai rata-rata :',Nilrata:5:2);
writeln;
write(' ingin hitung lagi [Y/T] : ' );
readln(lagi);
if (lagi='y') then
goto atas;
end.