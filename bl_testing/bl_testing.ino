// this code was made to test the transmission of data to node red via bluetooth 

#include <ArduinoBLE.h>

BLEService myService("fff0");

BLEStringCharacteristic myCharacteristic("f000aa02-0451-4000-b000-000000000000", BLEWrite | BLENotify, 20);
// Create a Bluetooth Low Energy (BLE) String Characteristic with the specified UUID
// UUID: "f000aa02-0451-4000-b000-000000000000"
// Properties: BLEWrite (allows write operations) | BLENotify (allows notifications)
// Maximum length of the string data: 20 characters


// Advertising parameters should have a global scope. Do NOT define them in 'setup' or in 'loop'
const uint8_t manufactData[4] = {0x01, 0x02, 0x03, 0x04};
const uint8_t serviceData[3] = {0x00, 0x01, 0x02};

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!BLE.begin()) {
    Serial.println("Failed to initialize BLE!");
    while (1);
  }

  myService.addCharacteristic(myCharacteristic);
  BLE.addService(myService);

  // Build scan response data packet
  BLEAdvertisingData scanData;
  // Set parameters for scan response packet
  scanData.setLocalName("Test enhanced advertising");
  // Copy set parameters into the actual scan response packet
  BLE.setScanResponseData(scanData);

  // Build advertising data packet
  BLEAdvertisingData advData;
  // Set parameters for advertising packet
  advData.setManufacturerData(0x004C, manufactData, sizeof(manufactData));
  advData.setAdvertisedService(myService);
  advData.setAdvertisedServiceData(0xfff0, serviceData, sizeof(serviceData));
  // Copy set parameters into the actual advertising packet
  BLE.setAdvertisingData(advData);

  BLE.advertise();
  Serial.println("Advertising...");
}

void loop() {
  BLE.poll();
  // Send "hello work" when a connection is established
  if (myCharacteristic.written()) {
    Serial.println("Received write request.");
    myCharacteristic.writeValue("hello work");
  }
}
