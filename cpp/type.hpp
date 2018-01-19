#pragma once

#include "util.hpp"
#include <memory>
#include <unordered_map>
#include <variant>
#include <vector>

namespace rio {

struct EnumType;
struct NumberType;
struct StructType;
struct TypeParam;

using Type = std::variant<EnumType, StructType, NumberType, TypeParam>;

struct TypeBase {
  std::string name;
};

enum struct NumberKind {
  Float,
  Signed,
  Unsigned,
};

struct NumberType: TypeBase {

  NumberKind kind;

  USize nbits;

};

struct TypeParam: TypeBase {

  // Intersection. (TODO Generally elsewhere?)
  std::vector<Type*> constraints;

};

struct GenericType: TypeBase {

  // TODO Where do the types live?
  std::unordered_map<std::string, Type*> arg_map;

  std::vector<TypeParam> args;

  Opt<Type> generic;

  std::unordered_map<std::string, Type*> param_map;

  std::vector<TypeParam> params;

  std::vector<std::unique_ptr<Type*>> specifics;

};

// TODO Arbitrary sum/union types?
struct EnumType: GenericType {

  std::vector<Type*> cases;

};

struct StructType: GenericType {

  std::map<std::string, Type*> fields;

};

}
