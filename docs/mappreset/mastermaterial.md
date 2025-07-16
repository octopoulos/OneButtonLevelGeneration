---
layout: default
title: Landscape MasterMaterial
parent: MapPreset
nav_order: 5
---

# OCG Landscape Master Material
## 1. Layers
![BiomeToLayer](/assets/images/mappreset/mastermaterial/BiomeToLayer.png)

{: .warning }
> &emsp;Landscape Material의 Landscape Layer Blend의 **Layer 순서와 MapPreset의 Biome 순서가 일치해야 합니다.**<br>
> &emsp;예를 들어, Landscape Material의 Layer 순서가 `Grass`, `Forest`, `Mountain`이라면, Biome의 순서도 **동일하게** `Grass`, `Forest`, `Mountain`이어야 합니다.<br>
> &emsp;**Layer0**은 기본적으로 **Water Plugin의 Water Body Actor들이 위치하는 부분의 Ladscape의 구역**입니다.<br>

- 기본 제공 되는 Layer는 8개입니다. 각 Layer마다 하나의 Biome Material을 구성합니다.
  - Biomes의 순서대로 Layer1 ~ Layer7에 맞게 Material을 구성할 수 있습니다.

## 2.  MaterialInstance Parameter
![MaterialInstnaceParamsBoxing](/assets/images/mappreset/mastermaterial/MaterialInstnaceParamsBoxing.png)
- Material Instance에서 각 Layer들에 대한 Parameter들을 볼 수 있습니다.
- 각 Layer는 같은 로직의 MaterialLayer들을 사용합니다.

<details markdown="1">
  <summary><b style="font-size:1.25em;">All Layer Parameters</b></summary>

![AllLayerParams](/assets/images/mappreset/mastermaterial/AllLayerParams.png)

| Parameter Name            | Description                                                                                                                 |
| ------------------------- | --------------------------------------------------------------------------------------------------------------------------- |
| Random Tiling Scale       | Larger values result in broader, smoother pattern changes. Smaller values create finer, more detailed tiling patterns.      |
| Random Tiling Levels      | Higher values add more complex, multi-layered variation, reducing texture repetition and creating a natural look.           |
| RVT Base Exponent         | Exponent value to control contrast (gamma) in RVT Mip-based fade. Higher values make the edge sharper.                      |
| RVT Distance Scale        | Scales the distance for RVT Mip-based fade. Larger values widen the fade region.                                            |
| Blend Distance Transition | The distance over which the fade transitions from visible to invisible. Larger values create a smoother fade.               |
| Blend Distance Start      | The world-space distance at which the fade begins. The transition starts from this distance.                                |
| Use ORD                   | If you enable this option, you can use the ORD texture; otherwise, you’ll use the Displacement texture and the ORM texture. | ' |

{: .warning }
> &emsp;현재 **ORM & Displacement**나 **ORD** 밖에 지원하지 않습니다.<br>
> &emsp;Ambient Occlusion Texture, Roughness Texture, Metalic Texture, Displacement Texture들을 별개로 가지고 계시다면 하나로 합쳐서 **ORM & Displacement Texture로 만들어서 사용**하시면 됩니다.

- 모든 레이어에 적용되는 Parameter들입니다.

</details>
  
<details markdown="1">
  <summary><b style="font-size:1.25em;">Layer General Parameters</b></summary>
![BaseGeneralParams](/assets/images/mappreset/mastermaterial/BaseGeneralParams.png)

| Parameter Name      | Description                                                                                                                                     |
| ------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------- |
| Add Color Variation | If you enable this option, you can Add ColorVariation in this Layer.                                                                            |
| Near Tiling Size    | The smaller the value, the denser the texture iteration, and the larger the area per tile, creating a near-field tiling that looks large.       |
| Far Tiling Size     | A small value maintains a detailed repetition pattern from a distance, and a large value emphasizes perspective with a rough large tile effect. |

<details markdown="1">
  <summary>Color Variation Settings</summary>

| Parameter Name            | Description                                                                                                                                                                                                      |
| ------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Color Variation           | The larger the value, the larger the texture, resulting in a larger and wider pattern of color changes. The smaller the value, the more the texture repeats, creating a color change of smaller, finer patterns. |
| Color Variation Contrast  | The higher the value, the sharper and sharper the boundaries of color change, and the lower the value, the more smooth and gradual the boundaries are expressed.                                                 |
| Color Variation Intensity | A value of 0 does not show any effect at all, and the closer you get to 1, the stronger the color change is overwritten over the original color.                                                                 |

</details>

- (숫자_BaseGeneral)에서 숫자에 해당하는 레이어에 전반적으로 적용되는 Parameter들입니다.
</details>

<details markdown="1">
  <summary><b style="font-size:1.25em;">Layer BaseGround Parameters</b></summary>


![BaseGroundBaseSetting](/assets/images/mappreset/mastermaterial/BaseGroundBaseSetting.png)

{: .warning }
> &emsp;-_Public Paramter의 -_UseORD를 체크해야 ORD Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
> ![GroundORD](/assets/images/mappreset/mastermaterial/GroundORD.png)<br>
>  &emsp;(숫자)_AddGroundDisplacement를 체크해야 Displacement Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
> ![GroundDisplacement](/assets/images/mappreset/mastermaterial/GroundDisplacement.png)

| Parameter Name                   | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| -------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Ground Color                     | Base Color Of Ground                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| Ground Color Tint                | Change the overall color by applying a specific color tone to the existing color of the texture                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| Ground Normal                    | Normal Of Ground                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| Ground Normal Intensity          | When the value is 1.0, the normal map retains its original strength.<br><br>When the value is between 0.0 and 1.0, the X and Y values of the normal map decrease, making the surface unevenness appear smooth and flat. For example, setting the value to 0.5 halves the intensity.<br><br>When the value is 0.0: Normal map effect disappears completely, making it look like a plane.<br><br>When the value is greater than 1.0, the X and Y values of the normal map are amplified, resulting in a deeper and stronger representation of the surface details. |
| Ground ORM                       | AmbientOcclusion / Roughness / Metalic Texture of Ground                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| Add Ground Far Tiling Variation  | Apply Far Tiling Variation In Ground                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| Add Ground Near Tiling Variation | Apply Near Tiling Variation In Ground                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| Ground Far Tiling Factor         | Uniform scale factor applied to FarUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| Ground Near Tiling Factor        | Uniform scale factor applied to NearUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| Ground UV Aspect Ratio           | Aspect-ratio correction value applied to the final UVs so that textures maintain correct proportions.                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| Add Ground Displacement          | Apply Displacement Ground                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| Ground AO Intensity              | Controls the intensity of ambient occlusion on the ground surface. A value of 0 disables AO entirely, while higher values increase shadowing in crevices to enhance perceived depth.                                                                                                                                                                                                                                                                                                                                                                             |
| Ground Specular(Wetness)         | Adjusts specular reflectivity to simulate surface wetness. Lower values yield a dry, matte look; higher values produce glossy, reflective highlights as if the ground were wet.                                                                                                                                                                                                                                                                                                                                                                                  |
| Add Puddles                      | Add Puddle Effects in Ground                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
| Ground Add Texture Variation     | If true, enables the texture-based variation blend between Ground and MiddelHigh                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |

<details markdown="1">
  <summary>Ground Displacement Setting</summary>

  ![GroundDisplacement](/assets/images/mappreset/mastermaterial/GroundDisplacement.png)
  ![GroundDisplacementSetting](/assets/images/mappreset/mastermaterial/GroundDisplacementSetting.png)

  | Parameter Name             | Description                                                                                                                                                                        |
  | -------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
  | Ground Displacement        | Displacement Texture Of Ground                                                                                                                                                     |
  | Ground Displacement Amount | Scales the magnitude of ground displacement. Larger values push vertices farther along their normals for pronounced surface relief; smaller values yield subtler height variation. |

</details>

<details markdown="1">
  <summary>Puddle Setting</summary>

  ![GroundPuddleSetting](/assets/images/mappreset/mastermaterial/GroundPuddleSetting.png)
  
  | Parameter Name   | Description                                                                                                                                                                                       |
  | ---------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
  | Puddle Size      | The larger the value, the larger the size of the puddle.                                                                                                                                          |
  | Puddle Constrain | The higher the value, the clearer and narrower the boundary of the puddle.                                                                                                                        |
  | Puddle Depth     | The higher the value, the stronger and more opaque the puddle effect, and the closer the value approaches zero, the weaker the effect, the more transparent it becomes and disappears completely. |
  | Puddle Clarity   | Sets the darkness of the area covered by the waterhole.                                                                                                                                           |

</details>

<details markdown="1">
  <summary>Texture Variation Setting</summary>

  ![GroundTextureVariationSetting](/assets/images/mappreset/mastermaterial/GroundTextureVariationSetting.png)

  {: .warning }
  > &emsp;**해당 Layer의 BaseGround와 Middle High**의 Variation을 줘서 BaseGround가 적용되는 부분에 영향을 줍니다. <br>

  | Parameter Name                       | Description                                                                                             |
  | ------------------------------------ | ------------------------------------------------------------------------------------------------------- |
  | Ground Texture Variation Tiling Size | Controls the tiling scale of the variation texture. Higher values make the noise pattern appear larger. |
  | Ground Texture Variation Contrast    | Adjusts the contrast of the variation texture. <br>Values >1 amplify differences; <1 soften them.       |
  | Ground Texture Variation Intensity   | Sets how strongly the variation texture influences the final blend (0 = no effect, 1 = full effect).    |

</details>

<details markdown="1">
  <summary>Slope Setting</summary>

  {: .warning }
  > &emsp;**해당 Layer의 Add Cliff가 활성화**되어야 해당 Parameter가 보입니다. <br>

![GroundSlopeSetting](/assets/images/mappreset/mastermaterial/GroundSlopeSetting.png)

| Parameter Name         | Description                                                                                                          |
| ---------------------- | -------------------------------------------------------------------------------------------------------------------- |
| Ground Slope Constrain | The smaller the value, the more this layer is applied. (Apply in the order of BaseGround -> Middledle -> MiddleHigh) |

</details>

</details>

<details markdown="1">
  <summary><b style="font-size:1.25em;">Layer Cliff Parameters</b></summary>
  
![CliffParams](/assets/images/mappreset/mastermaterial/CliffParams.png)

  - Add Cliff가 활성화되면 보이는 Parameter입니다.

  {: .warning }
  > &emsp;**Add Cliff가 활성화**하고 Cliff와 BaseGround 사이의 Slope 값을 조절하고 싶으면 **Ground Slope Constrain을 확인**하세요. <br>
  > &emsp;-_Public Paramter의 -_UseORD를 체크해야 ORD Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
  > ![CliffORD](/assets/images/mappreset/mastermaterial/CliffORD.png)<br>
  >  &emsp;(숫자)_AddCliffDisplacement를 체크해야 Displacement Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
  > ![CliffDisplacement](/assets/images/mappreset/mastermaterial/CliffDisplacement.png)

| Parameter Name           | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| ------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Cliff Color              | Base Color Of Cliff                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| Cliff Color Tint         | Change the overall color by applying a specific color tone to the existing color of the texture                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| Cliff Normal             | Normal Of Cliff                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| Cliff Normal Intensity   | When the value is 1.0, the normal map retains its original strength.<br><br>When the value is between 0.0 and 1.0, the X and Y values of the normal map decrease, making the surface unevenness appear smooth and flat. For example, setting the value to 0.5 halves the intensity.<br><br>When the value is 0.0: Normal map effect disappears completely, making it look like a plane.<br><br>When the value is greater than 1.0, the X and Y values of the normal map are amplified, resulting in a deeper and stronger representation of the surface details. |
| Cliff ORM                | AmbientOcclusion / Roughness / Metalic Texture of Cliff                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| Cliff Use Triplanar      | Apply Triplanar to Cliff                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| Cliff Far Tiling Factor  | Uniform scale factor applied to FarUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| Cliff Near Tiling Factor | Uniform scale factor applied to NearUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| Cliff UV Aspect Ratio    | Aspect-ratio correction value applied to the final UVs so that textures maintain correct proportions.                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| Add Cliff Displacement   | Apply Displacement to Cliff                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| Cliff AO Intensity       | Controls ambient occlusion strength on cliff faces. A value of 0 removes AO shading, and increasing values darken crevices to accentuate rugged details.                                                                                                                                                                                                                                                                                                                                                                                                         |


<details markdown="1">
  <summary>Triplanar Setting</summary>

![TriplanarSetting](/assets/images/mappreset/mastermaterial/TriplanarSetting.png)

| Parameter Name              | Description                |
| --------------------------- | -------------------------- |
| Cliff Triplanar Tiling Size | Size of Applied Triplanar. |

  </details>

<details markdown="1">
  <summary>Displacement Setting</summary>

![CliffDisplacement](/assets/images/mappreset/mastermaterial/CliffDisplacement.png)
![CliffDisplacementSetting](/assets/images/mappreset/mastermaterial/CliffDisplacementSetting.png)

| Parameter Name            | Description                                                                                                                                      |
| ------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------ |
| Cliff Displacement        | Displacement Texture of Cliff                                                                                                                    |
| Cliff Displacement Amount | Determines the scale of cliff displacement. Higher values exaggerate rock protrusions and crevices; lower values smooth out the overall surface. |

  </details>

</details>

<details markdown="1">
  <summary><b style="font-size:1.25em;">Layer High Parameters</b></summary>

![HighParams](/assets/images/mappreset/mastermaterial/HighParams.png)

  {: .warning }
  > &emsp;-_Public Paramter의 -_UseORD를 체크해야 ORD Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
  > ![HighORD](/assets/images/mappreset/mastermaterial/HighORD.png)<br>
  >  &emsp;(숫자)_AddHighDisplacement를 체크해야 Displacement Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
  > ![HighDisplacement](/assets/images/mappreset/mastermaterial/HighDisplacement.png)

| Parameter Name          | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| ----------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| High Color              | Base Color Of High                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |
| High Color Tint         | Change the overall color by applying a specific color tone to the existing color of the texture                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| High Normal             | Normal Of High                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| High Normal Intensity   | When the value is 1.0, the normal map retains its original strength.<br><br>When the value is between 0.0 and 1.0, the X and Y values of the normal map decrease, making the surface unevenness appear smooth and flat. For example, setting the value to 0.5 halves the intensity.<br><br>When the value is 0.0: Normal map effect disappears completely, making it look like a plane.<br><br>When the value is greater than 1.0, the X and Y values of the normal map are amplified, resulting in a deeper and stronger representation of the surface details. |
| High ORM                | AmbientOcclusion / Roughness / Metalic Texture of High                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           |
| High Near Tiling Factor | Uniform scale factor applied to NearUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| High Far Tiling Factor  | Uniform scale factor applied to FarUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| High UV Aspect Ratio    | Uniform scale factor applied to FarUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| High Slope Contrast     | The value that controls the strength of the mask.<br><br>The larger the value, the more dramatic the transition of the mask near the gradient threshold, and the smaller the value, the smoother it is.                                                                                                                                                                                                                                                                                                                                                          |
| High Start Height       | Reference height (Z, world unit) at which the Height Mask starts to be activated at 0. The mask applies when the absolute Z value of the mesh is greater than or equal to this height.                                                                                                                                                                                                                                                                                                                                                                           |
| High Transition         | The smaller the value, the more pronounced and sharp boundaries are created.<br><br>The larger the value, the more smooth and gradual the gradation is created.                                                                                                                                                                                                                                                                                                                                                                                                  |
| High Edge Noise Tiling  | Smaller values repeat dense small noise tiles, and larger values produce rougher and larger noise patterns.                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| High Edge Contrast      | An index value that adjusts the strength of the sampled noise values.<br><br>Larger values result in stark differences between brighter and darker regions, resulting in distinct noise effects, and smaller values result in smoother transitions.                                                                                                                                                                                                                                                                                                              |
| High Edge Noise Amount  | A scalar that controls the intensity of the final edge noise.<br><br>Multiply the saturated noise result by this value in the multiplexing step to adjust the overall noise application.                                                                                                                                                                                                                                                                                                                                                                         |
| High Projection Angle   | Specifies the maximum slope angle (in degrees) at which the high layer’s projection mapping is applied. Lower values restrict projection to very steep surfaces, while higher values extend it to gentler slopes.                                                                                                                                                                                                                                                                                                                                                |
| High Slope Constrain    | Minimum angle of inclination at which the mask starts.<br><br>Mask is active from the point where SlopeAngle is above this value.                                                                                                                                                                                                                                                                                                                                                                                                                                |
| Add High Displacement   | Apply Displacement High                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| High AO Intensity       | Adjusts ambient occlusion on high-elevation surfaces. A value of 0 disables AO, while higher values intensify shading in crevices to highlight fine details.                                                                                                                                                                                                                                                                                                                                                                                                     |


<details markdown="1">
  <summary>Displacement Setting</summary>

![HighDisplacement](/assets/images/mappreset/mastermaterial/HighDisplacement.png)
![HighDisplacementSetting](/assets/images/mappreset/mastermaterial/HighDisplacementSetting.png)

| Parameter Name           | Description                                                                                                                                                         |
| ------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| High Displacement        | Displacement Texture of High                                                                                                                                        |
| High Displacement Amount | Controls displacement strength for the high layer. Larger values create more pronounced surface offsets and sharp detail; smaller values keep the terrain smoother. |

  </details>

</details>

<details markdown="1">
  <summary><b style="font-size:1.25em;">Layer Middle Parameters</b></summary>

![MiddleParams](/assets/images/mappreset/mastermaterial/MiddleParams.png)

  {: .warning }
  > &emsp;-_Public Paramter의 -_UseORD를 체크해야 ORD Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
  > ![MiddleORD](/assets/images/mappreset/mastermaterial/MiddleORD.png)<br>
  >  &emsp;(숫자)_AddMiddleDisplacement를 체크해야 Displacement Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
  > ![MiddleDisplacement](/assets/images/mappreset/mastermaterial/MiddleDisplacement.png)

| Parameter Name            | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| ------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Middle Color              | Base Color Of Middle                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| Middle Color Tint         | Change the overall color by applying a specific color tone to the existing color of the texture                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| Middle Normal             | Normal Of Middle                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| Middle Normal Intensity   | When the value is 1.0, the normal map retains its original strength.<br><br>When the value is between 0.0 and 1.0, the X and Y values of the normal map decrease, making the surface unevenness appear smooth and flat. For example, setting the value to 0.5 halves the intensity.<br><br>When the value is 0.0: Normal map effect disappears completely, making it look like a plane.<br><br>When the value is greater than 1.0, the X and Y values of the normal map are amplified, resulting in a deeper and stronger representation of the surface details. |
| Middle ORM                | AmbientOcclusion / Roughness / Metalic Texture of Middle                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| Middle Far Tiling Factor  | Uniform scale factor applied to FarUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| Middle Near Tiling Factor | Uniform scale factor applied to NearUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| Middle UV Aspect Ratio    | Aspect-ratio correction value applied to the final UVs so that textures maintain correct proportions.                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| Middle Slope Constrain    | The smaller the value, the more this layer is applied. (Apply in the order of BaseGround -> Middledle -> MiddleHigh)                                                                                                                                                                                                                                                                                                                                                                                                                                             |
| Add Middle Displacement   | Apply Displacement Middle                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| Middle AO Intensity       | Controls ambient occlusion on mid‑elevation surfaces. A value of 0 removes AO shading; increasing values deepen shadows in surface recesses to enhance texture.                                                                                                                                                                                                                                                                                                                                                                                                  |

<details markdown="1">
  <summary>Displacement Setting</summary>

![MiddleDisplacement](/assets/images/mappreset/mastermaterial/MiddleDisplacement.png)
![MiddleDisplacementSetting](/assets/images/mappreset/mastermaterial/MiddleDisplacementSetting.png)


| Parameter Name             | Description                                                                                                                                               |
| -------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Middle Displacement        | Displacement Texture of Middle                                                                                                                            |
| Middle Displacement Amount | Scales the displacement effect on the middle layer. Higher values produce more pronounced bumps and ridges; lower values yield gentler surface variation. |

  </details>

</details>

<details markdown="1">
  <summary><b style="font-size:1.25em;">Layer Middle High Parameters</b></summary>

![MiddleHighParams](/assets/images/mappreset/mastermaterial/MiddleHighParams.png)

  {: .warning }
  > &emsp;-_Public Paramter의 -_UseORD를 체크해야 ORD Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
  > ![MiddleHighORD](/assets/images/mappreset/mastermaterial/MiddleHighORD.png)<br>
  >  &emsp;(숫자)_AddMiddleHighDisplacement를 체크해야 Displacement Texture를 넣을 수 있는 Parameter가 노출됩니다.<br>
  > ![MiddleHighDisplacement](/assets/images/mappreset/mastermaterial/MiddleHighDisplacement.png)

| Parameter Name                 | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |
| ------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Middle High Color              | Base Color Of Middle High                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| Middle High Color Tint         | Change the overall color by applying a specific color tone to the existing color of the texture                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| Middle High Normal             | Normal Of Middle High                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| Middle High Normal Intensity   | When the value is 1.0, the normal map retains its original strength.<br><br>When the value is between 0.0 and 1.0, the X and Y values of the normal map decrease, making the surface unevenness appear smooth and flat. For example, setting the value to 0.5 halves the intensity.<br><br>When the value is 0.0: Normal map effect disappears completely, making it look like a plane.<br><br>When the value is greater than 1.0, the X and Y values of the normal map are amplified, resulting in a deeper and stronger representation of the surface details. |
| Middle High ORM                | AmbientOcclusion / Roughness / Metalic Texture of Middle High                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| Middle High Far Tiling Factor  | Uniform scale factor applied to FarUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |
| Middle High Near Tiling Factor | Uniform scale factor applied to NearUV before passing into the tiling-variation function.                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
| Middle High UV Aspect Ratio    | Aspect-ratio correction value applied to the final UVs so that textures maintain correct proportions.                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
| Middle High Slope Constrain    | The smaller the value, the more this layer is applied. (Apply in the order of BaseGround -> Middle Highdle -> Middle HighHigh)                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| Add Middle High Displacement   | Apply Displacement Middle High                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| Middle High AO Intensity       | Adjusts ambient occlusion for the middle‑high layer. A value of 0 disables AO completely, while higher values darken cracks and overhangs for richer depth cues.                                                                                                                                                                                                                                                                                                                                                                                                 |

<details markdown="1">
  <summary>Displacement Setting</summary>

![MiddleHighDisplacement](/assets/images/mappreset/mastermaterial/MiddleHighDisplacement.png)
![MiddleHighDisplacementSetting](/assets/images/mappreset/mastermaterial/MiddleHighDisplacementSetting.png)

| Parameter Name                  | Description                                                                                                                                                 |
| ------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Middle High Displacement        | Displacement Texture of Middle High                                                                                                                         |
| Middle High Displacement Amount | Determines the magnitude of displacement on middle‑high geometry. Larger values accentuate relief and detail; smaller values maintain a flatter appearance. |

  </details>

</details>