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

// Function: entry_001a8f20
// Address: 0x1a8f20 - 0x1a8f3c
void entry_001a8f20_0x1a8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f20_0x1a8f20");
#endif

    ctx->pc = 0x1a8f20u;

    // 0x1a8f20: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x1a8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x1a8f24: 0x8c6206d4  lw          $v0, 0x6D4($v1)
    ctx->pc = 0x1a8f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1748)));
    // 0x1a8f28: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a8f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8f2c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1A8F2Cu;
    {
        const bool branch_taken_0x1a8f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f2c) {
            ctx->pc = 0x1A8E7Cu;
            return;
        }
    }
    ctx->pc = 0x1A8F34u;
    // 0x1a8f34: 0x26b50068  addiu       $s5, $s5, 0x68
    ctx->pc = 0x1a8f34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 104));
    // 0x1a8f38: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1a8f38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x1a8f3cu;
}
