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

// Function: FUN_001be410
// Address: 0x1be410 - 0x1be488
void FUN_001be410_0x1be410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be410_0x1be410");
#endif

    switch (ctx->pc) {
        case 0x1be410u: goto label_1be410;
        case 0x1be414u: goto label_1be414;
        case 0x1be418u: goto label_1be418;
        case 0x1be41cu: goto label_1be41c;
        case 0x1be420u: goto label_1be420;
        case 0x1be424u: goto label_1be424;
        case 0x1be428u: goto label_1be428;
        case 0x1be42cu: goto label_1be42c;
        case 0x1be430u: goto label_1be430;
        case 0x1be434u: goto label_1be434;
        case 0x1be438u: goto label_1be438;
        case 0x1be43cu: goto label_1be43c;
        case 0x1be440u: goto label_1be440;
        case 0x1be444u: goto label_1be444;
        case 0x1be448u: goto label_1be448;
        case 0x1be44cu: goto label_1be44c;
        case 0x1be450u: goto label_1be450;
        case 0x1be454u: goto label_1be454;
        case 0x1be458u: goto label_1be458;
        case 0x1be45cu: goto label_1be45c;
        case 0x1be460u: goto label_1be460;
        case 0x1be464u: goto label_1be464;
        case 0x1be468u: goto label_1be468;
        case 0x1be46cu: goto label_1be46c;
        case 0x1be470u: goto label_1be470;
        case 0x1be474u: goto label_1be474;
        case 0x1be478u: goto label_1be478;
        case 0x1be47cu: goto label_1be47c;
        case 0x1be480u: goto label_1be480;
        case 0x1be484u: goto label_1be484;
        default: break;
    }

    ctx->pc = 0x1be410u;

label_1be410:
    // 0x1be410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1be410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1be414:
    // 0x1be414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1be414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1be418:
    // 0x1be418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1be41c:
    // 0x1be41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1be420:
    // 0x1be420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1be424:
    // 0x1be424: 0xc06f928  jal         func_1BE4A0
label_1be428:
    if (ctx->pc == 0x1BE428u) {
        ctx->pc = 0x1BE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE424u;
        // 0x1be428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE42Cu;
        goto label_1be42c;
    }
    ctx->pc = 0x1BE424u;
    SET_GPR_U32(ctx, 31, 0x1BE42Cu);
    ctx->pc = 0x1BE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE424u;
    // 0x1be428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4A0u, 0x1BE424u, 0x1BE42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE42Cu;
label_1be42c:
    // 0x1be42c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1be430:
    // 0x1be430: 0x10000008  b           . + 4 + (0x8 << 2)
label_1be434:
    if (ctx->pc == 0x1BE434u) {
        ctx->pc = 0x1BE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE430u;
        // 0x1be434: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE438u;
        goto label_1be438;
    }
    ctx->pc = 0x1BE430u;
    {
        const bool branch_taken_0x1be430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE430u;
        // 0x1be434: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be430) {
            ctx->pc = 0x1BE454u;
            goto label_1be454;
        }
    }
    ctx->pc = 0x1BE438u;
label_1be438:
    // 0x1be438: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1be438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1be43c:
    // 0x1be43c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1be43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1be440:
    // 0x1be440: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1be440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1be444:
    // 0x1be444: 0x320f809  jalr        $t9
label_1be448:
    if (ctx->pc == 0x1BE448u) {
        ctx->pc = 0x1BE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE444u;
        // 0x1be448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE44Cu;
        goto label_1be44c;
    }
    ctx->pc = 0x1BE444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1BE44Cu);
        ctx->pc = 0x1BE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE444u;
        // 0x1be448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE444u, 0x1BE44Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BE44Cu;
label_1be44c:
    // 0x1be44c: 0xc048974  jal         func_1225D0
label_1be450:
    if (ctx->pc == 0x1BE450u) {
        ctx->pc = 0x1BE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE44Cu;
        // 0x1be450: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE454u;
        goto label_1be454;
    }
    ctx->pc = 0x1BE44Cu;
    SET_GPR_U32(ctx, 31, 0x1BE454u);
    ctx->pc = 0x1BE450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE44Cu;
    // 0x1be450: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1BE44Cu, 0x1BE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE454u;
label_1be454:
    // 0x1be454: 0x0  nop
    ctx->pc = 0x1be454u;
    // NOP
label_1be458:
    // 0x1be458: 0xc06f924  jal         func_1BE490
label_1be45c:
    if (ctx->pc == 0x1BE45Cu) {
        ctx->pc = 0x1BE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE458u;
        // 0x1be45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE460u;
        goto label_1be460;
    }
    ctx->pc = 0x1BE458u;
    SET_GPR_U32(ctx, 31, 0x1BE460u);
    ctx->pc = 0x1BE45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE458u;
    // 0x1be45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE490u, 0x1BE458u, 0x1BE460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE460u;
label_1be460:
    // 0x1be460: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1be460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1be464:
    // 0x1be464: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
label_1be468:
    if (ctx->pc == 0x1BE468u) {
        ctx->pc = 0x1BE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE464u;
        // 0x1be468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE46Cu;
        goto label_1be46c;
    }
    ctx->pc = 0x1BE464u;
    {
        const bool branch_taken_0x1be464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE464u;
        // 0x1be468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be464) {
            ctx->pc = 0x1BE438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be438;
        }
    }
    ctx->pc = 0x1BE46Cu;
label_1be46c:
    // 0x1be46c: 0xc06f9a4  jal         func_1BE690
label_1be470:
    if (ctx->pc == 0x1BE470u) {
        ctx->pc = 0x1BE474u;
        goto label_1be474;
    }
    ctx->pc = 0x1BE46Cu;
    SET_GPR_U32(ctx, 31, 0x1BE474u);
    ctx->pc = 0x1BE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE690u, 0x1BE46Cu, 0x1BE474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE474u;
label_1be474:
    // 0x1be474: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1be474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1be478:
    // 0x1be478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1be47c:
    // 0x1be47c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1be480:
    // 0x1be480: 0x3e00008  jr          $ra
label_1be484:
    if (ctx->pc == 0x1BE484u) {
        ctx->pc = 0x1BE484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE480u;
        // 0x1be484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE488u;
        goto label_fallthrough_0x1be480;
    }
    ctx->pc = 0x1BE480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE480u;
        // 0x1be484: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1be480:
    ctx->pc = 0x1BE488u;
}
