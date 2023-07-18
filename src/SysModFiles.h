#pragma once
#include "Module.h"
#include "LittleFS.h"

class SysModFiles:public Module {

public:

  static bool filesChanged;

  SysModFiles();
  void setup();
  void loop();

  // void handleUpload(AsyncWebServerRequest *request, const String& filename, size_t index, uint8_t *data, size_t len, bool final);

  bool remove(const char * path);

  size_t usedBytes();

  size_t totalBytes();

  File open(const char * path, const char * mode, const bool create = false);

  static void dirToJson(JsonArray array);
  static void dirToJson2(JsonArray array);

};

static SysModFiles *files;