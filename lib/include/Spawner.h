#ifndef CRAFTORIO_SPAWNER_H
#define CRAFTORIO_SPAWNER_H

#include <string>

class Spawner {
  enum Spawner_Types { Wood, Stone, Coal, Iron, Gold };

private:
  std::string spawner_name;
  Spawner_Types spawner_type;

public:
  Spawner(std::string name, Spawner_Types type);
};

#endif // CRAFTORIO_SPAWNER_H
