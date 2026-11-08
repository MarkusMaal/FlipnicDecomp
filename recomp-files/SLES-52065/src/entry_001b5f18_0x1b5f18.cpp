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

// Function: entry_001b5f18
// Address: 0x1b5f18 - 0x1b5f34
void entry_001b5f18_0x1b5f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5f18_0x1b5f18");
#endif

    ctx->pc = 0x1b5f18u;

label_1b5f18:
    // 0x1b5f18: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1b5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1b5f1c:
    // 0x1b5f1c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1b5f20:
    if (ctx->pc == 0x1B5F20u) {
        ctx->pc = 0x1B5F24u;
        goto label_1b5f24;
    }
    ctx->pc = 0x1B5F1Cu;
    {
        const bool branch_taken_0x1b5f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f1c) {
            ctx->pc = 0x1B5F34u;
            return;
        }
    }
    ctx->pc = 0x1B5F24u;
label_1b5f24:
    // 0x1b5f24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b5f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5f28:
    // 0x1b5f28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1b5f2c:
    // 0x1b5f2c: 0x320f809  jalr        $t9
label_1b5f30:
    if (ctx->pc == 0x1B5F30u) {
        ctx->pc = 0x1B5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F2Cu;
        // 0x1b5f30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F34u;
        goto label_fallthrough_0x1b5f2c;
    }
    ctx->pc = 0x1B5F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B5F34u);
        ctx->pc = 0x1B5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F2Cu;
        // 0x1b5f30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F2Cu, 0x1B5F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1b5f2c:
    ctx->pc = 0x1B5F34u;
}
