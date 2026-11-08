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

// Function: entry_00104fa4
// Address: 0x104fa4 - 0x104fb0
void entry_00104fa4_0x104fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104fa4_0x104fa4");
#endif

    ctx->pc = 0x104fa4u;

    // 0x104fa4: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x104FA4u;
    {
        const bool branch_taken_0x104fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FA4u;
        // 0x104fa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fa4) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x104FACu;
    // 0x104fac: 0x24042320  addiu       $a0, $zero, 0x2320
    ctx->pc = 0x104facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8992));
    ctx->pc = 0x104fb0u;
}
