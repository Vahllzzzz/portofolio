<script setup lang="ts">
const techStack = {
  game: [
    { name: 'C++', level: 'Beginner' },
    { name: 'C#', level: 'Beginner' },
    { name: 'Raylib', level: 'Beginner' },
    { name: 'GDScript', level: 'Beginner' },
    { name: 'Godot', level: 'Beginner' },
    { name: 'Unity', level: 'Beginner' },
  ],
  web: [
    { name: 'HTML5', level: 'Beginner' },
    { name: 'CSS', level: 'Beginner' },
    { name: 'PHP', level: 'Beginner' },
    { name: 'Python', level: 'Beginner' },
    { name: 'Laravel', level: 'Beginner' },
    { name: 'Bootstrap', level: 'Beginner' },
    { name: 'JavaScript', level: 'Beginner' },
    { name: 'Nuxt.js', level: 'Beginner' },
    { name: 'Tailwind CSS', level: 'Beginner' },
    { name: 'PostgreSQL', level: 'Beginner' },
    { name: 'MYSQL', level: 'Beginner' },
  ]
}
</script>

<template>
  <section id="skills" class="py-24">
    <div class="container mx-auto px-6">
      <div class="text-center mb-16">
        <h2 class="text-4xl font-bold mb-4">Arsenal & <span class="text-emerald-accent">Expertise</span></h2>
        <p class="text-slate-400">The tools I use to bring ideas to life across different platforms.</p>
      </div>

      <div class="grid lg:grid-cols-2 gap-8">
        <!-- Game Dev Stack -->
        <div 
          v-motion
          :initial="{ opacity: 0, y: 20 }"
          :visible="{ opacity: 1, y: 0 }"
          class="glass p-8 rounded-3xl"
        >
          <div class="flex items-center gap-4 mb-8">
            <div class="w-12 h-12 rounded-xl bg-blue-500/10 flex items-center justify-center text-blue-400">
              <span class="font-bold">G</span>
            </div>
            <h3 class="text-2xl font-bold">Game Development</h3>
          </div>
          <div class="grid grid-cols-2 sm:grid-cols-3 gap-4">
            <div 
              v-for="tech in techStack.game" 
              :key="tech.name"
              class="p-4 rounded-2xl bg-white/5 border border-white/5 hover:border-emerald-accent/50 transition-colors group"
            >
              <div class="text-white font-medium mb-1">{{ tech.name }}</div>
              <div class="text-[10px] uppercase tracking-widest text-slate-500 group-hover:text-emerald-accent transition-colors">{{ tech.level }}</div>
            </div>
          </div>
        </div>

        <!-- Web Dev Stack -->
        <div 
          v-motion
          :initial="{ opacity: 0, y: 20 }"
          :visible="{ opacity: 1, y: 0 }"
          :delay="200"
          class="glass p-8 rounded-3xl"
        >
          <div class="flex items-center gap-4 mb-8">
            <div class="w-12 h-12 rounded-xl bg-emerald-accent/10 flex items-center justify-center text-emerald-accent">
              <span class="font-bold">W</span>
            </div>
            <h3 class="text-2xl font-bold">Web Development</h3>
          </div>
          <div class="grid grid-cols-2 sm:grid-cols-3 gap-4">
            <div 
              v-for="tech in techStack.web" 
              :key="tech.name"
              class="p-4 rounded-2xl bg-white/5 border border-white/5 hover:border-emerald-accent/50 transition-colors group"
            >
              <div class="text-white font-medium mb-1">{{ tech.name }}</div>
              <div class="text-[10px] uppercase tracking-widest text-slate-500 group-hover:text-emerald-accent transition-colors">{{ tech.level }}</div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </section>
</template>
