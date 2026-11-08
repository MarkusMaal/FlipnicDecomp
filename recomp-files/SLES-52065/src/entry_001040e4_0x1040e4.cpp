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

// Function: entry_001040e4
// Address: 0x1040e4 - 0x1040f0
void entry_001040e4_0x1040e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001040e4_0x1040e4");
#endif

    ctx->pc = 0x1040e4u;

    // 0x1040e4: 0x1000044c  b           . + 4 + (0x44C << 2)
    ctx->pc = 0x1040E4u;
    {
        const bool branch_taken_0x1040e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040E4u;
        // 0x1040e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040e4) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1040ECu;
    // 0x1040ec: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1040ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->pc = 0x1040f0u;
}
