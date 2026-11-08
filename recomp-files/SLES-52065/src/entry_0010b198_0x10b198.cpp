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

// Function: entry_0010b198
// Address: 0x10b198 - 0x10b1a8
void entry_0010b198_0x10b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b198_0x10b198");
#endif

    ctx->pc = 0x10b198u;

    // 0x10b198: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B198u;
    {
        const bool branch_taken_0x10b198 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B198u;
        // 0x10b19c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b198) {
            ctx->pc = 0x10B1A8u;
            return;
        }
    }
    ctx->pc = 0x10B1A0u;
    // 0x10b1a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10B1A0u;
    {
        const bool branch_taken_0x10b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b1a0) {
            ctx->pc = 0x10B1CCu;
            return;
        }
    }
    ctx->pc = 0x10B1A8u;
}
