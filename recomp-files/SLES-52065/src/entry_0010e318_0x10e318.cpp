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

// Function: entry_0010e318
// Address: 0x10e318 - 0x10e328
void entry_0010e318_0x10e318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e318_0x10e318");
#endif

    ctx->pc = 0x10e318u;

    // 0x10e318: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E318u;
    {
        const bool branch_taken_0x10e318 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10e318) {
            ctx->pc = 0x10E328u;
            return;
        }
    }
    ctx->pc = 0x10E320u;
    // 0x10e320: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10E320u;
    {
        const bool branch_taken_0x10e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E320u;
        // 0x10e324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e320) {
            ctx->pc = 0x10E34Cu;
            return;
        }
    }
    ctx->pc = 0x10E328u;
}
