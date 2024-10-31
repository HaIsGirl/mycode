//<ten_bien> = <value>
let a = 3;
//<var 1> = <var 2> = <var 3> = ... = <value>
let b,c,d
b = c = d = 4;

//[var 1, var 2, var 3,...,var n] = [data1,data2,data3,...,data_n]
[b,c,d] = [1,2,3];

//Toan tu logic (Giong C++)
console.log(5 < 6);
console.log(5 <= 6);
console.log(5 > 6);
console.log(5 >= 6);
console.log(5 == 5);
console.log(5 != 6);

//Toan tu === (so sanh bang nghiem ngat), true khi gia tri bang nhau, cung kieu du lieu
//Toan tu !== (so sanh khong bang nghiem ngat), true khi gia tri khac nhau or khac kieu du lieu
console.log(5 === "5"); //false
console.log(5 === 5); //true
console.log(6 !== "6"); //true
console.log(6!==6); //false 