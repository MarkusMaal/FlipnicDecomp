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

// Function: entry_001bb0bc
// Address: 0x1bb0bc - 0x1bb0d8
void entry_001bb0bc_0x1bb0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb0bc_0x1bb0bc");
#endif

    ctx->pc = 0x1bb0bcu;

    // 0x1bb0bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bb0c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB0C0u;
    {
        const bool branch_taken_0x1bb0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0c0) {
            ctx->pc = 0x1BB0E0u;
            return;
        }
    }
    ctx->pc = 0x1BB0C8u;
    // 0x1bb0c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB0C8u;
    {
        const bool branch_taken_0x1bb0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0c8) {
            ctx->pc = 0x1BB0D8u;
            return;
        }
    }
    ctx->pc = 0x1BB0D0u;
    // 0x1bb0d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB0D0u;
    {
        const bool branch_taken_0x1bb0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0D0u;
        // 0x1bb0d4: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0d0) {
            ctx->pc = 0x1BB0E0u;
            return;
        }
    }
    ctx->pc = 0x1BB0D8u;
}
