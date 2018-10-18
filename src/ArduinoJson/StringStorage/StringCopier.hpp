// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2018
// MIT License

#pragma once

#include "../Memory/StringBuilder.hpp"

namespace ARDUINOJSON_NAMESPACE {

template <typename TMemoryPool>
class StringCopier {
 public:
  typedef ARDUINOJSON_NAMESPACE::StringBuilder StringBuilder;

  StringCopier(TMemoryPool& memoryPool) : _memoryPool(&memoryPool) {}

  StringBuilder startString() {
    return _memoryPool->startString();
  }

 private:
  TMemoryPool* _memoryPool;
};
}  // namespace ARDUINOJSON_NAMESPACE
