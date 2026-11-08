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

// Function: entry_00111650
// Address: 0x111650 - 0x111674
void entry_00111650_0x111650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111650_0x111650");
#endif

    ctx->pc = 0x111650u;

    // 0x111650: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x111650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111654: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x111654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111658: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x111658u;
    {
        const bool branch_taken_0x111658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111658) {
            ctx->pc = 0x1115F4u;
            return;
        }
    }
    ctx->pc = 0x111660u;
    // 0x111660: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x111660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x111664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11166c: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x11166Cu;
    {
        const bool branch_taken_0x11166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11166Cu;
        // 0x111670: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11166c) {
            ctx->pc = 0x1119D4u;
            return;
        }
    }
    ctx->pc = 0x111674u;
}
