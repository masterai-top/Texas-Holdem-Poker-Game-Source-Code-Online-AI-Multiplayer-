# 🃏 Texas Holdem Poker Game Source Code   德州扑克源码 | 德州撲克源碼 |德州撲克系統
Texas Hold'em Poker Platform/Real-time Multiplayer • High Concurrency • Club System
德州扑克游戏平台源码/实时对战 · 高并发 · 俱乐部系统
💡 Build your own poker platform in minutes  
💡 快速搭建属于你的德州扑克平台  
💡 快速建立自己的德州撲克系統  

---

## 🚀 Overview | 项目简介

**EN:**
A production-ready Texas Hold'em poker platform designed for real-time multiplayer gameplay, high concurrency, and flexible business customization.
Built for game studios, operators, and developers who need a scalable and reliable poker system.

**中文：**
本项目是一套成熟稳定的德州扑克实时对战平台，支持**高并发、低延迟、可扩展业务逻辑**，适用于游戏公司、运营团队及开发者快速搭建扑克系统。

---

## 🎮 Core Features | 核心功能

### 🃏 Game Modes | 游戏玩法

* Sit & Go (SNG)
* Multi-Table Tournament (MTT)
* Short Deck (6+)
* Omaha（奥马哈）
* Fast Mode / AOF（快速模式）


- **多模式德州玩法**  
  - 经典德州 Hold'em  
  - 短牌 Short Deck  
  - AOF、大菠萝、SNG、MTT 等多种赛事/玩法（可按需扩展）


- **实时对战与多端支持**  
  - 实时服务器，支持 6~10 人一桌  
  - 客户端基于 Unity 引擎，支持 iOS / Android 平台  
  - 支持好友邀请、私密局、语音聊天（可选）

### 🏢 Club System | 俱乐部系统

* Private Clubs（私人俱乐部）
* Agent / Affiliate System（代理体系）
* Player & Table Management（玩家/牌桌管理）
* Custom Rules & Rake（规则与抽水自定义）
* 俱乐部创建、成员管理  
* 代理分润、抽水结算  
*俱乐部专属房间、排行榜、赛事支持
---

### ⚡ Real-time Engine | 实时引擎

* WebSocket / TCP 通信
* 毫秒级同步（Low latency sync）
* 断线重连 / 状态恢复
* 服务端防作弊校验

---

## 🏗 Architecture | 系统架构

### 📌 High-Level Architecture

```mermaid
graph TD
    A[Client (Web / Mobile)] --> B[Global Load Balancer]
    B --> C[Gateway Server]
    C --> D[Game Server Cluster]
    D --> E[Redis (Cache / State)]
    D --> F[MySQL (Persistent Data)]
    C --> G[API Service]
    G --> F
```

---

### 📌 Architecture Explanation | 架构说明
-   **服务端**：C++ (高效稳定)
-   **客户端**：Cocos Creator / Unity (可演示)
-   **通信**：Tars / 私有协议
-   **数据**：MySQL + Redis
**EN:**

* Gateway handles connection & routing
* Game Server processes core logic
* Redis stores real-time state
* MySQL ensures data persistence
* API Service handles business logic

**中文：**

* Gateway 负责连接与路由分发
* Game Server 处理核心游戏逻辑
* Redis 用于实时状态缓存
* MySQL 负责数据持久化
* API 服务处理业务逻辑

---

## 📊 Performance | 性能表现

```text
✔ 10,000+ Concurrent Players Tested  
✔ Avg Latency: 50–80 ms (Asia)  
✔ Packet Loss: < 0.2%  
✔ Stable Long-session Gameplay  
```

---

## 🌐 Deployment | 部署方案

支持：

* AWS / GCP / Azure
* Docker / Kubernetes
* 私有化部署（On-premise）

### ✅ Recommended Setup（推荐部署）

* Game Server：Tokyo Region
* CDN：Global Edge Acceleration
* DNS：Geo Routing

---

## 🔐 Security | 安全机制

* Server-side validation（防作弊）
* TLS 数据加密
* 风控与限流系统
* 日志与监控
* DDoS 防护支持

---

## 📸 Screenshots | 界面展示

![微信图片_20241029191811 - 副本](https://github.com/user-attachments/assets/31da98f9-d812-4501-9756-d7e9efe08f12)
![优化-9人桌](https://github.com/user-attachments/assets/1dc7be3e-eee3-4bfb-98ef-27b428bcc3fa)
![微信图片_20241031110830](https://github.com/user-attachments/assets/af9ed4cc-a4fb-4901-a96b-3b3cf7abaaf1)
![微信图片_20241031110826](https://github.com/user-attachments/assets/fc8b80b7-7732-4a70-9ff3-99e3c6004db5)
![微信图片_20241031110821](https://github.com/user-attachments/assets/cac8a5e5-7898-45c2-ad19-0be183961f00)
![微信图片_20241031110816](https://github.com/user-attachments/assets/1d991a2f-1315-4a2d-932d-57002f0d36d8)
![微信图片_20241029191842](https://github.com/user-attachments/assets/c5b8c91f-4eaa-4391-a6b8-f3ac17a0003c)
![微信图片_20241029191835](https://github.com/user-attachments/assets/5ac3245e-d395-4837-b347-dcffd94daf14)
![微信图片_20241029191822](https://github.com/user-attachments/assets/50a898dc-2e69-471b-9022-cc18eb7b5f69)
![微信图片_20241029191811 - 副本](https://github.com/user-attachments/assets/ac84cd0c-6eea-4009-ad63-2bcb574847cb)

---
![Stars](https://img.shields.io/github/stars/masterai-top/Texas-Holdem-Poker-Game-Source-Code-Online-AI-Multiplayer-?style=social)
![Last Update](https://img.shields.io/github/last-commit/masterai-top/Texas-Holdem-Poker-Game-Source-Code-Online-AI-Multiplayer-)
🚀 Perfect for building poker apps, platforms, or learning real-time game development

---
🎥 Video Demo | 视频演示

👉 [https://youtube.com/your-video-link](https://www.facebook.com/share/v/1LHRj4he6A/?mibextid=wwXIfr)

EN: Full gameplay + backend system walkthrough
中文：完整游戏流程 + 后台演示


## 📬 Contact | 联系方式

- Telegram：@xuzongbin001  
- Email：masterai918@gmail.com  

## 📦 Project Structure | 项目结构

```bash
/poker-server      # 游戏服务端
/poker-client      # 客户端（H5 / APP）
/poker-admin       # 后台管理系统
/poker-docs        # 文档与说明
```

---

## 📚 Documentation | 文档说明

* API 文档
* 部署指南
* 架构设计说明
* 二次开发指南

---

## 🤝 Customization | 定制支持

* UI/UX 定制
* 新玩法开发
* 支付系统集成
* 多语言支持
* 功能扩展

---

## 📈 Use Cases | 应用场景

* 在线扑克平台
* 棋牌游戏系统
* 社交娱乐应用
* 棋牌游戏运营项目

---


### 🔥 为什么选择这套源码？

这是一套 **真正上线运营多年、久经考验** 的德州扑克全套解决方案。不同于市面上拼凑的Demo，我们的代码持续迭代，服务稳定，已被多个俱乐部用于实际运营。

### ✨ 核心卖点

-   **完整玩法矩阵**：德州、奥马哈、短牌、大菠萝、MTT、SNG、AOF，**联盟模式**全支持。
-   **俱乐部/私人局**：完整的约局、俱乐部管理、保险、战绩统计功能。
-   **高稳定性**：C++ 高性能服务端，支持千人同时在线，无压力。
-   **优质资源**：提供全套高清美术资源、UI源文件、音效。
-   **同类对比**：在功能、稳定性和扩展性上，**全面优于 hhpoker 和 wpk**。

---

## ⚠️ Disclaimer | 声明

**EN:**
This project is for educational and development purposes only. Users must comply with local laws and regulations.

**中文：**
本项目仅用于学习与开发用途，请遵守当地法律法规。

---

## ⭐ Why Choose This Project | 项目优势

* ✔ 高并发支持（万人在线）
* ✔ 成熟稳定（可直接部署）
* ✔ 模块化设计（易扩展）
* ✔ 多玩法 + 俱乐部体系
* ✔ 支持定制开发

---




