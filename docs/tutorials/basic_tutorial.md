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

<!-- TODO: @hans4809 @clairhardt98 여기 TODO부분 지우고 설명을 채워주시면 될 것 같습니다. 한국어로 적어도 딱히 상관 없을 듯 합니다. -->

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
>         <td>강의 물을 표현하는데 사용되는 머티리얼입니다. WaterBodyRiver액터에 적용됩니다.</td>
>       </tr>
>       <tr>
>         <td>River Water Static Mesh Material</td>
>         <td>강의 물을 표현하는데 사용되는 스태틱 메시의 머티리얼입니다. WaterBodyRiver액터에 적용됩니다.</td>
>       </tr>
>       <tr>
>         <td>River To Lake Transition Material</td>
>         <td>강이 WaterBodyLake 액터와 오버랩될 때 적용되는 머티리얼입니다. WaterBodyRiver액터에 적용됩니다. </td>
>       </tr>
>       <tr>
>         <td>River To Ocean Transition Material</td>
>         <td>강이 WaterBodyOcean 액터와 오버랩될 때 적용되는 머티리얼입니다. WaterBodyRiver액터에 적용됩니다.</td>
>       </tr>
>     </tbody>
>   </table>
> </details>

#### 3.2 Set PCG Settings

이 단계에서는 PCG(Procedural Content Generation) 설정을 구성합니다. PCG 설정은 레벨의 생성 방식과 관련된 다양한 옵션을 제공합니다. OCG 창에서 PCG Settings 탭을 선택하고, 필요한 설정을 조정합니다.

##### Biome Settings
![PCG Settings Tab](/assets/images/tutorials/basic_tutorial/biome_settings.png)

| Setting Name   | Description                                                                                                                     |
| -------------- | ------------------------------------------------------------------------------------------------------------------------------- |
| Biome Name     | The name of the biome. This is used to identify the biome in the system.                                                        |
| Temperature    | The temperature of the biome, which can affect the types of vegetation and terrain features generated.                          |
| Humidity       | The humidity level of the biome, influencing water features and vegetation density.                                             |
| Weight         | The weight of the biome in the overall generation process. Higher weights increase the likelihood of this biome being selected. |
| Mountain Ratio | The ratio of mountains in the biome, affecting the terrain's elevation and features.                                            |

{: .warning }
> Landscape Material의 Landscape Layer Blend의 **Layer 순서와 Biome의 순서가 일치해야**, PCG가 **올바른 영역에 Mesh를 Spawn**할 수 있게 됩니다.
> 예를 들어, Landscape Material의 Layer 순서가 `Grass`, `Forest`, `Mountain`이라면, Biome의 순서도 **동일하게** `Grass`, `Forest`, `Mountain`이어야 합니다.

##### Hierarchy Data Settings
![Hierarchy Data Settings](/assets/images/tutorials/basic_tutorial/hierarchy_data_settings.png)

| Setting Name                   | Description                                                                                                                                                                                                                                              |
| ------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Biome Name                     | Biome의 이름입니다. 이 이름은 시스템에서 Biome을 식별하는 데 사용됩니다.                                                                                                                                                                                 |
| Selected Landscape Layer Name  | 선택된 Landscape Layer의 이름입니다. 이 Layer에 Biome이 적용됩니다. <br> 만약 `None`일 경우 Biome Name이 잘못되었거나, Landscape Material을 설정하지 않은 경우입니다.                                                                                    |
| Blendig Ratio                  | Biome의 블렌딩 비율입니다. 이 값은 Biome과 Biome 사이 경계를 얼마나 부드럽게 할지를 결정합니다. <br> 0.0은 경계가 뚜렷하고, 1.0은 완전히 블렌딩됩니다.                                                                                                   |
| Points Per Square Meter        | Biome의 Mesh가 Spawn되는 영역의 크기를 결정합니다. <br> 이 값은 Biome의 Mesh가 얼마나 세밀하게 Spawn될지를 결정합니다. <br> 예를 들어, 10이면 1제곱미터당 10개의 포인트가 생성됩니다.                                                                    |
| Looseness                      | Biome의 Mesh가 Spawn되는 영역의 느슨함을 결정합니다.                                                                                                                                                                                                     |
| Point Extents                  | Mesh가 Spawn될 영역의 크기를 결정합니다. <br> 이 값은 Point의 개수 계산에 영향을 미치며, Mesh가 Spawn될 영역의 크기를 결정합니다. <br> 예를 들어, 100이면 100x100 제곱미터의 영역에 Mesh가 Spawn됩니다.                                                  |
| Point Steepness                | Mesh가 Spawn될 때, 다른 Point와 얼만큼 떨어질 지 결정합니다. <br> 이 값이 높을수록 Mesh가 더 멀리 떨어져 Spawn됩니다.                                                                                                                                    |
| Slope Limits                   | Mesh가 Spawn될 수 있는 경사의 범위를 결정합니다. <br> 예를 들어, Min Angle이 0°이고 Max Angle이 45°이면, 0°에서 45° 사이의 경사에서만 Mesh가 Spawn됩니다.                                                                                                |
| Transform Point                | Point의 Transform을 결정합니다. <br> 이 값은 Mesh가 Spawn될 때, Mesh의 위치, 회전, 크기를 결정합니다.                                                                                                                                                    |
| Pruning Overlapped Points      | Overlapped Points를 제거할지 여부를 결정합니다.                                                                                                                                                                                                          |
| WPO Disable Distance           | WPO(World Position Offset)를 비활성화할 거리를 결정합니다. <br> 이 값은 Mesh가 Spawn될 때, WPO가 적용되지 않는 거리를 결정합니다. <br> 예를 들어, 1000이면 1000미터 이상 떨어진 곳에서는 WPO가 적용되지 않습니다.                                        |
| Start Cull Distance            | Start Cull Distance를 설정합니다.                                                                                                                                                                                                                        |
| End Cull Distance              | End Cull Distance를 설정합니다. <br> 이 값은 Mesh가 Spawn된 후, 얼마나 멀리 떨어진 곳에서 Cull되는지를 결정합니다. <br> 예를 들어, Start Cull Distance가 1000이고 End Cull Distance가 2000이면, 1000미터 이상 떨어진 곳에서는 Mesh가 보이지 않게 됩니다. |
| Affect Distance Field Lighting | Distance Field Lighting에 영향을 줄지 여부를 결정합니다. <br> 이 값을 활성화하면, Mesh가 Distance Field Lighting에 영향을 미치게 됩니다. <br> 이 값은 성능에 영향을 줄 수 있으므로, 필요할 때만 활성화하는 것이 좋습니다.                                |
| Execute on GPU                 | GPU에서 실행할지 여부를 결정합니다. <br> 이 값을 활성화하면, Mesh가 GPU에서 생성됩니다.                                                                                                                                                                  |
| Seed                           | 랜덤 시드를 설정합니다. <br> 이 값은 Biome의 Mesh가 Spawn될 때, 랜덤성을 결정합니다. <br> 동일한 Seed를 사용하면, 동일한 결과를 얻을 수 있습니다.                                                                                                        |
| Meshes                         | Spawn할 Mesh를 선택합니다. <br> 이 값은 Biome의 Mesh가 Spawn될 때, 사용할 Mesh를 결정합니다. <br> 여러 개의 Mesh를 선택할 수 있으며, 랜덤하게 선택됩니다.                                                                                                |
| Point Debug Color              | Point의 디버그 색상을 설정합니다. <br> 이 값은 Point가 Spawn될 때, 디버그 색상을 결정합니다. <br> 이 값을 사용하면, Point의 위치를 시각적으로 확인할 수 있습니다.                                                                                        |

#### 3.3 Set River Settings
