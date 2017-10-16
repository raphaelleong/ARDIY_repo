#! /bin/sh

project="ARDIY"

cd ARDIY

echo "Attempting to build $project for OS X"
/Applications/Unity/Unity.app/Contents/MacOS/Unity
  -batchmode
  -nographics
  -silent-crashes
  -logFile $(pwd)/unity.log
  -projectPath $(pwd)
  -buildOSXUniversalPlayer "$(pwd)/Build/osx/$project.app"
  -quit

#echo "Attempting to build $project for iOS"
#/Applications/Unity/Unity.app/Contents/
#  -batchmode
#  -nographics
#  -silent-crashes
#  -logFile $(pwd)/unity.log
#  -projectPath $(pwd)
#  -build
#  -quit

echo 'Logs from build'
cat $(pwd)/unity.log

echo 'Attempting to compress builds'
#zip -r $(pwd)/Build/ios.zip $(pwd)/Build/ios
zip -r $(pwd)/Build/mac.zip $(pwd)/Build/osx/
