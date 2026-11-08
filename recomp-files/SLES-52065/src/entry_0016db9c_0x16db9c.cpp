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

// Function: entry_0016db9c
// Address: 0x16db9c - 0x16dc00
void entry_0016db9c_0x16db9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db9c_0x16db9c");
#endif

    ctx->pc = 0x16db9cu;

    // 0x16db9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dba0: 0x8e242838  lw          $a0, 0x2838($s1)
    ctx->pc = 0x16dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10296)));
    // 0x16dba4: 0x2052818  mult        $a1, $s0, $a1
    ctx->pc = 0x16dba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16dba8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16dbac: 0xae242838  sw          $a0, 0x2838($s1)
    ctx->pc = 0x16dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10296), GPR_U32(ctx, 4));
    // 0x16dbb0: 0xa22328fe  sb          $v1, 0x28FE($s1)
    ctx->pc = 0x16dbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10494), (uint8_t)GPR_U32(ctx, 3));
    // 0x16dbb4: 0x86450068  lh          $a1, 0x68($s2)
    ctx->pc = 0x16dbb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x16dbb8: 0x862328d8  lh          $v1, 0x28D8($s1)
    ctx->pc = 0x16dbb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10456)));
    // 0x16dbbc: 0x8e2428dc  lw          $a0, 0x28DC($s1)
    ctx->pc = 0x16dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10460)));
    // 0x16dbc0: 0x72052818  mult1       $a1, $s0, $a1
    ctx->pc = 0x16dbc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16dbc4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x16dbc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x16dbc8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x16dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16dbcc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x16dbccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x16dbd0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x16dbd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16dbd4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16dbd8: 0x0  nop
    ctx->pc = 0x16dbd8u;
    // NOP
    // 0x16dbdc: 0x3012  mflo        $a2
    ctx->pc = 0x16dbdcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x16dbe0: 0xdc832818  ld          $v1, 0x2818($a0)
    ctx->pc = 0x16dbe0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
    // 0x16dbe4: 0x2810  mfhi        $a1
    ctx->pc = 0x16dbe4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x16dbe8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x16dbe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x16dbec: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x16dbecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x16dbf0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x16dbf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x16dbf4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x16dbf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x16dbf8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x16dbf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x16dbfc: 0xfc832818  sd          $v1, 0x2818($a0)
    ctx->pc = 0x16dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 10264), GPR_U64(ctx, 3));
    ctx->pc = 0x16dc00u;
}
