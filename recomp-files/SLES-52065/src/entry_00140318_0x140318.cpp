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

// Function: entry_00140318
// Address: 0x140318 - 0x140324
void entry_00140318_0x140318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140318_0x140318");
#endif

    ctx->pc = 0x140318u;

    // 0x140318: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x140318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14031c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14031Cu;
    {
        const bool branch_taken_0x14031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14031Cu;
        // 0x140320: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14031c) {
            ctx->pc = 0x14036Cu;
            return;
        }
    }
    ctx->pc = 0x140324u;
}
