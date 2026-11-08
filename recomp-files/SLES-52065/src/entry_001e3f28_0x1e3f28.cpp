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

// Function: entry_001e3f28
// Address: 0x1e3f28 - 0x1e3f40
void entry_001e3f28_0x1e3f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3f28_0x1e3f28");
#endif

    ctx->pc = 0x1e3f28u;

    // 0x1e3f28: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1e3f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3f2c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e3f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3F30u;
    {
        const bool branch_taken_0x1e3f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F30u;
        // 0x1e3f34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f30) {
            ctx->pc = 0x1E3F40u;
            return;
        }
    }
    ctx->pc = 0x1E3F38u;
    // 0x1e3f38: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E3F38u;
    {
        const bool branch_taken_0x1e3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f38) {
            ctx->pc = 0x1E3FDCu;
            return;
        }
    }
    ctx->pc = 0x1E3F40u;
}
