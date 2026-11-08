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

// Function: entry_00105194
// Address: 0x105194 - 0x1051a0
void entry_00105194_0x105194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105194_0x105194");
#endif

    ctx->pc = 0x105194u;

    // 0x105194: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x105194u;
    {
        const bool branch_taken_0x105194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105194u;
        // 0x105198: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105194) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x10519Cu;
    // 0x10519c: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x10519cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    ctx->pc = 0x1051a0u;
}
