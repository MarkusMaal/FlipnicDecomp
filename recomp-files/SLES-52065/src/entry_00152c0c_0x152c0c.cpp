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

// Function: entry_00152c0c
// Address: 0x152c0c - 0x152c1c
void entry_00152c0c_0x152c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152c0c_0x152c0c");
#endif

    ctx->pc = 0x152c0cu;

    // 0x152c0c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x152c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x152c10: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x152c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x152c14: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x152C14u;
    {
        const bool branch_taken_0x152c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C14u;
        // 0x152c18: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c14) {
            ctx->pc = 0x152BD4u;
            return;
        }
    }
    ctx->pc = 0x152C1Cu;
}
