using Ship.Module;

namespace UI
{
    public static class TierColor
    {
        public static string S = "#ff7ffe";
        public static string A = "#7fffff";
        public static string B = "#7eff80";
        public static string C = "#beff7f";
        public static string D = "#feff7f";
        public static string E = "#ffbf7e";
        public static string F = "#ff7f7e";

        public static string ConvertFromTier(Tier tier)
        {
            return tier switch
            {
                Tier.S => S,
                Tier.A => A,
                Tier.B => B,
                Tier.C => C,
                Tier.D => D,
                Tier.E => E,
                Tier.F => F,
                _ => "",
            };
        }
    }
}
