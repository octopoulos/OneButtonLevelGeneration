---
layout: default
title: Ocean Settings Properties
parent: MapPreset
nav_order: 4
---

# Ocean Settings

이 섹션에서는 MapPreset 에셋으로 생성되는 레벨의 Ocean세팅에 대해 다룹니다.

## MapPreset 에셋이 레벨에 바다를 생성하는 과정
1. World Setting을 기반으로 지형을 생성하며 해수면 높이를 결정합니다.
2. 결정된 해수면 높이에 WaterBodyOcean을 생성하여 해당 해수면 높이 미만의 지형은 전부 물에 잠기게됩니다.

![mappreset_oceansetting](/assets/images/mappreset/oceansettings/mappreset_oceansetting.png)

| 속성                             | 설명                                                                                                                                    |
| -------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------- |
| **Contain Water**                | 이 MapPreset 에셋이 생성할 레벨에 바다를 포함할지에 대한 여부입니다.                                                                    |
| Ocean Water Material             | 바다를 표현할 머티리얼입니다. WaterBodyOcean에 적용됩니다.                                                                              |
| Ocean Water Static Mesh Material | 바다를 표현하는데 사용되는 Static Mesh에 적용되는 머티리얼입니다. WaterBodyOcean에 적용됩니다.                                          |
| Water HLODMaterial               | 물의 HLOD 표현에 사용되는 머티리얼입니다. River Settings에서 생성되는 강에도 적용됩니다. WaterBodyOcean 및 WaterBodyRiver에 적용됩니다. |
| Underwater Post Process Material | 물속 표현에 사용되는 머티리얼입니다. River Settings에서 생성되는 강에도 적용됩니다. WaterBodyOcean 및 WaterBodyRiver에 적용됩니다.      |
