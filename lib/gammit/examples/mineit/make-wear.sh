adb forward tcp:4444 localabstract:/adb-hub
adb connect localhost:4444

nitc --dir bin/ src/android_wear_remote.nit || exit 1
adb -s localhost:4444 install -r bin/android_wear_remote.apk
adb -s localhost:4444 logcat
