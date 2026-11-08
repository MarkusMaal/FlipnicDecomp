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

// Function: entry_001fe160
// Address: 0x1fe160 - 0x1fe17c
void entry_001fe160_0x1fe160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe160_0x1fe160");
#endif

    switch (ctx->pc) {
        case 0x1fe178u: goto label_1fe178;
        default: break;
    }

    ctx->pc = 0x1fe160u;

    // 0x1fe160: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE160u;
    {
        const bool branch_taken_0x1fe160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE160u;
        // 0x1fe164: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe160) {
            ctx->pc = 0x1FE17Cu;
            return;
        }
    }
    ctx->pc = 0x1FE168u;
    // 0x1fe168: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE168u;
    {
        const bool branch_taken_0x1fe168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fe168) {
            ctx->pc = 0x1FE16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE168u;
            // 0x1fe16c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE17Cu;
            return;
        }
    }
    ctx->pc = 0x1FE170u;
    // 0x1fe170: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x1FE170u;
    SET_GPR_U32(ctx, 31, 0x1FE178u);
    ctx->pc = 0x1FE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE170u;
    // 0x1fe174: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x1FE170u, 0x1FE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE178u;
label_1fe178:
    // 0x1fe178: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fe178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->pc = 0x1fe17cu;
}
