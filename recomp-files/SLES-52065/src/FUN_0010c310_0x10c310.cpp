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

// Function: FUN_0010c310
// Address: 0x10c310 - 0x10c39c
void FUN_0010c310_0x10c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c310_0x10c310");
#endif

    switch (ctx->pc) {
        case 0x10c310u: goto label_10c310;
        case 0x10c314u: goto label_10c314;
        case 0x10c318u: goto label_10c318;
        case 0x10c31cu: goto label_10c31c;
        case 0x10c320u: goto label_10c320;
        case 0x10c324u: goto label_10c324;
        case 0x10c328u: goto label_10c328;
        case 0x10c32cu: goto label_10c32c;
        case 0x10c330u: goto label_10c330;
        case 0x10c334u: goto label_10c334;
        case 0x10c338u: goto label_10c338;
        case 0x10c33cu: goto label_10c33c;
        case 0x10c340u: goto label_10c340;
        case 0x10c344u: goto label_10c344;
        case 0x10c348u: goto label_10c348;
        case 0x10c34cu: goto label_10c34c;
        case 0x10c350u: goto label_10c350;
        case 0x10c354u: goto label_10c354;
        case 0x10c358u: goto label_10c358;
        case 0x10c35cu: goto label_10c35c;
        case 0x10c360u: goto label_10c360;
        case 0x10c364u: goto label_10c364;
        case 0x10c368u: goto label_10c368;
        case 0x10c36cu: goto label_10c36c;
        case 0x10c370u: goto label_10c370;
        case 0x10c374u: goto label_10c374;
        case 0x10c378u: goto label_10c378;
        case 0x10c37cu: goto label_10c37c;
        case 0x10c380u: goto label_10c380;
        case 0x10c384u: goto label_10c384;
        case 0x10c388u: goto label_10c388;
        case 0x10c38cu: goto label_10c38c;
        case 0x10c390u: goto label_10c390;
        case 0x10c394u: goto label_10c394;
        case 0x10c398u: goto label_10c398;
        default: break;
    }

    ctx->pc = 0x10c310u;

label_10c310:
    // 0x10c310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10c314:
    // 0x10c314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10c318:
    // 0x10c318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c31c:
    // 0x10c31c: 0xc0563cc  jal         func_158F30
label_10c320:
    if (ctx->pc == 0x10C320u) {
        ctx->pc = 0x10C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C31Cu;
        // 0x10c320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C324u;
        goto label_10c324;
    }
    ctx->pc = 0x10C31Cu;
    SET_GPR_U32(ctx, 31, 0x10C324u);
    ctx->pc = 0x10C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C31Cu;
    // 0x10c320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x10C31Cu, 0x10C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C324u;
label_10c324:
    // 0x10c324: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x10c324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
label_10c328:
    // 0x10c328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c32c:
    // 0x10c32c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10c32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10c330:
    // 0x10c330: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10c330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10c334:
    // 0x10c334: 0x320f809  jalr        $t9
label_10c338:
    if (ctx->pc == 0x10C338u) {
        ctx->pc = 0x10C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C334u;
        // 0x10c338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C33Cu;
        goto label_10c33c;
    }
    ctx->pc = 0x10C334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C33Cu);
        ctx->pc = 0x10C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C334u;
        // 0x10c338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C334u, 0x10C33Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C33Cu;
label_10c33c:
    // 0x10c33c: 0xa600024e  sh          $zero, 0x24E($s0)
    ctx->pc = 0x10c33cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 590), (uint16_t)GPR_U32(ctx, 0));
label_10c340:
    // 0x10c340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10c340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c344:
    // 0x10c344: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x10c344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_10c348:
    // 0x10c348: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x10c348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
label_10c34c:
    // 0x10c34c: 0xa203007a  sb          $v1, 0x7A($s0)
    ctx->pc = 0x10c34cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 3));
label_10c350:
    // 0x10c350: 0x86030254  lh          $v1, 0x254($s0)
    ctx->pc = 0x10c350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 596)));
label_10c354:
    // 0x10c354: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_10c358:
    if (ctx->pc == 0x10C358u) {
        ctx->pc = 0x10C35Cu;
        goto label_10c35c;
    }
    ctx->pc = 0x10C354u;
    {
        const bool branch_taken_0x10c354 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x10c354) {
            ctx->pc = 0x10C38Cu;
            goto label_10c38c;
        }
    }
    ctx->pc = 0x10C35Cu;
label_10c35c:
    // 0x10c35c: 0x86020256  lh          $v0, 0x256($s0)
    ctx->pc = 0x10c35cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 598)));
label_10c360:
    // 0x10c360: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x10c360u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10c364:
    // 0x10c364: 0x8f8483a8  lw          $a0, -0x7C58($gp)
    ctx->pc = 0x10c364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10c368:
    // 0x10c368: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10c368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10c36c:
    // 0x10c36c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x10c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_10c370:
    // 0x10c370: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10c374:
    // 0x10c374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10c378:
    // 0x10c378: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10c378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10c37c:
    // 0x10c37c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10c37cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10c380:
    // 0x10c380: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10c380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10c384:
    // 0x10c384: 0x320f809  jalr        $t9
label_10c388:
    if (ctx->pc == 0x10C388u) {
        ctx->pc = 0x10C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C384u;
        // 0x10c388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C38Cu;
        goto label_10c38c;
    }
    ctx->pc = 0x10C384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C38Cu);
        ctx->pc = 0x10C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C384u;
        // 0x10c388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C384u, 0x10C38Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C38Cu;
label_10c38c:
    // 0x10c38c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10c390:
    // 0x10c390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10c394:
    // 0x10c394: 0x3e00008  jr          $ra
label_10c398:
    if (ctx->pc == 0x10C398u) {
        ctx->pc = 0x10C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C394u;
        // 0x10c398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C39Cu;
        goto label_fallthrough_0x10c394;
    }
    ctx->pc = 0x10C394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C394u;
        // 0x10c398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10c394:
    ctx->pc = 0x10C39Cu;
}
