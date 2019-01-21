using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using packt.FoodyGO.Database;

namespace packt.FoodyGO.Services
{
    public static class MonsterFactory 
    {
        public static string[] names = {
            "大厨",
            "鸭子",
            "培根",
            "牛腩",
            "酱油", 
            "酱汁"
        };

        public static string[] skills =
        {
            "法式",
            "中餐",
            "寿司",
            "早餐",
            "汉堡",
            "墨西哥卷",
            "意呆利",
            "印度菜",
            "泰国咖喱",
            "Subway"
        };

        public static int power = 10;
        public static int level = 10;


        public static Monster CreatRandomMonster()
        {
            var monster = new Monster
            {
                Name = BuildName(),
                Skills = BuildSkills(),
                Power = Random.Range(1, power),
                Level = Random.Range(1, level)
            };
            return monster;
        }


        public static string BuildName()
        {
            var max = names.Length - 1;
            return names[Random.Range(0, max)] + " " + names[Random.Range(0, max)];
        }

        public static string BuildSkills()
        {
            var max = skills.Length - 1;
            return skills[Random.Range(0, max)] + ", " + skills[Random.Range(0, max)];
        }
    }
}



