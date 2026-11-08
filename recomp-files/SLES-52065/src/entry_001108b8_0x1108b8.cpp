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

// Function: entry_001108b8
// Address: 0x1108b8 - 0x1108d8
void entry_001108b8_0x1108b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001108b8_0x1108b8");
#endif

    ctx->pc = 0x1108b8u;

    // 0x1108b8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1108b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1108bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1108bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1108c0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1108C0u;
    {
        const bool branch_taken_0x1108c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1108c0) {
            ctx->pc = 0x110874u;
            return;
        }
    }
    ctx->pc = 0x1108C8u;
    // 0x1108c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1108c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1108cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1108ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1108d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1108D0u;
    {
        const bool branch_taken_0x1108d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1108D0u;
        // 0x1108d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1108d0) {
            ctx->pc = 0x110924u;
            return;
        }
    }
    ctx->pc = 0x1108D8u;
}
