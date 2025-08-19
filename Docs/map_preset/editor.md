---
layout: default
title: MapPreset Editor
parent: MapPreset
nav_order: 6
---

# MapPreset Editor

This section covers the custom editor for **MapPreset** data assets.

You can also create a MapPreset asset by right-clicking in the Content Drawer and selecting **OCG > MapPreset**.

![Create New Map Preset]({{ site.baseurl }}/assets/images/map_preset/map_preset_editor/create_new_map_preset.png)

Double-clicking on a MapPreset asset will open the custom editor window, where you can edit the MapPreset.

![mapPresetEditor]({{ site.baseurl }}/assets/images/map_preset/map_preset_editor/mapPresetEditor.png)

- **Preview Maps**: Displays a green wireframe preview of the Landscape generated from the `.png` specified in the *HeightMap File Path*, and saves the HeightMap along with other maps as `.png` files under `Contents/Maps`.  
  - If no HeightMap File Path is provided, a green wireframe preview of the Landscape will be generated based on the current *Seed* value instead.  

- **Generate**: Creates a new level in the editor viewport based on the MapPreset asset.  

- **Export to Level**: Exports the current viewport’s level to a `.umap` file.  
  - Exported levels do not support level streaming by default, but you can open the level and use **Tools > Convert Level** to convert it into a streaming-compatible level.  
  - Even in an exported level, you can always open the **OCG Window** to continue editing the MapPreset asset.  

- **Force Generate PCG**: Forces a regeneration of the PCG.  

- **Regenerate River**: Removes the existing River and regenerates a new one on the current Landscape based on the settings in *River Setting*.  
  - Note that if you had modified Landscape weights that were previously affected by the River, those changes will be lost.  

You can toggle tabs on and off from the **Windows** dropdown menu at the top of the custom editor.  

![MapPreset Editor Window]({{ site.baseurl }}/assets/images/map_preset/map_preset_editor/map_preset_editor_window.png)
