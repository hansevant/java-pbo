
program perulangan_for_to_do_by_HansEvanTatiapata;
uses crt;
var
   nama : string;
   ulang : integer;
begin
clrscr;
      write ('masukan nama anda :'); readln(nama);
      write ('Masukan Jumlah ulang:'); readln(ulang);
      for ulang := 1 to ulang DO
      begin
           write(nama);
           writeln(' perulangan ke - ',ulang);
      end;
      readln;
end.