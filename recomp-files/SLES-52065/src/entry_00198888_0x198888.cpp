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

// Function: entry_00198888
// Address: 0x198888 - 0x1988b8
void entry_00198888_0x198888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198888_0x198888");
#endif

    switch (ctx->pc) {
        case 0x1988acu: goto label_1988ac;
        default: break;
    }

    ctx->pc = 0x198888u;

    // 0x198888: 0x8ea20340  lw          $v0, 0x340($s5)
    ctx->pc = 0x198888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x19888c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x19888cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198890: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x198890u;
    {
        const bool branch_taken_0x198890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198890u;
        // 0x198894: 0x2b09021  addu        $s2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198890) {
            ctx->pc = 0x198840u;
            return;
        }
    }
    ctx->pc = 0x198898u;
    // 0x198898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19889c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19889Cu;
    {
        const bool branch_taken_0x19889c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1988A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19889Cu;
        // 0x1988a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19889c) {
            ctx->pc = 0x1988B8u;
            return;
        }
    }
    ctx->pc = 0x1988A4u;
    // 0x1988a4: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1988A4u;
    SET_GPR_U32(ctx, 31, 0x1988ACu);
    ctx->pc = 0x1988A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988A4u;
    // 0x1988a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1988A4u, 0x1988ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988ACu;
label_1988ac:
    // 0x1988ac: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1988ACu;
    {
        const bool branch_taken_0x1988ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1988ac) {
            ctx->pc = 0x198C34u;
            return;
        }
    }
    ctx->pc = 0x1988B4u;
    // 0x1988b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1988b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1988b8u;
}
