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

// Function: FUN_0017c320
// Address: 0x17c320 - 0x17c398
void FUN_0017c320_0x17c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c320_0x17c320");
#endif

    switch (ctx->pc) {
        case 0x17c320u: goto label_17c320;
        case 0x17c324u: goto label_17c324;
        case 0x17c328u: goto label_17c328;
        case 0x17c32cu: goto label_17c32c;
        case 0x17c330u: goto label_17c330;
        case 0x17c334u: goto label_17c334;
        case 0x17c338u: goto label_17c338;
        case 0x17c33cu: goto label_17c33c;
        case 0x17c340u: goto label_17c340;
        case 0x17c344u: goto label_17c344;
        case 0x17c348u: goto label_17c348;
        case 0x17c34cu: goto label_17c34c;
        case 0x17c350u: goto label_17c350;
        case 0x17c354u: goto label_17c354;
        case 0x17c358u: goto label_17c358;
        case 0x17c35cu: goto label_17c35c;
        case 0x17c360u: goto label_17c360;
        case 0x17c364u: goto label_17c364;
        case 0x17c368u: goto label_17c368;
        case 0x17c36cu: goto label_17c36c;
        case 0x17c370u: goto label_17c370;
        case 0x17c374u: goto label_17c374;
        case 0x17c378u: goto label_17c378;
        case 0x17c37cu: goto label_17c37c;
        case 0x17c380u: goto label_17c380;
        case 0x17c384u: goto label_17c384;
        case 0x17c388u: goto label_17c388;
        case 0x17c38cu: goto label_17c38c;
        case 0x17c390u: goto label_17c390;
        case 0x17c394u: goto label_17c394;
        default: break;
    }

    ctx->pc = 0x17c320u;

label_17c320:
    // 0x17c320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17c324:
    // 0x17c324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17c328:
    // 0x17c328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17c32c:
    // 0x17c32c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17c330:
    // 0x17c330: 0xc056b00  jal         func_15AC00
label_17c334:
    if (ctx->pc == 0x17C334u) {
        ctx->pc = 0x17C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C330u;
        // 0x17c334: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C338u;
        goto label_17c338;
    }
    ctx->pc = 0x17C330u;
    SET_GPR_U32(ctx, 31, 0x17C338u);
    ctx->pc = 0x17C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C330u;
    // 0x17c334: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC00u, 0x17C330u, 0x17C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C338u;
label_17c338:
    // 0x17c338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17c338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c33c:
    // 0x17c33c: 0x2a010000  slti        $at, $s0, 0x0
    ctx->pc = 0x17c33cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_17c340:
    // 0x17c340: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
label_17c344:
    if (ctx->pc == 0x17C344u) {
        ctx->pc = 0x17C348u;
        goto label_17c348;
    }
    ctx->pc = 0x17C340u;
    {
        const bool branch_taken_0x17c340 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c340) {
            ctx->pc = 0x17C380u;
            goto label_17c380;
        }
    }
    ctx->pc = 0x17C348u;
label_17c348:
    // 0x17c348: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x17c348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17c34c:
    // 0x17c34c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c350:
    // 0x17c350: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17c354:
    // 0x17c354: 0x320f809  jalr        $t9
label_17c358:
    if (ctx->pc == 0x17C358u) {
        ctx->pc = 0x17C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C354u;
        // 0x17c358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C35Cu;
        goto label_17c35c;
    }
    ctx->pc = 0x17C354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C35Cu);
        ctx->pc = 0x17C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C354u;
        // 0x17c358: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C354u, 0x17C35Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C35Cu;
label_17c35c:
    // 0x17c35c: 0x86230212  lh          $v1, 0x212($s1)
    ctx->pc = 0x17c35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 530)));
label_17c360:
    // 0x17c360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c364:
    // 0x17c364: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_17c368:
    if (ctx->pc == 0x17C368u) {
        ctx->pc = 0x17C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C364u;
        // 0x17c368: 0xa6230210  sh          $v1, 0x210($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C36Cu;
        goto label_17c36c;
    }
    ctx->pc = 0x17C364u;
    {
        const bool branch_taken_0x17c364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C364u;
        // 0x17c368: 0xa6230210  sh          $v1, 0x210($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c364) {
            ctx->pc = 0x17C378u;
            goto label_17c378;
        }
    }
    ctx->pc = 0x17C36Cu;
label_17c36c:
    // 0x17c36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17c370:
    // 0x17c370: 0xc042118  jal         func_108460
label_17c374:
    if (ctx->pc == 0x17C374u) {
        ctx->pc = 0x17C374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C370u;
        // 0x17c374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C378u;
        goto label_17c378;
    }
    ctx->pc = 0x17C370u;
    SET_GPR_U32(ctx, 31, 0x17C378u);
    ctx->pc = 0x17C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C370u;
    // 0x17c374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17C370u, 0x17C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C378u;
label_17c378:
    // 0x17c378: 0x10000002  b           . + 4 + (0x2 << 2)
label_17c37c:
    if (ctx->pc == 0x17C37Cu) {
        ctx->pc = 0x17C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C378u;
        // 0x17c37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C380u;
        goto label_17c380;
    }
    ctx->pc = 0x17C378u;
    {
        const bool branch_taken_0x17c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C378u;
        // 0x17c37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c378) {
            ctx->pc = 0x17C384u;
            goto label_17c384;
        }
    }
    ctx->pc = 0x17C380u;
label_17c380:
    // 0x17c380: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17c384:
    // 0x17c384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17c384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17c388:
    // 0x17c388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17c388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17c38c:
    // 0x17c38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17c390:
    // 0x17c390: 0x3e00008  jr          $ra
label_17c394:
    if (ctx->pc == 0x17C394u) {
        ctx->pc = 0x17C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C390u;
        // 0x17c394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C398u;
        goto label_fallthrough_0x17c390;
    }
    ctx->pc = 0x17C390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C390u;
        // 0x17c394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17c390:
    ctx->pc = 0x17C398u;
}
