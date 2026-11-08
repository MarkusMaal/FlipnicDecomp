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

// Function: entry_001697bc
// Address: 0x1697bc - 0x1697cc
void entry_001697bc_0x1697bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001697bc_0x1697bc");
#endif

    ctx->pc = 0x1697bcu;

    // 0x1697bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1697BCu;
    {
        const bool branch_taken_0x1697bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1697C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697BCu;
        // 0x1697c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697bc) {
            ctx->pc = 0x1697CCu;
            return;
        }
    }
    ctx->pc = 0x1697C4u;
    // 0x1697c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1697C4u;
    {
        const bool branch_taken_0x1697c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697c4) {
            ctx->pc = 0x1697F0u;
            return;
        }
    }
    ctx->pc = 0x1697CCu;
}
