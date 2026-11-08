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

// Function: FUN_00134420
// Address: 0x134420 - 0x1344c0
void FUN_00134420_0x134420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134420_0x134420");
#endif

    switch (ctx->pc) {
        case 0x134420u: goto label_134420;
        case 0x134424u: goto label_134424;
        case 0x134428u: goto label_134428;
        case 0x13442cu: goto label_13442c;
        case 0x134430u: goto label_134430;
        case 0x134434u: goto label_134434;
        case 0x134438u: goto label_134438;
        case 0x13443cu: goto label_13443c;
        case 0x134440u: goto label_134440;
        case 0x134444u: goto label_134444;
        case 0x134448u: goto label_134448;
        case 0x13444cu: goto label_13444c;
        case 0x134450u: goto label_134450;
        case 0x134454u: goto label_134454;
        case 0x134458u: goto label_134458;
        case 0x13445cu: goto label_13445c;
        case 0x134460u: goto label_134460;
        case 0x134464u: goto label_134464;
        case 0x134468u: goto label_134468;
        case 0x13446cu: goto label_13446c;
        case 0x134470u: goto label_134470;
        case 0x134474u: goto label_134474;
        case 0x134478u: goto label_134478;
        case 0x13447cu: goto label_13447c;
        case 0x134480u: goto label_134480;
        case 0x134484u: goto label_134484;
        case 0x134488u: goto label_134488;
        case 0x13448cu: goto label_13448c;
        case 0x134490u: goto label_134490;
        case 0x134494u: goto label_134494;
        case 0x134498u: goto label_134498;
        case 0x13449cu: goto label_13449c;
        case 0x1344a0u: goto label_1344a0;
        case 0x1344a4u: goto label_1344a4;
        case 0x1344a8u: goto label_1344a8;
        case 0x1344acu: goto label_1344ac;
        case 0x1344b0u: goto label_1344b0;
        case 0x1344b4u: goto label_1344b4;
        case 0x1344b8u: goto label_1344b8;
        case 0x1344bcu: goto label_1344bc;
        default: break;
    }

    ctx->pc = 0x134420u;

label_134420:
    // 0x134420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x134420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_134424:
    // 0x134424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x134424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_134428:
    // 0x134428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13442c:
    // 0x13442c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_134430:
    // 0x134430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x134430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134434:
    // 0x134434: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_134438:
    if (ctx->pc == 0x134438u) {
        ctx->pc = 0x134438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134434u;
        // 0x134438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13443Cu;
        goto label_13443c;
    }
    ctx->pc = 0x134434u;
    {
        const bool branch_taken_0x134434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x134438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134434u;
        // 0x134438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134434) {
            ctx->pc = 0x1344A8u;
            goto label_1344a8;
        }
    }
    ctx->pc = 0x13443Cu;
label_13443c:
    // 0x13443c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x13443cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_134440:
    // 0x134440: 0x24428e00  addiu       $v0, $v0, -0x7200
    ctx->pc = 0x134440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938112));
label_134444:
    // 0x134444: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x134444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_134448:
    // 0x134448: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x134448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_13444c:
    // 0x13444c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_134450:
    if (ctx->pc == 0x134450u) {
        ctx->pc = 0x134454u;
        goto label_134454;
    }
    ctx->pc = 0x13444Cu;
    {
        const bool branch_taken_0x13444c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13444c) {
            ctx->pc = 0x134464u;
            goto label_134464;
        }
    }
    ctx->pc = 0x134454u;
label_134454:
    // 0x134454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x134454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_134458:
    // 0x134458: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x134458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_13445c:
    // 0x13445c: 0x320f809  jalr        $t9
label_134460:
    if (ctx->pc == 0x134460u) {
        ctx->pc = 0x134460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13445Cu;
        // 0x134460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134464u;
        goto label_134464;
    }
    ctx->pc = 0x13445Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x134464u);
        ctx->pc = 0x134460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13445Cu;
        // 0x134460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13445Cu, 0x134464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134464u;
label_134464:
    // 0x134464: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x134464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_134468:
    // 0x134468: 0xc05f494  jal         func_17D250
label_13446c:
    if (ctx->pc == 0x13446Cu) {
        ctx->pc = 0x13446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134468u;
        // 0x13446c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134470u;
        goto label_134470;
    }
    ctx->pc = 0x134468u;
    SET_GPR_U32(ctx, 31, 0x134470u);
    ctx->pc = 0x13446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134468u;
    // 0x13446c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D250u, 0x134468u, 0x134470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134470u;
label_134470:
    // 0x134470: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x134470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_134474:
    // 0x134474: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_134478:
    if (ctx->pc == 0x134478u) {
        ctx->pc = 0x13447Cu;
        goto label_13447c;
    }
    ctx->pc = 0x134474u;
    {
        const bool branch_taken_0x134474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134474) {
            ctx->pc = 0x134484u;
            goto label_134484;
        }
    }
    ctx->pc = 0x13447Cu;
label_13447c:
    // 0x13447c: 0xc04c178  jal         func_1305E0
label_134480:
    if (ctx->pc == 0x134480u) {
        ctx->pc = 0x134484u;
        goto label_134484;
    }
    ctx->pc = 0x13447Cu;
    SET_GPR_U32(ctx, 31, 0x134484u);
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x13447Cu, 0x134484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134484u;
label_134484:
    // 0x134484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134488:
    // 0x134488: 0xc04c4ec  jal         func_1313B0
label_13448c:
    if (ctx->pc == 0x13448Cu) {
        ctx->pc = 0x13448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134488u;
        // 0x13448c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134490u;
        goto label_134490;
    }
    ctx->pc = 0x134488u;
    SET_GPR_U32(ctx, 31, 0x134490u);
    ctx->pc = 0x13448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134488u;
    // 0x13448c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313B0u, 0x134488u, 0x134490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134490u;
label_134490:
    // 0x134490: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x134490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_134494:
    // 0x134494: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x134494u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_134498:
    // 0x134498: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_13449c:
    if (ctx->pc == 0x13449Cu) {
        ctx->pc = 0x13449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134498u;
        // 0x13449c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1344A0u;
        goto label_1344a0;
    }
    ctx->pc = 0x134498u;
    {
        const bool branch_taken_0x134498 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134498u;
        // 0x13449c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134498) {
            ctx->pc = 0x1344ACu;
            goto label_1344ac;
        }
    }
    ctx->pc = 0x1344A0u;
label_1344a0:
    // 0x1344a0: 0xc0401a4  jal         func_100690
label_1344a4:
    if (ctx->pc == 0x1344A4u) {
        ctx->pc = 0x1344A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344A0u;
        // 0x1344a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1344A8u;
        goto label_1344a8;
    }
    ctx->pc = 0x1344A0u;
    SET_GPR_U32(ctx, 31, 0x1344A8u);
    ctx->pc = 0x1344A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344A0u;
    // 0x1344a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1344A0u, 0x1344A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344A8u;
label_1344a8:
    // 0x1344a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1344a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1344ac:
    // 0x1344ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1344acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1344b0:
    // 0x1344b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1344b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1344b4:
    // 0x1344b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1344b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1344b8:
    // 0x1344b8: 0x3e00008  jr          $ra
label_1344bc:
    if (ctx->pc == 0x1344BCu) {
        ctx->pc = 0x1344BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344B8u;
        // 0x1344bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1344C0u;
        goto label_fallthrough_0x1344b8;
    }
    ctx->pc = 0x1344B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1344BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344B8u;
        // 0x1344bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1344B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1344b8:
    ctx->pc = 0x1344C0u;
}
