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

// Function: entry_001da4e8
// Address: 0x1da4e8 - 0x1da50c
void entry_001da4e8_0x1da4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da4e8_0x1da4e8");
#endif

    ctx->pc = 0x1da4e8u;

    // 0x1da4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4ec: 0x171200  sll         $v0, $s7, 8
    ctx->pc = 0x1da4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 8));
    // 0x1da4f0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1da4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1da4f4: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x1da4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x1da4f8: 0xfe040030  sd          $a0, 0x30($s0)
    ctx->pc = 0x1da4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 4));
    // 0x1da4fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da504: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1da504u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1da508: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1da508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    ctx->pc = 0x1da50cu;
}
