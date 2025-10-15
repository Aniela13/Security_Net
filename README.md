# SecurityNet

**Windows Forms application for real‑time mall security monitoring**

> Admin • Operator • Client flows · Q&A assistant · Emergency response · CCTV recording & snapshots · Live robot map · SQL-backed users/alarms/robot telemetry

---

## Table of Contents
1. [Overview](#overview)
2. [Core Features](#core-features)
3. [Architecture](#architecture)
4. [Tech Stack](#tech-stack)
5. [Screens & Flows](#screens--flows)
6. [Data Model](#data-model)
7. [Getting Started](#getting-started)
8. [Configuration](#configuration)
9. [Running the App](#running-the-app)
10. [Q&A Assistant](#qa-assistant)
11. [Emergency Workflow](#emergency-workflow)
12. [Robot Mapping](#robot-mapping)
13. [Video & Snapshots](#video--snapshots)

---

## Overview
SecurityNet is a Windows Forms (.NET) application that centralizes mall security operations into a single console. It supports separate experiences for **Admin**, **Operator**, and **Client** roles, provides a built‑in **Q&A assistant** for quick procedures, handles **emergency buttons**, integrates with **IP cameras** for recording and photo capture, renders a **live map** of a patrol robot, and persists all activity to **SQL Server**.

**Why SecurityNet?**
- One console for monitoring, response, logging, and reporting.
- Role‑based access and auditable actions.
- Real‑time situational awareness with camera feeds and robot location.

---

## Core Features
- **Role-based flows**
  - **Admin**: user/role management, system config, audit, reports.
  - **Operator**: live dashboard, alarms, dispatch, camera control, incident logging.
  - **Client**: request assistance, view safety guidelines, submit incident tickets.
- **Q&A Assistant**: searchable procedures (e.g., “bomb threat”, “lost child”), quick answers.
- **Emergency Button**: panic input → alert routing, camera focus, notifications, incident record.
- **CCTV Integration**: RTSP playback, manual/auto recording, snapshots, timeline.
- **Robot Live Map**: robot pose/track visualization, telemetry overlay, patrol routes.
- **SQL Persistence**: users, roles, sessions, alarms, incidents, media metadata, robot telemetry.

---

## Architecture
=====================TO BE UPDATE - UPLOAD IMAGE OF STARURL CLASSES DIAGRAM======================
```
+-----------------------+          +--------------------+
|  Windows Forms (UI)   |◀────────▶|  Q&A Knowledge     |
|  Admin/Operator/Client|          |  Base (local DB)   |
+----------▲------------+          +--------------------+
           │
           │ WinForms Presenters/ViewModels
           ▼
+-----------------------+          +--------------------+         +-------------------+
|  Application Services |◀────────▶|  Media Service     |◀──────▶|  IP Cameras (RTSP)|
|  (Alarms, Users, ...)|          |  (record/snapshot) |         +-------------------+
+----------▲------------+          +--------------------+
           │                                                       +-------------------+
           │ Repositories (EF Core / ADO.NET)                      |  Robot Telemetry  |
           ▼                                                       |  (MQTT/HTTP)      |
+-----------------------+                                          +-------------------+
|  SQL Server Database  |
+-----------------------+
```

---

## Tech Stack
- **UI**: Windows Forms (.NET 6/7 for Windows)
- **Data**: SQL Server / LocalDB, Entity Framework Core (or ADO.NET)
- **Media**: RTSP/ONVIF compatible cameras (e.g., via FFmpeg/LibVLC)
- **Mapping**: GDI+/WinForms (or embedded web control with Leaflet)
- **Messaging (optional)**: MQTT/HTTP for robot telemetry

---

## Screens & Flows
### Admin
- User & role management, password reset
- System configuration (connection strings, camera endpoints)
- Reports & audit logs

### Operator
- Realtime dashboard: active alarms, camera tiles, robot map
- Incident creation & workflow; assign responders
- Video record / snapshot; attach media to incidents

### Client
- Request assistance (desk kiosks or client app)
- View safety info & FAQs (powered by Q&A)

---

## Data Model
**Key tables** (suggested):
- `Users(UserId, Username, PasswordHash, Role, CreatedAt, LastLoginAt)`
- `Alarms(AlarmId, Type, Source, Severity, Status, RaisedAt, ClosedAt, RaisedByUserId)`
- `Incidents(IncidentId, Title, Description, Status, Priority, OpenedAt, ClosedAt, AssignedToUserId)`
- `Media(MediaId, IncidentId, Path, Type, Duration, CapturedAt)`
- `RobotTelemetry(TelemetryId, X, Y, Heading, Battery, Timestamp)`
- `QaArticles(ArticleId, Title, Tags, Body, UpdatedAt)`

> See `/db/schema.sql` for a quick start DDL (add your actual script).

---

## Getting Started
### Prerequisites
- **Windows 10/11**
- **Visual Studio 2022** (Desktop development with .NET workload)
- **.NET 6/7 (Windows)**
- **SQL Server** (LocalDB or Express is fine)
- Optional: **FFmpeg/LibVLC** for RTSP playback; **Mosquitto**/**HTTP endpoint** for robot telemetry

### Clone
```bash
git clone https://github.com/<your-org>/securitynet.git
cd securitynet
```

### Database
- Create a database `SecurityNet` in SQL Server.
- Apply schema/migrations (EF Core example):
```bash
# From the solution directory
# dotnet tool install --global dotnet-ef
# dotnet ef database update
```
Or run the SQL in `/db/schema.sql`.

---

## Running the App
1. Open `SecurityNet.sln` in Visual Studio.
2. Set startup project to `SecurityNet.WinForms`.
3. Ensure the database is reachable and `RecordFolder` exists.
4. Press **F5** to run.

**Default roles (seed)**
- Admin: `admin@example.com` / `ChangeMe!`  
- Operator: `operator@example.com` / `ChangeMe!`

> Change seeded passwords on first run.

---

## Q&A Assistant
- Local knowledge base in `QaArticles` with tags & full‑text search.
- Operator/Client can query quick procedures (short answers + links to SOPs).
- Admin can add/edit articles in a simple editor dialog.

### Article example (markdown stored in DB)
```
# Lost Child Procedure
1) Notify security lead.
2) Lock exterior doors per SOP.
3) Announce code on PA.
...
```

---

## Emergency Workflow
1. **Trigger**: hardware panic button / UI button.
2. **Immediate actions**: raise high‑severity alarm, focus nearest camera(s), audible alert.
3. **Dispatch**: assign responders, start incident timer, open checklist.
4. **Record**: auto‑record video, allow manual snapshots.
5. **Resolve**: close incident with notes; all actions audit‑logged.

---

## Robot Mapping
- Ingest telemetry (X, Y, Heading, Battery, Timestamp).
- Render live pose on the map; maintain breadcrumb trail.
- Optional geofences; raise alarms when breached or battery low.

---

## Video & Snapshots
- RTSP playback through embedded player (e.g., LibVLC or FFmpeg wrapper).
- **Recording**: manual or on‑incident; files saved under `Media.RecordFolder`.
- **Snapshots**: PNG/JPEG saved and linked to the incident record.

> Ensure legal compliance and signage for CCTV usage.

---
