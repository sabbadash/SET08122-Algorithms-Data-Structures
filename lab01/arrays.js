console.time('Execution Time');
const grades = [84.8, 67.0, 75.4, 68.4, 67.7, 69.4];
const updatedGrades = new Array(grades.length + 3);

for (let i = 0; i < grades.length; i++) {
    updatedGrades[i] = grades[i];
}

console.log(updatedGrades);

console.timeEnd('Execution Time');