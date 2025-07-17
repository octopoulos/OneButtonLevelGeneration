---
title: Quick Start
layout: default
tags: [quick start, getting started]
nav_order: 2
---

# One-Click Level Generator Quick Start
이 섹션에서는 플러그인의 샘플 맵 프리셋 에셋과 랜드스케이프 머티리얼을 통해 간단히 레벨을 만드는 과정을 설명합니다.

## Basic Usage

### 1. Create a New Level

File > New Level(Ctrl+N)을 선택한 뒤, 새로운 빈 레벨을 생성합니다. OCG는 오픈월드도 지원합니다.

![New Level Select Image]({{ site.baseurl }}/assets/images/tutorials/basic_tutorial/new_level_select.png)

### 2. Open the One-Click Level Generator

Window > OCG Tools > OCG Window를 선택하여 OCG 창을 엽니다.

![Open OCG Window]({{ site.baseurl }}/assets/images/tutorials/basic_tutorial/open_ocg_window.png)

이후 OCG 창에서 Create Level Generator 버튼을 클릭하여 레벨 생성기를 월드에 추가합니다.

![Create Level Generator Button]({{ site.baseurl }}/assets/images/tutorials/basic_tutorial/create_level_generator.png)

Plugins/One-Click Level Generation/Samples 경로의 MP_StylizedLandscape 맵 프리셋을 할당합니다.

![Set Sample Map Preset]({{ site.baseurl }}/assets/images/tutorials/basic_tutorial/set_sample_mappreset.png)

PCG 그래프와 랜드스케이프 머티리얼이 잘 할당되어 있는지 확인합니다. 할당되어 있지 않다면 아래 이미지와 같이 할당합니다.

![Check Map Preset Graph and Material]({{ site.baseurl }}/assets/images/tutorials/basic_tutorial/check_map_preset.png)

Generate 버튼을 누르면 레벨이 생성되기 시작합니다.

![Click Generate Button]({{ site.baseurl }}/assets/images/tutorials/basic_tutorial/click_generate.png)

UE 5.6 이상의 버전에서는 다음과 같은 Layer 설정 창이 팝업될 수 있습니다. Water 레이어가 Layer 레이어보다 위에 있도록 하여 완료 버튼을 눌러주세요.

![Check Layer Order]({{ site.baseurl }}/assets/images/tutorials/basic_tutorial/check_layer_order.png)

상단의 창 > 환경 라이트 믹서를 선택하여 레벨에 환경 라이팅 관련 액터를 추가해주세요.

![Set Env Lights]({{ site.baseurl }}/assets/images/tutorials/basic_tutorial/set_env_light.png)

이제 여러분의 샘플 레벨이 생성되었습니다! MapPreset 문서를 참고하여 여러분만의 레벨을 만들어보세요.

![Set Env Lights]({{ site.baseurl }}/assets/images/tutorials/basic_tutorial/sample_level_generated.png)
