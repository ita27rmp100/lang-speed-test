n = 1000
const {performance} = require("perf_hooks")
let start = performance.now()
for (let i=0;i<=n;i++) {
    console.log(i)
}
let end = performance.now()

console.log(`Execution time: ${(end-start)/1000}`)