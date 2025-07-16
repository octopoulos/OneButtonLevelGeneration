---
title: Additional Setting
layout: default
tags: [Additional Setting]
nav_order: 5
---

# Additional Settings

## Nanite Setting
- To enable Nanite tessellation, add the following to your project’s Config/DefaultEngine.ini:
```ini
[/Script/Engine.RendererSettings]
r.Nanite.AllowTessellation=1
r.Nanite.Tessellation=1
```
  
<br>![LandscapeNaniteSetting]({{ site.baseurl }}/assets/images/additionalsetting/LandscapeNaniteSetting.png)
- If you want to apply Nanite Tesselation to Landscape, check Landscape Enable Nanite and build Data.

## Runtime Virtual Texture Setting
![RVTSetting]({{ site.baseurl }}/assets/images/additionalsetting/RVTSetting.png)
- In Editor, Edit -> Project Settings -> Engine - Rendering -> Virtual Textures
- Check Enable virtual support and UnCheck Enable virtual texture on texture import