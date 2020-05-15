const fs = require('fs');
const path = require('path');

(async () => {
  const folders = fs.readdirSync(__dirname, { withFileTypes: true });

  for (const folder of folders) {
    const isDir = folder.isDirectory();

    if (isDir) {
      fs.symlinkSync(path.join(__dirname, folder.name), path.join('P:', folder.name), 'junction');
    }
  }
})();
