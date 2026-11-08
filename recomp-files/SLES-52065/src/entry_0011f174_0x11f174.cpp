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

// Function: entry_0011f174
// Address: 0x11f174 - 0x11f1a8
void entry_0011f174_0x11f174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f174_0x11f174");
#endif

    ctx->pc = 0x11f174u;

label_11f174:
    // 0x11f174: 0x0  nop
    ctx->pc = 0x11f174u;
    // NOP
label_11f178:
    // 0x11f178: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x11f178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_11f17c:
    // 0x11f17c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11f180:
    // 0x11f180: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x11f180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_11f184:
    // 0x11f184: 0x8c680044  lw          $t0, 0x44($v1)
    ctx->pc = 0x11f184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_11f188:
    // 0x11f188: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
label_11f18c:
    if (ctx->pc == 0x11F18Cu) {
        ctx->pc = 0x11F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F188u;
        // 0x11f18c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F190u;
        goto label_11f190;
    }
    ctx->pc = 0x11F188u;
    {
        const bool branch_taken_0x11f188 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F188u;
        // 0x11f18c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f188) {
            ctx->pc = 0x11F1A8u;
            return;
        }
    }
    ctx->pc = 0x11F190u;
label_11f190:
    // 0x11f190: 0x1aa00005  blez        $s5, . + 4 + (0x5 << 2)
label_11f194:
    if (ctx->pc == 0x11F194u) {
        ctx->pc = 0x11F198u;
        goto label_11f198;
    }
    ctx->pc = 0x11F190u;
    {
        const bool branch_taken_0x11f190 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x11f190) {
            ctx->pc = 0x11F1A8u;
            return;
        }
    }
    ctx->pc = 0x11F198u;
label_11f198:
    // 0x11f198: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x11f198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_11f19c:
    // 0x11f19c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11f1a0:
    // 0x11f1a0: 0x100f809  jalr        $t0
label_11f1a4:
    if (ctx->pc == 0x11F1A4u) {
        ctx->pc = 0x11F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1A0u;
        // 0x11f1a4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1A8u;
        goto label_fallthrough_0x11f1a0;
    }
    ctx->pc = 0x11F1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x11F1A8u);
        ctx->pc = 0x11F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1A0u;
        // 0x11f1a4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F1A0u, 0x11F1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x11f1a0:
    ctx->pc = 0x11F1A8u;
}
