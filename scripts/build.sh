#! /bin/sh

project="ARDIY"

echo "Attempting to build $project"

/Applications/Unity/Unity.app/Contents/MacOS/Unity
  -batchmode
  -nographics
  -silent-crashes
  -logFile $(pwd)/unity.log
  -projectPath $(pwd)
  -executeMethod Autobuilder.PerformiOSBuild
  -quit

echo 'Logs from build'
cat $(pwd)/unity.log

echo 'Attempting to compress builds'
ls 

#zip -r $(pwd)/Build/ios.zip $(pwd)/Build/ios
#zip -r $(pwd)/Build/mac.zip $(pwd)/Build/osx/
