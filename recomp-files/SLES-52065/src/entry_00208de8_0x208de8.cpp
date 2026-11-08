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

// Function: entry_00208de8
// Address: 0x208de8 - 0x208df8
void entry_00208de8_0x208de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208de8_0x208de8");
#endif

    ctx->pc = 0x208de8u;

    // 0x208de8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208DE8u;
    {
        const bool branch_taken_0x208de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DE8u;
        // 0x208dec: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208de8) {
            ctx->pc = 0x208E04u;
            return;
        }
    }
    ctx->pc = 0x208DF0u;
    // 0x208df0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x208DF0u;
    {
        const bool branch_taken_0x208df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DF0u;
        // 0x208df4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208df0) {
            ctx->pc = 0x208E34u;
            return;
        }
    }
    ctx->pc = 0x208DF8u;
}
