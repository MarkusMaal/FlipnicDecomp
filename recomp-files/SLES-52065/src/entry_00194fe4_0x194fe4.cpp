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

// Function: entry_00194fe4
// Address: 0x194fe4 - 0x19502c
void entry_00194fe4_0x194fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194fe4_0x194fe4");
#endif

    ctx->pc = 0x194fe4u;

    // 0x194fe4: 0x0  nop
    ctx->pc = 0x194fe4u;
    // NOP
    // 0x194fe8: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x194fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x194fec: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x194fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x194ff0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x194ff0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x194ff4: 0x8cc528dc  lw          $a1, 0x28DC($a2)
    ctx->pc = 0x194ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10460)));
    // 0x194ff8: 0x84c328d8  lh          $v1, 0x28D8($a2)
    ctx->pc = 0x194ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10456)));
    // 0x194ffc: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x194ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x195000: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x195000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x195004: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x195004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x195008: 0x3012  mflo        $a2
    ctx->pc = 0x195008u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x19500c: 0xdc832818  ld          $v1, 0x2818($a0)
    ctx->pc = 0x19500cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
    // 0x195010: 0x2810  mfhi        $a1
    ctx->pc = 0x195010u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x195014: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x195014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x195018: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x195018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x19501c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x19501cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x195020: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x195020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x195024: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x195024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x195028: 0xfc832818  sd          $v1, 0x2818($a0)
    ctx->pc = 0x195028u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 10264), GPR_U64(ctx, 3));
    ctx->pc = 0x19502cu;
}
