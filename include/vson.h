#ifndef VSON_H
#define VSON_H

#include <string_view>
#include <nlohmann/json.hpp>

namespace vson
{
    class Visualizer
    {
        nlohmann::json json;
        public:
            Visualizer(std::string_view data);
            void Visualize();
    }; // class Visualizer
} // namespace vson

#endif