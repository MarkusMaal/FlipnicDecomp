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

// Function: entry_0010e48c
// Address: 0x10e48c - 0x10e49c
void entry_0010e48c_0x10e48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e48c_0x10e48c");
#endif

    ctx->pc = 0x10e48cu;

    // 0x10e48c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10e490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e494: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x10E494u;
    {
        const bool branch_taken_0x10e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E494u;
        // 0x10e498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e494) {
            ctx->pc = 0x10E504u;
            return;
        }
    }
    ctx->pc = 0x10E49Cu;
}
