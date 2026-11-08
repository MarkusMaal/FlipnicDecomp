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

// Function: entry_001a05b0
// Address: 0x1a05b0 - 0x1a05e0
void entry_001a05b0_0x1a05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a05b0_0x1a05b0");
#endif

    switch (ctx->pc) {
        case 0x1a05c4u: goto label_1a05c4;
        case 0x1a05d8u: goto label_1a05d8;
        default: break;
    }

    ctx->pc = 0x1a05b0u;

label_1a05b0:
    // 0x1a05b0: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a05b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a05b4:
    // 0x1a05b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a05b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a05b8:
    // 0x1a05b8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a05b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a05bc:
    // 0x1a05bc: 0x320f809  jalr        $t9
label_1a05c0:
    if (ctx->pc == 0x1A05C0u) {
        ctx->pc = 0x1A05C4u;
        goto label_1a05c4;
    }
    ctx->pc = 0x1A05BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A05C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A05BCu, 0x1A05C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A05C4u;
label_1a05c4:
    // 0x1a05c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a05c8:
    // 0x1a05c8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1a05cc:
    if (ctx->pc == 0x1A05CCu) {
        ctx->pc = 0x1A05D0u;
        goto label_1a05d0;
    }
    ctx->pc = 0x1A05C8u;
    {
        const bool branch_taken_0x1a05c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a05c8) {
            ctx->pc = 0x1A05E0u;
            return;
        }
    }
    ctx->pc = 0x1A05D0u;
label_1a05d0:
    // 0x1a05d0: 0xc063e14  jal         func_18F850
label_1a05d4:
    if (ctx->pc == 0x1A05D4u) {
        ctx->pc = 0x1A05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05D0u;
        // 0x1a05d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05D8u;
        goto label_1a05d8;
    }
    ctx->pc = 0x1A05D0u;
    SET_GPR_U32(ctx, 31, 0x1A05D8u);
    ctx->pc = 0x1A05D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A05D0u;
    // 0x1a05d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A05D0u, 0x1A05D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A05D8u;
label_1a05d8:
    // 0x1a05d8: 0x10000098  b           . + 4 + (0x98 << 2)
label_1a05dc:
    if (ctx->pc == 0x1A05DCu) {
        ctx->pc = 0x1A05E0u;
        goto label_fallthrough_0x1a05d8;
    }
    ctx->pc = 0x1A05D8u;
    {
        const bool branch_taken_0x1a05d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05d8) {
            ctx->pc = 0x1A083Cu;
            return;
        }
    }
label_fallthrough_0x1a05d8:
    ctx->pc = 0x1A05E0u;
}
