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

// Function: entry_00203f1c
// Address: 0x203f1c - 0x203f28
void entry_00203f1c_0x203f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f1c_0x203f1c");
#endif

    ctx->pc = 0x203f1cu;

    // 0x203f1c: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x203f1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203f20: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x203F20u;
    {
        const bool branch_taken_0x203f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F20u;
        // 0x203f24: 0x245351a0  addiu       $s3, $v0, 0x51A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f20) {
            ctx->pc = 0x204378u;
            return;
        }
    }
    ctx->pc = 0x203F28u;
}
