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

// Function: entry_001b4a18
// Address: 0x1b4a18 - 0x1b4a38
void entry_001b4a18_0x1b4a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4a18_0x1b4a18");
#endif

    ctx->pc = 0x1b4a18u;

    // 0x1b4a18: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1b4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b4a1c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b4a20: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1b4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4a24: 0x4217c  dsll32      $a0, $a0, 5
    ctx->pc = 0x1b4a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 5));
    // 0x1b4a28: 0x4217e  dsrl32      $a0, $a0, 5
    ctx->pc = 0x1b4a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 5));
    // 0x1b4a2c: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x1b4a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x1b4a30: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1b4a30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4a34: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1b4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x1b4a38u;
}
