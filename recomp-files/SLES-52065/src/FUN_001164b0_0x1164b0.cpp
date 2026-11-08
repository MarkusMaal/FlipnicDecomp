#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001164b0
// Address: 0x1164b0 - 0x11664c
void FUN_001164b0_0x1164b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001164b0_0x1164b0");
#endif

    switch (ctx->pc) {
        case 0x1164ccu: goto label_1164cc;
        default: break;
    }

    ctx->pc = 0x1164b0u;

    // 0x1164b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1164b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1164b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164b8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1164b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1164bc: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x1164bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x1164c0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1164c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1164c4: 0x2463cce0  addiu       $v1, $v1, -0x3320
    ctx->pc = 0x1164c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954208));
    // 0x1164c8: 0x35090dcd  ori         $t1, $t0, 0xDCD
    ctx->pc = 0x1164c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3533);
label_1164cc:
    // 0x1164cc: 0x875024  and         $t2, $a0, $a3
    ctx->pc = 0x1164ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1164d0: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x1164d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1164d4: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x1164d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1164d8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x1164d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x1164dc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1164dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1164e0: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x1164e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1164e4: 0x28aa0270  slti        $t2, $a1, 0x270
    ctx->pc = 0x1164e4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)624) ? 1 : 0);
    // 0x1164e8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1164e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1164ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1164ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1164f0: 0x876024  and         $t4, $a0, $a3
    ctx->pc = 0x1164f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1164f4: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x1164f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1164f8: 0xc6402  srl         $t4, $t4, 16
    ctx->pc = 0x1164f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x1164fc: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1164fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x116500: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x116500u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x116504: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x116504u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116508: 0x1672024  and         $a0, $t3, $a3
    ctx->pc = 0x116508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x11650c: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x11650cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x116510: 0x1695818  mult        $t3, $t3, $t1
    ctx->pc = 0x116510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x116514: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x116514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x116518: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x116518u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x11651c: 0x1875824  and         $t3, $t4, $a3
    ctx->pc = 0x11651cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x116520: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x116520u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x116524: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x116524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x116528: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x116528u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x11652c: 0x1892018  mult        $a0, $t4, $t1
    ctx->pc = 0x11652cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x116530: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x116530u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116534: 0x1672024  and         $a0, $t3, $a3
    ctx->pc = 0x116534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x116538: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x116538u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x11653c: 0x1695818  mult        $t3, $t3, $t1
    ctx->pc = 0x11653cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x116540: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x116540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x116544: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x116544u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x116548: 0x1875824  and         $t3, $t4, $a3
    ctx->pc = 0x116548u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x11654c: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x11654cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x116550: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x116550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x116554: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x116554u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x116558: 0x1892018  mult        $a0, $t4, $t1
    ctx->pc = 0x116558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11655c: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x11655cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116560: 0x1672024  and         $a0, $t3, $a3
    ctx->pc = 0x116560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x116564: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x116564u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x116568: 0x1695818  mult        $t3, $t3, $t1
    ctx->pc = 0x116568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x11656c: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x11656cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x116570: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x116570u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x116574: 0x1875824  and         $t3, $t4, $a3
    ctx->pc = 0x116574u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x116578: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x116578u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x11657c: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x11657cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x116580: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x116580u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x116584: 0x1892018  mult        $a0, $t4, $t1
    ctx->pc = 0x116584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x116588: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x116588u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11658c: 0x1672024  and         $a0, $t3, $a3
    ctx->pc = 0x11658cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x116590: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x116590u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
    // 0x116594: 0x1695818  mult        $t3, $t3, $t1
    ctx->pc = 0x116594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x116598: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x116598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x11659c: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x11659cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1165a0: 0x1875824  and         $t3, $t4, $a3
    ctx->pc = 0x1165a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x1165a4: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1165a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1165a8: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x1165a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x1165ac: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x1165acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
    // 0x1165b0: 0x1892018  mult        $a0, $t4, $t1
    ctx->pc = 0x1165b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1165b4: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x1165b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1165b8: 0x1672024  and         $a0, $t3, $a3
    ctx->pc = 0x1165b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1165bc: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x1165bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
    // 0x1165c0: 0x1695818  mult        $t3, $t3, $t1
    ctx->pc = 0x1165c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1165c4: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x1165c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1165c8: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x1165c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1165cc: 0x1875824  and         $t3, $t4, $a3
    ctx->pc = 0x1165ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x1165d0: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1165d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1165d4: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x1165d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x1165d8: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x1165d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
    // 0x1165dc: 0x1892018  mult        $a0, $t4, $t1
    ctx->pc = 0x1165dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1165e0: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x1165e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1165e4: 0x1672024  and         $a0, $t3, $a3
    ctx->pc = 0x1165e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x1165e8: 0xad040018  sw          $a0, 0x18($t0)
    ctx->pc = 0x1165e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 4));
    // 0x1165ec: 0x1695818  mult        $t3, $t3, $t1
    ctx->pc = 0x1165ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1165f0: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x1165f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1165f4: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x1165f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1165f8: 0x1875824  and         $t3, $t4, $a3
    ctx->pc = 0x1165f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x1165fc: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1165fcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x116600: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x116600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x116604: 0xad040018  sw          $a0, 0x18($t0)
    ctx->pc = 0x116604u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 4));
    // 0x116608: 0x1892018  mult        $a0, $t4, $t1
    ctx->pc = 0x116608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11660c: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x11660cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116610: 0x1672024  and         $a0, $t3, $a3
    ctx->pc = 0x116610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x116614: 0xad04001c  sw          $a0, 0x1C($t0)
    ctx->pc = 0x116614u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
    // 0x116618: 0x1695818  mult        $t3, $t3, $t1
    ctx->pc = 0x116618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x11661c: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x11661cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x116620: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x116620u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x116624: 0x1875824  and         $t3, $t4, $a3
    ctx->pc = 0x116624u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x116628: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x116628u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x11662c: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x11662cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x116630: 0xad04001c  sw          $a0, 0x1C($t0)
    ctx->pc = 0x116630u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
    // 0x116634: 0x1892018  mult        $a0, $t4, $t1
    ctx->pc = 0x116634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x116638: 0x1540ffa4  bnez        $t2, . + 4 + (-0x5C << 2)
    ctx->pc = 0x116638u;
    {
        const bool branch_taken_0x116638 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x11663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116638u;
        // 0x11663c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116638) {
            ctx->pc = 0x1164CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1164cc;
        }
    }
    ctx->pc = 0x116640u;
    // 0x116640: 0x24030270  addiu       $v1, $zero, 0x270
    ctx->pc = 0x116640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x116644: 0x3e00008  jr          $ra
    ctx->pc = 0x116644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116644u;
        // 0x116648: 0xaf838010  sw          $v1, -0x7FF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11664Cu;
}
