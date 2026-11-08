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

// Function: entry_001931a0
// Address: 0x1931a0 - 0x1931b8
void entry_001931a0_0x1931a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001931a0_0x1931a0");
#endif

    switch (ctx->pc) {
        case 0x1931b0u: goto label_1931b0;
        default: break;
    }

    ctx->pc = 0x1931a0u;

label_1931a0:
    // 0x1931a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1931a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1931a4:
    // 0x1931a4: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1931a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1931a8:
    // 0x1931a8: 0x320f809  jalr        $t9
label_1931ac:
    if (ctx->pc == 0x1931ACu) {
        ctx->pc = 0x1931ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931A8u;
        // 0x1931ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931B0u;
        goto label_1931b0;
    }
    ctx->pc = 0x1931A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1931B0u);
        ctx->pc = 0x1931ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931A8u;
        // 0x1931ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931A8u, 0x1931B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1931B0u;
label_1931b0:
    // 0x1931b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1931b4:
    if (ctx->pc == 0x1931B4u) {
        ctx->pc = 0x1931B8u;
        goto label_fallthrough_0x1931b0;
    }
    ctx->pc = 0x1931B0u;
    {
        const bool branch_taken_0x1931b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1931b0) {
            ctx->pc = 0x1931C8u;
            return;
        }
    }
label_fallthrough_0x1931b0:
    ctx->pc = 0x1931B8u;
}
