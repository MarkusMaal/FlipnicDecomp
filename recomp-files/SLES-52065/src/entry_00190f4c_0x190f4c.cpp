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

// Function: entry_00190f4c
// Address: 0x190f4c - 0x190f58
void entry_00190f4c_0x190f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190f4c_0x190f4c");
#endif

    ctx->pc = 0x190f4cu;

    // 0x190f4c: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x190F4Cu;
    {
        const bool branch_taken_0x190f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F4Cu;
        // 0x190f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f4c) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190F54u;
    // 0x190f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x190f58u;
}
