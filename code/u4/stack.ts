const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});


interface Cons {
  data: number;
  next: Cons | null;
}

async function test() {
  let len = await getInput()
  console.log(len);
}

async function getInput() {
  return await new Promise(resolve => {
    readline.question('', (length: number) => {
      readline.close();
      return resolve(length);
    })
  });
}

test();
