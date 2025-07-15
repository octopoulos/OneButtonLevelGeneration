---
title: OCG Basic Usage Tutorial
description: A step-by-step guide to using the One-Click Level Generator plugin.
layout: default
parent: Tutorials
nav_order: 1
---

# One-Click Level Generator Tutorial


## Basic Usage

### 1. Create a New Level

File > New Level(Ctrl+N)을 선택한 뒤, 새로운 빈 레벨을 생성합니다.

![New Level Select Image](/assets/images/tutorials/basic_tutorial/new_level_select.png)

### 2. Open the One-Click Level Generator

Window > OCG Tools > OCG Window를 선택하여 OCG 창을 엽니다.

![Open OCG Window](/assets/images/tutorials/basic_tutorial/open_ocg_window.png)

이후 OCG 창에서 Create Level Generator 버튼을 클릭하여 레벨 생성기를 월드에 추가합니다.

![Create Level Generator Button](/assets/images/tutorials/basic_tutorial/create_level_generator.png)

OCG 창에서 `ㅤ+ㅤ` 버튼을 클릭후, 새로운 Map Preset 저장합니다.

![Add Map Preset Button](/assets/images/tutorials/basic_tutorial/add_map_preset.png)

### 3. Configure the Map Preset

#### 3.1 Set World Settings

이 단계에서는 월드 설정을 구성합니다. 월드 설정은 레벨의 기본적인 환경과 속성을 정의합니다. OCG 창에서 World Settings 탭을 선택하고, 필요한 설정을 조정합니다.

![World Settings Tab](/assets/images/tutorials/basic_tutorial/world_settings_tab.png)

<!-- TODO: @hsfzh 여기 TODO부분 지우고 설명을 채워주시면 될 것 같습니다. 한국어로 적어도 딱히 상관 없을 듯 합니다. -->

> 각 설정에 대한 자세한 설명은 아래와 같습니다.
> <details>
>   <summary>Landscape Settings</summary>
>   <table>
>     <thead>
>       <tr>
>         <th>Setting Name</th>
>         <th>Description</th>
>       </tr>
>     </thead>
>     <tbody>
>       <tr>
>         <td>Landscape Region Kilometer</td>
>         <td>TODO</td>
>       </tr>
>       <tr>
>         <td>World Partition Grid Size</td>
>         <td>TODO</td>
>       </tr>
>       <tr>
>         <td>World Partition Region Size</td>
>         <td>TODO</td>
>       </tr>
>       <tr>
>         <td>Landscape Scale</td>
>         <td>Controls the size of the landscape by adjusting the Landscape Actor's scale.</td>
>       </tr>
>       <tr>
>         <td>Apply Scale To Noise</td>
>         <td>When enabled, modifying the LandscapeScale will also alter the terrain's shape.</td>
>       </tr>
>       <tr>
>         <td>Biome Blend Radius</td>
>         <td>Sets the blending radius in pixels between different biomes.</td>
>       </tr>
>       <tr>
>         <td>Water Blend Radius</td>
>         <td>Sets the blending radius in pixels between water and other biomes.</td>
>       </tr>
>       <tr>
>         <td>Landscape Quads Per Section</td>
>         <td>Specifies the number of quads per landscape section, which is the base unit for LOD transitions.</td>
>       </tr>
>       <tr>
>         <td>Landscape Sections Per Component</td>
>         <td>Defines the number of sections per landscape component. This, combined with the section size, determines the overall size of a component, the base unit for rendering and culling.</td>
>       </tr>
>       <tr>
>         <td>Landscape Component Count</td>
>         <td>Sets the number of components in the X and Y axes, which defines the total size of the landscape.</td>
>       </tr>
>       <tr>
>         <td>Map Resolution</td>
>         <td>The resolution of the landscape and its associated generation maps in the X and Y directions.</td>
>       </tr>
>       <tr>
>         <td>Landscape Material</td>
>         <td>The material to be applied to the landscape.</td>
>       </tr>
>     </tbody>
>   </table>
> </details>
> 
> <details>
>   <summary>Height</summary>
>   <table>
>     <thead>
>       <tr>
>         <th>Setting Name</th>
>         <th>Description</th>
>       </tr>
>     </thead>
>     <tbody>
>       <tr>
>         <td>Min Height</td>
>         <td>The minimum possible height for the landscape.</td>
>       </tr>
>       <tr>
>         <td>Max Height</td>
>         <td>The maximum possible height for the landscape.</td>
>       </tr>
>       <tr>
>         <td>Sea Level</td>
>         <td>Determines the sea level, ranging from 0 (minimum height) to 1 (maximum height).</td>
>       </tr>
>     </tbody>
>   </table>
> </details>
> 
> <details>
>   <summary>Temperature</summary>
>   <table>
>     <thead>
>       <tr>
>         <th>Setting Name</th>
>         <th>Description</th>
>       </tr>
>     </thead>
>     <tbody>
>       <tr>
>         <td>Min Temp</td>
>         <td>The minimum possible temperature for the landscape.</td>
>       </tr>
>       <tr>
>         <td>Max Temp</td>
>         <td>The maximum possible temperature for the landscape.</td>
>       </tr>
>     </tbody>
>   </table>
> </details>
> 
> <details>
>   <summary>Noise</summary>
>   <table>
>     <thead>
>       <tr>
>         <th>Setting Name</th>
>         <th>Description</th>
>       </tr>
>     </thead>
>     <tbody>
>       <tr>
>         <td>Continent Noise Scale</td>
>         <td>Controls the frequency of mountain generation.</td>
>       </tr>
>       <tr>
>         <td>Terrain Noise Scale</td>
>         <td>Controls the frequency of mountain generation.</td>
>       </tr>
>       <tr>
>         <td>Temperature Noise Scale</td>
>         <td>Controls how frequently the temperature changes across the landscape.</td>
>       </tr>
>     </tbody>
>   </table>
> </details>
> 
> <details>
>   <summary>River Settings</summary>
>   <table>
>     <thead>
>       <tr>
>         <th>Setting Name</th>
>         <th>Description</th>
>       </tr>
>     </thead>
>     <tbody>
>       <tr>
>         <td>Generate River</td>
>         <td>Enables river generation. If checked, additional river settings will become available.</td>
>       </tr>
>       <tr>
>         <td>River Count</td>
>         <td>The total number of rivers to generate.</td>
>       </tr>
>       <tr>
>         <td>River Source Elevation Ratio</td>
>         <td>Sets the river's starting elevation. A value of 1.0 starts the river at the highest point, while 0.5 starts it at the mid-height of the landscape.</td>
>       </tr>
>       <tr>
>         <td>River Spine Simplify Epsilon</td>
>         <td>Controls the simplification intensity for the river's path. A higher value results in a straighter path.</td>
>       </tr>
>       <tr>
>         <td>River Width Base Value</td>
>         <td>The base value for the river's width. The RiverWidthCurve is normalized and multiplied by this value to determine the final width.</td>
>       </tr>
>       <tr>
>         <td>River Depth Base Value</td>
>         <td>The base value for the river's depth. The RiverDepthCurve is normalized and multiplied by this value to determine the final depth.</td>
>       </tr>
>       <tr>
>         <td>River Velocity Base Value</td>
>         <td>The base value for the river's velocity. The RiverVelocityCurve is normalized and multiplied by this value to determine the final velocity.</td>
>       </tr>
>       <tr>
>         <td>River Width Min</td>
>         <td>The minimum width of the river. This value is added to the calculated width.</td>
>       </tr>
>       <tr>
>         <td>River Depth Min</td>
>         <td>The minimum depth of the river. This value is added to the calculated depth.</td>
>       </tr>
>       <tr>
>         <td>River Velocity Min</td>
>         <td>The minimum velocity of the river. This value is added to the calculated velocity.</td>
>       </tr>
>       <tr>
>         <td>River Width Curve</td>
>         <td>A curve that defines the river's width along its length. The X-axis is the distance from the source, and the Y-axis is the width.</td>
>       </tr>
>       <tr>
>         <td>River Depth Curve</td>
>         <td>A curve that defines the river's depth along its length. The X-axis is the distance from the source, and the Y-axis is the depth.</td>
>       </tr>
>       <tr>
>         <td>River Velocity Curve</td>
>         <td>A curve that defines the river's velocity along its length. The X-axis is the distance from the source, and the Y-axis is the velocity.</td>
>       </tr>
>       <tr>
>         <td>River Water Material</td>
>         <td>TODO</td>
>       </tr>
>       <tr>
>         <td>River Water Static Mesh Material</td>
>         <td>TODO</td>
>       </tr>
>       <tr>
>         <td>River To Lake Transition Material</td>
>         <td>TODO</td>
>       </tr>
>       <tr>
>         <td>River To Ocean Transition Material</td>
>         <td>TODO</td>
>       </tr>
>     </tbody>
>   </table>
> </details>

#### 3.2 Set PCG Settings

#### 3.3 Set River Settings
