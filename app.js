console.time("Execution Time");

let i = 0;
do {
    console.log("%i\n", i);
    i++;
} while (i < 10000);

console.timeEnd("Execution Time");
