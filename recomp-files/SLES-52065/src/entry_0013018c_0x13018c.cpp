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

// Function: entry_0013018c
// Address: 0x13018c - 0x1301c8
void entry_0013018c_0x13018c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013018c_0x13018c");
#endif

    switch (ctx->pc) {
        case 0x1301a8u: goto label_1301a8;
        case 0x1301bcu: goto label_1301bc;
        default: break;
    }

    ctx->pc = 0x13018cu;

    // 0x13018c: 0x8f908580  lw          $s0, -0x7A80($gp)
    ctx->pc = 0x13018cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935936)));
    // 0x130190: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x130190u;
    {
        const bool branch_taken_0x130190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130190) {
            ctx->pc = 0x1301D4u;
            return;
        }
    }
    ctx->pc = 0x130198u;
    // 0x130198: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x130198u;
    {
        const bool branch_taken_0x130198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130198u;
        // 0x13019c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130198) {
            ctx->pc = 0x1301CCu;
            return;
        }
    }
    ctx->pc = 0x1301A0u;
    // 0x1301a0: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x1301A0u;
    SET_GPR_U32(ctx, 31, 0x1301A8u);
    ctx->pc = 0x1301A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301A0u;
    // 0x1301a4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x1301A0u, 0x1301A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301A8u;
label_1301a8:
    // 0x1301a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1301a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1301ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1301ACu;
    {
        const bool branch_taken_0x1301ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301ACu;
        // 0x1301b0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301ac) {
            ctx->pc = 0x1301C8u;
            return;
        }
    }
    ctx->pc = 0x1301B4u;
    // 0x1301b4: 0xc04c0a4  jal         func_130290
    ctx->pc = 0x1301B4u;
    SET_GPR_U32(ctx, 31, 0x1301BCu);
    ctx->pc = 0x130290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130290u, 0x1301B4u, 0x1301BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301BCu;
label_1301bc:
    // 0x1301bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1301bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1301c0: 0xc04c304  jal         func_130C10
    ctx->pc = 0x1301C0u;
    SET_GPR_U32(ctx, 31, 0x1301C8u);
    ctx->pc = 0x1301C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301C0u;
    // 0x1301c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x1301C0u, 0x1301C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301C8u;
}
