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

// Function: entry_0013b188
// Address: 0x13b188 - 0x13b1b8
void entry_0013b188_0x13b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b188_0x13b188");
#endif

    ctx->pc = 0x13b188u;

    // 0x13b188: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x13b188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x13b18c: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x13b18cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13b190: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x13b190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x13b194: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x13b194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13b198: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x13b198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b19c: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x13b19cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x13b1a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13b1a4: 0x2810  mfhi        $a1
    ctx->pc = 0x13b1a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x13b1a8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x13b1a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x13b1ac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13b1b0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x13b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b1b4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x13b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x13b1b8u;
}
