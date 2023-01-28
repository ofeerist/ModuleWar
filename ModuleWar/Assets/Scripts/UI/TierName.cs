using Ship.Module;

namespace UI
{
    public static class TierName
    {
        public static string ConvertFromTier(Tier tier)
        {
            return tier switch
            {
                Tier.S => "S",
                Tier.A => "A",
                Tier.B => "B",
                Tier.C => "C",
                Tier.D => "D",
                Tier.E => "E",
                Tier.F => "F",
                _ => "",
            };
        }
    }
}
