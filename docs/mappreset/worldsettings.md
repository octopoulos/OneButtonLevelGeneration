---
layout: default
title: World Settings Properties
parent: MapPreset
nav_order: 2
---

# World Setting Properties

이 단계에서는 월드 설정을 구성합니다. 월드 설정은 레벨의 기본적인 환경과 속성을 정의합니다. OCG 창에서 World Settings 탭을 선택하고, 필요한 설정을 조정합니다.

## 1. Basic World Settings

![World Settings Tab](/assets/images/tutorials/basic_tutorial/world_settings_tab.png)

<!-- TODO: @hans4809 여기 TODO부분 지우고 설명을 채워주시면 될 것 같습니다. 한국어로 적어도 딱히 상관 없을 듯 합니다. -->

> 각 설정에 대한 자세한 설명은 아래와 같습니다.
> <details markdown="1">
>   <summary>Landscape Settings</summary>
> 
> | Setting Name                     | Description                                                                                                                                                                        |
> | -------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
> | Landscape Region Kilometer       | TODO                                                                                                                                                                               |
> | World Partition Grid Size        | TODO                                                                                                                                                                               |
> | World Partition Region Size      | TODO                                                                                                                                                                               |
> | Landscape Scale                  | Controls the size of the landscape by adjusting the Landscape Actor's scale.                                                                                                       |
> | Apply Scale To Noise             | When enabled, modifying the LandscapeScale will also alter the terrain's shape.                                                                                                    |
> | Biome Blend Radius               | Sets the blending radius in pixels between different biomes.                                                                                                                       |
> | Water Blend Radius               | Sets the blending radius in pixels between water and other biomes.                                                                                                                 |
> | Landscape Quads Per Section      | Specifies the number of quads per landscape section, which is the base unit for LOD transitions.                                                                                   |
> | Landscape Sections Per Component | Defines the number of sections per landscape component. This, combined with the section size, determines the overall size of a component, the base unit for rendering and culling. |
> | Landscape Component Count        | Sets the number of components in the X and Y axes, which defines the total size of the landscape.                                                                                  |
> | Map Resolution                   | The resolution of the landscape and its associated generation maps in the X and Y directions.                                                                                      |
> | Landscape Material               | The material to be applied to the landscape.                                                                                                                                       |
> 
> </details>
> 
> <details markdown="1">
>   <summary>Height</summary>
> 
> | Setting Name | Description                                                                      |
> | ------------ | -------------------------------------------------------------------------------- |
> | Min Height   | The minimum possible height for the landscape.                                   |
> | Max Height   | The maximum possible height for the landscape.                                   |
> | Sea Level    | Determines the sea level, ranging from 0 (minimum height) to 1 (maximum height). |
> 
> </details>
> 
> <details markdown="1">
>   <summary>Temperature</summary>
> 
> | Setting Name | Description                                         |
> | ------------ | --------------------------------------------------- |
> | Min Temp     | The minimum possible temperature for the landscape. |
> | Max Temp     | The maximum possible temperature for the landscape. |
> 
> </details>
> 
> <details markdown="1">
>   <summary>Noise</summary>
> 
> | Setting Name            | Description                                                           |
> | ----------------------- | --------------------------------------------------------------------- |
> | Continent Noise Scale   | Controls the frequency of mountain generation.                        |
> | Terrain Noise Scale     | Controls the frequency of mountain generation.                        |
> | Temperature Noise Scale | Controls how frequently the temperature changes across the landscape. |
> 
> </details>

## 2. Advanced World Settings
<!-- TODO: 여기 적기 -->
![Advanced World Settings Tab](/assets/images/tutorials/basic_tutorial/advanced_world_settings_tab.png)
