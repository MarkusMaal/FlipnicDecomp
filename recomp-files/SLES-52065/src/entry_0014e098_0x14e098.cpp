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

// Function: entry_0014e098
// Address: 0x14e098 - 0x14e0c8
void entry_0014e098_0x14e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e098_0x14e098");
#endif

    ctx->pc = 0x14e098u;

    // 0x14e098: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x14e098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x14e09c: 0x2952023  subu        $a0, $s4, $s5
    ctx->pc = 0x14e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x14e0a0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x14e0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x14e0a4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14e0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14e0a8: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x14e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14e0ac: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x14e0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e0b0: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x14e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14e0b4: 0x2010  mfhi        $a0
    ctx->pc = 0x14e0b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x14e0b8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x14e0b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x14e0bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14e0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14e0c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e0c4: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x14e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x14e0c8u;
}
