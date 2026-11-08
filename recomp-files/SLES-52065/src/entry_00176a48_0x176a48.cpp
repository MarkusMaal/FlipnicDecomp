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

// Function: entry_00176a48
// Address: 0x176a48 - 0x176a58
void entry_00176a48_0x176a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176a48_0x176a48");
#endif

    ctx->pc = 0x176a48u;

    // 0x176a48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176A48u;
    {
        const bool branch_taken_0x176a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176a48) {
            ctx->pc = 0x176A58u;
            return;
        }
    }
    ctx->pc = 0x176A50u;
    // 0x176a50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176A50u;
    {
        const bool branch_taken_0x176a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A50u;
        // 0x176a54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176a50) {
            ctx->pc = 0x176A5Cu;
            return;
        }
    }
    ctx->pc = 0x176A58u;
}
