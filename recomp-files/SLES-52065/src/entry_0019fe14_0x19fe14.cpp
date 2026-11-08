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

// Function: entry_0019fe14
// Address: 0x19fe14 - 0x19fe28
void entry_0019fe14_0x19fe14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe14_0x19fe14");
#endif

    ctx->pc = 0x19fe14u;

    // 0x19fe14: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x19fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19fe18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fe1c: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x19fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x19fe20: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19FE20u;
    {
        const bool branch_taken_0x19fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE20u;
        // 0x19fe24: 0xac6402dc  sw          $a0, 0x2DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe20) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FE28u;
}
