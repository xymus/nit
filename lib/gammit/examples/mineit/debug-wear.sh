nitc --dir bin/ src/android_wear_remote.nit || exit 1
adb -s TA176061LP install -r bin/android_wear_remote.apk || exit 1
#adb -s TA176061LP logcat
