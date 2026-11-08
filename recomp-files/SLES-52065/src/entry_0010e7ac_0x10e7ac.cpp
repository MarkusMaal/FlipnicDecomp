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

// Function: entry_0010e7ac
// Address: 0x10e7ac - 0x10e7b8
void entry_0010e7ac_0x10e7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e7ac_0x10e7ac");
#endif

    ctx->pc = 0x10e7acu;

    // 0x10e7ac: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10e7b0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x10E7B0u;
    {
        const bool branch_taken_0x10e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7B0u;
        // 0x10e7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7b0) {
            ctx->pc = 0x10E828u;
            return;
        }
    }
    ctx->pc = 0x10E7B8u;
}
