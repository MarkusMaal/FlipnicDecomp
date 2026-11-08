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

// Function: entry_00152a6c
// Address: 0x152a6c - 0x152a7c
void entry_00152a6c_0x152a6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152a6c_0x152a6c");
#endif

    ctx->pc = 0x152a6cu;

    // 0x152a6c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x152a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x152a70: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x152a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152a74: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x152A74u;
    {
        const bool branch_taken_0x152a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A74u;
        // 0x152a78: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a74) {
            ctx->pc = 0x152A34u;
            return;
        }
    }
    ctx->pc = 0x152A7Cu;
}
