using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using packt.FoodyGO.Database;

namespace packt.FoodyGO.UI
{
    public class MonsterInventoryItem : InventoryItem
    {
        private Monster monster;
        public override void SetContent(object value)
        {
            //we need to manually call start
            Start();
            monster = value as Monster;
            if (monster == null) return;

            TopText.text = "属性点 " + (monster.Power * monster.Level).ToString();
            BottomText.text = monster.Name;            
        }

        
    }
}
