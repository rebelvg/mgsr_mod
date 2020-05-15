const fs = require('fs');
const path = require('path');

(async () => {
  const addonsFolder = path.join(__dirname, 'addons');

  const folders = fs.readdirSync(addonsFolder, { withFileTypes: true });

  for (const folder of folders) {
    const isDir = folder.isDirectory();

    if (isDir) {
      try {
        fs.symlinkSync(path.join(addonsFolder, folder.name), path.join('P:', folder.name), 'junction');
      } catch (error) {
        console.error(error.message);
      }
    }
  }
})();
