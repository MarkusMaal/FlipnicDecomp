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

// Function: entry_001fcfc8
// Address: 0x1fcfc8 - 0x1fcfd8
void entry_001fcfc8_0x1fcfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcfc8_0x1fcfc8");
#endif

    ctx->pc = 0x1fcfc8u;

    // 0x1fcfc8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1fcfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1fcfcc: 0x49827  nor         $s3, $zero, $a0
    ctx->pc = 0x1fcfccu;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1fcfd0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1FCFD0u;
    {
        const bool branch_taken_0x1fcfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFD0u;
        // 0x1fcfd4: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfd0) {
            ctx->pc = 0x1FD340u;
            return;
        }
    }
    ctx->pc = 0x1FCFD8u;
}
