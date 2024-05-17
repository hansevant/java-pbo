program Jumlah_Total;

uses crt;

type
banyakdatadiinput=array[1..5] of integer;

var

datadata:banyakdatadiinput;

banyakdata,b:integer;

begin

clrscr;

b:=0;

writeln('******Contoh Program Pascal******');

writeln('**Menghitung jumlah data yang diinput**');

for banyakdata :=1 to 5 do

begin

write('Data ',banyakdata,' = ');readln(datadata[banyakdata]);

b:=b+datadata[banyakdata];
end;

writeln('Jumlah nilai:',b);
readln;

end.
