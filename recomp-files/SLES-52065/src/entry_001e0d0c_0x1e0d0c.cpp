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

// Function: entry_001e0d0c
// Address: 0x1e0d0c - 0x1e0d28
void entry_001e0d0c_0x1e0d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d0c_0x1e0d0c");
#endif

    ctx->pc = 0x1e0d0cu;

    // 0x1e0d0c: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x1e0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1e0d10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0d14: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D14u;
    {
        const bool branch_taken_0x1e0d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D14u;
        // 0x1e0d18: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d14) {
            ctx->pc = 0x1E0D28u;
            return;
        }
    }
    ctx->pc = 0x1E0D1Cu;
    // 0x1e0d1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D1Cu;
    {
        const bool branch_taken_0x1e0d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D1Cu;
        // 0x1e0d20: 0xacc20040  sw          $v0, 0x40($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d1c) {
            ctx->pc = 0x1E0D2Cu;
            return;
        }
    }
    ctx->pc = 0x1E0D24u;
    // 0x1e0d24: 0x0  nop
    ctx->pc = 0x1e0d24u;
    // NOP
    ctx->pc = 0x1e0d28u;
}
