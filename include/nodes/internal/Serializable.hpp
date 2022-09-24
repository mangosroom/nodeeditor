#pragma once

#include <QtCore/QJsonObject>
#include "json.hpp" //nlohmann_json

using json = nlohmann::json;

namespace QtNodes
{


class Serializable
{
public:

  virtual
  ~Serializable() = default;

  virtual
  QJsonObject
  save() const = 0;

  virtual json ToJson() const = 0;

  virtual void
  restore(QJsonObject const & /*p*/) {}

  virtual void FromJson(json const &/*p*/) {}
};
}
