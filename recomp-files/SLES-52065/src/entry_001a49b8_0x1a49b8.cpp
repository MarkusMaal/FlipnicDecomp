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

// Function: entry_001a49b8
// Address: 0x1a49b8 - 0x1a49dc
void entry_001a49b8_0x1a49b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a49b8_0x1a49b8");
#endif

    ctx->pc = 0x1a49b8u;

label_1a49b8:
    // 0x1a49b8: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1a49b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_1a49bc:
    // 0x1a49bc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1a49bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a49c0:
    // 0x1a49c0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1a49c4:
    if (ctx->pc == 0x1A49C4u) {
        ctx->pc = 0x1A49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49C0u;
        // 0x1a49c4: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A49C8u;
        goto label_1a49c8;
    }
    ctx->pc = 0x1A49C0u;
    {
        const bool branch_taken_0x1a49c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A49C0u;
        // 0x1a49c4: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49c0) {
            ctx->pc = 0x1A4928u;
            return;
        }
    }
    ctx->pc = 0x1A49C8u;
label_1a49c8:
    // 0x1a49c8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a49c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a49cc:
    // 0x1a49cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a49ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a49d0:
    // 0x1a49d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a49d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a49d4:
    // 0x1a49d4: 0x320f809  jalr        $t9
label_1a49d8:
    if (ctx->pc == 0x1A49D8u) {
        ctx->pc = 0x1A49DCu;
        goto label_fallthrough_0x1a49d4;
    }
    ctx->pc = 0x1A49D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A49DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49D4u, 0x1A49DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a49d4:
    ctx->pc = 0x1A49DCu;
}
