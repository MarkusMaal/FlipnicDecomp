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

// Function: entry_0012b2a4
// Address: 0x12b2a4 - 0x12b2c0
void entry_0012b2a4_0x12b2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b2a4_0x12b2a4");
#endif

    ctx->pc = 0x12b2a4u;

label_12b2a4:
    // 0x12b2a4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x12b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_12b2a8:
    // 0x12b2a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_12b2ac:
    if (ctx->pc == 0x12B2ACu) {
        ctx->pc = 0x12B2B0u;
        goto label_12b2b0;
    }
    ctx->pc = 0x12B2A8u;
    {
        const bool branch_taken_0x12b2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b2a8) {
            ctx->pc = 0x12B2C0u;
            return;
        }
    }
    ctx->pc = 0x12B2B0u;
label_12b2b0:
    // 0x12b2b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12b2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12b2b4:
    // 0x12b2b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x12b2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_12b2b8:
    // 0x12b2b8: 0x320f809  jalr        $t9
label_12b2bc:
    if (ctx->pc == 0x12B2BCu) {
        ctx->pc = 0x12B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2B8u;
        // 0x12b2bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B2C0u;
        goto label_fallthrough_0x12b2b8;
    }
    ctx->pc = 0x12B2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B2C0u);
        ctx->pc = 0x12B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B2B8u;
        // 0x12b2bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B2B8u, 0x12B2C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x12b2b8:
    ctx->pc = 0x12B2C0u;
}
