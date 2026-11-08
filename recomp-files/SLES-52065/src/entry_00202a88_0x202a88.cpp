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

// Function: entry_00202a88
// Address: 0x202a88 - 0x202ab8
void entry_00202a88_0x202a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202a88_0x202a88");
#endif

    switch (ctx->pc) {
        case 0x202a9cu: goto label_202a9c;
        default: break;
    }

    ctx->pc = 0x202a88u;

    // 0x202a88: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x202a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a8c: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x202a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202a90: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x202a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a94: 0xc07ff1c  jal         func_1FFC70
    ctx->pc = 0x202A94u;
    SET_GPR_U32(ctx, 31, 0x202A9Cu);
    ctx->pc = 0x202A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A94u;
    // 0x202a98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFC70u, 0x202A94u, 0x202A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A9Cu;
label_202a9c:
    // 0x202a9c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x202a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x202aa0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x202aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x202aa4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x202aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x202aa8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x202aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x202aac: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x202AACu;
    {
        const bool branch_taken_0x202aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AACu;
        // 0x202ab0: 0xafa60044  sw          $a2, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202aac) {
            ctx->pc = 0x202ED4u;
            return;
        }
    }
    ctx->pc = 0x202AB4u;
    // 0x202ab4: 0x0  nop
    ctx->pc = 0x202ab4u;
    // NOP
    ctx->pc = 0x202ab8u;
}
