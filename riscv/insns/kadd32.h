require_rv64;
P_LOOP(32, {
  bool sat = false;
  pd = (sat_add<int32_t, uint32_t>(ps1, ps2, sat));
  P.VU.vxsat |= sat;
})