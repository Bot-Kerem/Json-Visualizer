#include <vson.h>

#include <iostream>

#include <imgui.h>

void ShowWindow(nlohmann::json& json)
{
    for (auto& [key, val] : json.items())
        {
            
            ImGui::Begin(key.c_str());
            ImGui::Text(val.dump().c_str());
            ImGui::End();
        if(val.size() > 1)
            ShowWindow(val);
        }
}

namespace vson
{
    Visualizer::Visualizer(std::string_view data)
    {
        json = nlohmann::json::parse(data);
    }

    void Visualizer::Visualize()
    {
        ShowWindow(json);
    }
} // namespace vson
