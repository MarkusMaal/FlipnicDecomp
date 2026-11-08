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

// Function: entry_00201564
// Address: 0x201564 - 0x20156c
void entry_00201564_0x201564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201564_0x201564");
#endif

    ctx->pc = 0x201564u;

    // 0x201564: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x201564u;
    {
        const bool branch_taken_0x201564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201564u;
        // 0x201568: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201564) {
            ctx->pc = 0x20157Cu;
            return;
        }
    }
    ctx->pc = 0x20156Cu;
}
