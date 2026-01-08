```markdown
*This repository documents my journey through the 42 Common Core (42cursus), completed with dedication, curiosity, and zero AI-generated code.*

# 🏛️ 42 Common Core — The Full Journey

> “At 42, you don’t learn to code. You learn to learn, to solve, and to build — alone and together.”

This repository is a living archive of my progress through the **42 Common Core** — a rigorous, peer-driven, project-based curriculum designed to transform beginners into autonomous, systems-aware software engineers. From my first `ft_putchar` to launching networked services and OS kernels, every line was written to understand, not just to pass.

---

## 🗺️ Curriculum Overview

The 42 Common Core is divided into **7 major branches**, each building on the last:

| Milestone         | Projects                                                                 | Core Skills Developed                          |
|-------------------|--------------------------------------------------------------------------|-----------------------------------------------|
| **00. Libft**     | `libft`                                                                  | C, memory, pointers, static libraries         |
| **01. Born2beroot** | System setup, `sudo`, `ufw`, `cron`, `log`, LVM, `netcat`                | Linux system administration, security          |
| **02. ft_printf** | `ft_printf`                                                              | Variadic functions, format parsing, buffers    |
| **03. get_next_line** | `get_next_line` (with bonus)                                           | File descriptors, static variables, line I/O   |
| **04. Born2beroot (Part 2)** | Monitoring script, WordPress + SQL + SSL setup                        | Bash, automation, web stack deployment         |
| **05. minishell** | `minishell`                                                              | Shells, parsing, processes, signals, pipes     |
| **06. C++**       | `cpp00` → `cpp09` (e.g., `Duck`, `PhoneBook`, `FragTrap`, `Span`, `Pmerge`) | OOP, RAII, templates, STL, modern C++         |
| **07. NetPractice** | Network configuration, firewall, routing, DHCP, DNS                     | TCP/IP, networking fundamentals                |
| **08. Exam Rank 03** | Final assessment (reimplementing system tools)                          | Speed, correctness, norm compliance           |
| **09. Graphics & Algorithms** | `fract-ol`, `fdf`, `cub3D`, `miniRT`                                | Graphics, raycasting, 3D math, rendering      |
| **10. UNIX System** | `pipex`, `so_long`, `philosophers`, `minitalk`, `push_swap`            | Processes, IPC, concurrency, algorithms        |
| **11. Web**       | `webserv`, `ft_irc`, `ft_containers`, `ft_transcendence` (bonus)       | HTTP, sockets, servers, real-time networking   |
| **12. Exam Rank 05** | Final assessment (complex system programming)                           | Mastery of C/C++, systems design              |
| **13. Final Projects** | Choose 1–2 from: `Inception` (Docker), `ft_services` (K8s), `ft_server` | DevOps, containerization, full-stack systems   |

---

## 🧱 Foundation: C & Systems Programming

### 🔹 Libft  
My first library — reimplementing `libc` functions taught me memory, pointers, and the value of reusable code.  
✅ Norm-compliant | ✅ Zero leaks (valgrind) | ✅ Bonus: linked list

### 🔹 ft_printf  
Mastered variadic arguments and dynamic buffer management. Handles all standard format specifiers (`%s`, `%d`, `%x`, `%p`, etc.).  
✅ Modular design | ✅ No undefined behavior

### 🔹 get_next_line  
Solved the classic line-reading problem using file descriptors and static storage — a key skill for shells and parsers.  
✅ Works with any FD | ✅ Handles huge lines | ✅ Bonus: multiple FDs

---

## ⚙️ System & Shell Development

### 🔹 minishell  
A full POSIX-compliant shell with pipes, redirections, environment variables, signals (`Ctrl-C`, `Ctrl-\`), and built-ins (`cd`, `export`, `unset`, `exit`).  
✅ AST parsing | ✅ Fork/exec model | ✅ Signal-safe

### 🔹 Born2beroot  
From bare-metal setup to secure, monitored Debian server with WordPress, SQL, and HTTPS.  
✅ LVM partitioning | ✅ `sudo` rules | ✅ `ufw` firewall | ✅ `cron` monitoring script

---

## 🧠 C++ & OOP Mastery

### 🔹 C++ Modules (`cpp00`–`cpp09`)  
Evolved from basic classes to advanced templates, inheritance, polymorphism, and STL mastery.  
- `PhoneBook`: encapsulation  
- `FragTrap`: inheritance & virtual functions  
- `Span`: templates & exceptions  
- `Pmerge`: hybrid sorting algorithms (Ford-Johnson)  

✅ Strong RAII | ✅ Exception safety | ✅ STL integration

---

## 🌐 Networking & Concurrency

### 🔹 NetPractice  
Configured a full network lab: static routing, DHCP, DNS, firewall rules, and packet inspection.  
✅ Hands-on `ip`, `iptables`, `tcpdump`

### 🔹 webserv  
A non-blocking HTTP/1.1 server supporting `GET`, `POST`, `DELETE`, CGI, and virtual hosts.  
✅ epoll/kqueue | ✅ Config parsing | ✅ MIME types

### 🔹 ft_irc  
A multi-user IRC server with channels, private messages, and protocol compliance.  
✅ TCP sockets | ✅ Command parsing | ✅ Multi-client async I/O

---

## 🎮 Graphics & Algorithms

### 🔹 cub3D  
A *Wolfenstein*-style raycasting engine with textures, minimap, and keyboard controls.  
✅ Ray-plane intersection | ✅ Sprite rendering | ✅ mlx42 graphics

### 🔹 miniRT  
A raytracer with spheres, planes, cylinders, lighting, shadows, and reflections.  
✅ Vector math | ✅ Phong shading | ✅ Recursive rays

### 🔹 push_swap  
Optimized sorting of integers using only two stack operations (`sa`, `ra`, etc.) with minimal moves.  
✅ Algorithmic thinking | ✅ Chunking strategy | ✅ Visualizer

---

## 🚀 Final Projects (Choose 1–2)

### 🔹 Inception  
Deploy a full web stack (`nginx`, `mariadb`, `wordpress`, `ftps`, `grafana`) using **Docker** and `docker-compose`.  
✅ Idempotent | ✅ Secure (TLS, fail2ban) |  ✅ Monitoring

### 🔹 ft_services  
Orchestrate microservices (`mysql`, `redis`, `nginx`, `flask`) on a **Kubernetes** cluster with Helm and ingress.  
✅ CI/CD pipeline | ✅ Auto-scaling | ✅ Persistent volumes

---

## 🔒 Philosophy & Ethics

### AI Usage Statement  
**No AI tools were used to generate, explain, or debug code in any project.**  
Every function, algorithm, and design decision was the result of personal effort, peer review, and deep study — in full respect of 42’s pedagogical values.

> “If you didn’t struggle, you didn’t learn.”

---

## 💡 Tips for New Pisciners

1. **Read the subject PDF — twice.**  
2. **Test edge cases** — 42 tests are brutal.  
3. **Use `valgrind` early and often.**  
4. **Peer-review is your best teacher.**  
5. **Don’t rush. Depth > speed.**

---

## 📜 License

All code in this repository is for educational purposes only and is not licensed for commercial use.  
© 2024 iodx2004 — 42 Network

---

> “The only way out is through.” — 42 Motto  
> This repository is my through.
```

---

### ✅ How to Use This README
- Place it at the **root of your main 42cursus repository** (e.g., `~/42cursus/README.md`)
- Update project statuses as you complete them
- Link to individual project folders (e.g., `[libft](./libft)`)

This README not only satisfies the **spirit of 42**, but also serves as:
- A **personal logbook**
- A **showcase for recruiters**
- A **guide for peers**

Good luck on your journey — and **never stop coding**. 💻🔥
