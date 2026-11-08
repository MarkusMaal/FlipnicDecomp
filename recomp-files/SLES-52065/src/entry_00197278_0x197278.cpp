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

// Function: entry_00197278
// Address: 0x197278 - 0x197284
void entry_00197278_0x197278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197278_0x197278");
#endif

    ctx->pc = 0x197278u;

    // 0x197278: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x197278u;
    {
        const bool branch_taken_0x197278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197278u;
        // 0x19727c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197278) {
            ctx->pc = 0x1972E0u;
            return;
        }
    }
    ctx->pc = 0x197280u;
    // 0x197280: 0x2b08821  addu        $s1, $s5, $s0
    ctx->pc = 0x197280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x197284u;
}
