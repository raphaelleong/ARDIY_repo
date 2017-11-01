#! /bin/sh

project="ARDIY"

echo "Attempting to build $project"

/Applications/Unity/Unity.app/Contents/MacOS/Unity
  -batchmode
  -nographics
  -logFile $(pwd)/unity.log
  -projectPath $(pwd)
  -executeMethod Autobuilder.PerformiOSBuild
  -quit

echo 'Logs from build'
cat $(pwd)/unity.log

echo 'Attempting to compress builds'
zip -r $(pwd)/Build/iOS.zip $(pwd)/Build/iOS
