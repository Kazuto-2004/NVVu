﻿create table SP(
masosp varchar(25) primary key,
ngaysx date not null,
lsp varchar(25)  foreign key references LoaiSP(maloaisp)
);
create table LoaiSP(
tenloai nvarchar (50) not null,
maloaisp varchar (25) primary key,
tn varchar (25) not null foreign key references NguoichiuTn(maso)
);
create table NguoichiuTN(
ten nvarchar(50) not null ,
maso varchar (25) primary key
);

insert into SP(masosp,ngaysx)
values ('Z37 111111','2009-12-12');
select * from SP;
insert into LoaiSP(tenloai,maloaisp)
values (N'Máy tính sách tay Z37','Z37E');

--6
select count (*) as sosp from LoaiSP;
select SP.masosp , LoaiSP.maloaisp , SP.ngaysx , LoaiSP.tenloai
from SP inner join LoaiSP on SP.masosp = LoaiSP.maloaisp;



 
                   








drop table SP;
drop table LoaiSP;
drop table NguoichiuTN;