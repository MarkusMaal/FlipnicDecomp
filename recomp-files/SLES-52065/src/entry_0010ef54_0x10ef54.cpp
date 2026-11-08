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

// Function: entry_0010ef54
// Address: 0x10ef54 - 0x10ef80
void entry_0010ef54_0x10ef54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ef54_0x10ef54");
#endif

    switch (ctx->pc) {
        case 0x10ef7cu: goto label_10ef7c;
        default: break;
    }

    ctx->pc = 0x10ef54u;

label_10ef54:
    // 0x10ef54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10ef58:
    // 0x10ef58: 0x84420032  lh          $v0, 0x32($v0)
    ctx->pc = 0x10ef58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_10ef5c:
    // 0x10ef5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10ef60:
    if (ctx->pc == 0x10EF60u) {
        ctx->pc = 0x10EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF5Cu;
        // 0x10ef60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF64u;
        goto label_10ef64;
    }
    ctx->pc = 0x10EF5Cu;
    {
        const bool branch_taken_0x10ef5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF5Cu;
        // 0x10ef60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef5c) {
            ctx->pc = 0x10EF80u;
            return;
        }
    }
    ctx->pc = 0x10EF64u;
label_10ef64:
    // 0x10ef64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10ef64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10ef68:
    // 0x10ef68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ef6c:
    // 0x10ef6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ef70:
    // 0x10ef70: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x10ef70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_10ef74:
    // 0x10ef74: 0x320f809  jalr        $t9
label_10ef78:
    if (ctx->pc == 0x10EF78u) {
        ctx->pc = 0x10EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF74u;
        // 0x10ef78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF7Cu;
        goto label_10ef7c;
    }
    ctx->pc = 0x10EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EF7Cu);
        ctx->pc = 0x10EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF74u;
        // 0x10ef78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF74u, 0x10EF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EF7Cu;
label_10ef7c:
    // 0x10ef7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ef7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ef80u;
}
