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

// Function: entry_001e55f0
// Address: 0x1e55f0 - 0x1e5648
void entry_001e55f0_0x1e55f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e55f0_0x1e55f0");
#endif

    switch (ctx->pc) {
        case 0x1e5610u: goto label_1e5610;
        default: break;
    }

    ctx->pc = 0x1e55f0u;

label_1e55f0:
    // 0x1e55f0: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x1e55f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_1e55f4:
    // 0x1e55f4: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x1e55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
label_1e55f8:
    // 0x1e55f8: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x1e55f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1e55fc:
    // 0x1e55fc: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1e55fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1e5600:
    // 0x1e5600: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5604:
    // 0x1e5604: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1e5604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1e5608:
    // 0x1e5608: 0x320f809  jalr        $t9
label_1e560c:
    if (ctx->pc == 0x1E560Cu) {
        ctx->pc = 0x1E560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5608u;
        // 0x1e560c: 0x27a8004c  addiu       $t0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5610u;
        goto label_1e5610;
    }
    ctx->pc = 0x1E5608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5610u);
        ctx->pc = 0x1E560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5608u;
        // 0x1e560c: 0x27a8004c  addiu       $t0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5608u, 0x1E5610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5610u;
label_1e5610:
    // 0x1e5610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5614:
    // 0x1e5614: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e5614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e5618:
    // 0x1e5618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e561c:
    // 0x1e561c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1e5620:
    if (ctx->pc == 0x1E5620u) {
        ctx->pc = 0x1E5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E561Cu;
        // 0x1e5620: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5624u;
        goto label_1e5624;
    }
    ctx->pc = 0x1E561Cu;
    {
        const bool branch_taken_0x1e561c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E561Cu;
        // 0x1e5620: 0x27b10048  addiu       $s1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e561c) {
            ctx->pc = 0x1E5650u;
            return;
        }
    }
    ctx->pc = 0x1E5624u;
label_1e5624:
    // 0x1e5624: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e5628:
    if (ctx->pc == 0x1E5628u) {
        ctx->pc = 0x1E5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5624u;
        // 0x1e5628: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E562Cu;
        goto label_1e562c;
    }
    ctx->pc = 0x1E5624u;
    {
        const bool branch_taken_0x1e5624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5624u;
        // 0x1e5628: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5624) {
            ctx->pc = 0x1E5650u;
            return;
        }
    }
    ctx->pc = 0x1E562Cu;
label_1e562c:
    // 0x1e562c: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_1e5630:
    if (ctx->pc == 0x1E5630u) {
        ctx->pc = 0x1E5634u;
        goto label_1e5634;
    }
    ctx->pc = 0x1E562Cu;
    {
        const bool branch_taken_0x1e562c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e562c) {
            ctx->pc = 0x1E573Cu;
            return;
        }
    }
    ctx->pc = 0x1E5634u;
label_1e5634:
    // 0x1e5634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5638:
    // 0x1e5638: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e563c:
    if (ctx->pc == 0x1E563Cu) {
        ctx->pc = 0x1E5640u;
        goto label_1e5640;
    }
    ctx->pc = 0x1E5638u;
    {
        const bool branch_taken_0x1e5638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5638) {
            ctx->pc = 0x1E5648u;
            return;
        }
    }
    ctx->pc = 0x1E5640u;
label_1e5640:
    // 0x1e5640: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e5644:
    if (ctx->pc == 0x1E5644u) {
        ctx->pc = 0x1E5648u;
        goto label_fallthrough_0x1e5640;
    }
    ctx->pc = 0x1E5640u;
    {
        const bool branch_taken_0x1e5640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5640) {
            ctx->pc = 0x1E573Cu;
            return;
        }
    }
label_fallthrough_0x1e5640:
    ctx->pc = 0x1E5648u;
}
