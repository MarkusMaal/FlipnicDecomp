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

// Function: FUN_001e7330
// Address: 0x1e7330 - 0x1e73bc
void FUN_001e7330_0x1e7330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7330_0x1e7330");
#endif

    switch (ctx->pc) {
        case 0x1e7330u: goto label_1e7330;
        case 0x1e7334u: goto label_1e7334;
        case 0x1e7338u: goto label_1e7338;
        case 0x1e733cu: goto label_1e733c;
        case 0x1e7340u: goto label_1e7340;
        case 0x1e7344u: goto label_1e7344;
        case 0x1e7348u: goto label_1e7348;
        case 0x1e734cu: goto label_1e734c;
        case 0x1e7350u: goto label_1e7350;
        case 0x1e7354u: goto label_1e7354;
        case 0x1e7358u: goto label_1e7358;
        case 0x1e735cu: goto label_1e735c;
        case 0x1e7360u: goto label_1e7360;
        case 0x1e7364u: goto label_1e7364;
        case 0x1e7368u: goto label_1e7368;
        case 0x1e736cu: goto label_1e736c;
        case 0x1e7370u: goto label_1e7370;
        case 0x1e7374u: goto label_1e7374;
        case 0x1e7378u: goto label_1e7378;
        case 0x1e737cu: goto label_1e737c;
        case 0x1e7380u: goto label_1e7380;
        case 0x1e7384u: goto label_1e7384;
        case 0x1e7388u: goto label_1e7388;
        case 0x1e738cu: goto label_1e738c;
        case 0x1e7390u: goto label_1e7390;
        case 0x1e7394u: goto label_1e7394;
        case 0x1e7398u: goto label_1e7398;
        case 0x1e739cu: goto label_1e739c;
        case 0x1e73a0u: goto label_1e73a0;
        case 0x1e73a4u: goto label_1e73a4;
        case 0x1e73a8u: goto label_1e73a8;
        case 0x1e73acu: goto label_1e73ac;
        case 0x1e73b0u: goto label_1e73b0;
        case 0x1e73b4u: goto label_1e73b4;
        case 0x1e73b8u: goto label_1e73b8;
        default: break;
    }

    ctx->pc = 0x1e7330u;

label_1e7330:
    // 0x1e7330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e7330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e7334:
    // 0x1e7334: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e7334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e7338:
    // 0x1e7338: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e7338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e733c:
    // 0x1e733c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e733cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e7340:
    // 0x1e7340: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e7340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7344:
    // 0x1e7344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e7348:
    // 0x1e7348: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e7348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e734c:
    // 0x1e734c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e7350:
    // 0x1e7350: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e7350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e7354:
    // 0x1e7354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7358:
    // 0x1e7358: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x1e7358u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1e735c:
    // 0x1e735c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e735cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e7360:
    // 0x1e7360: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1e7364:
    if (ctx->pc == 0x1E7364u) {
        ctx->pc = 0x1E7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7360u;
        // 0x1e7364: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7368u;
        goto label_1e7368;
    }
    ctx->pc = 0x1E7360u;
    {
        const bool branch_taken_0x1e7360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7360u;
        // 0x1e7364: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7360) {
            ctx->pc = 0x1E7394u;
            goto label_1e7394;
        }
    }
    ctx->pc = 0x1E7368u;
label_1e7368:
    // 0x1e7368: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e736c:
    // 0x1e736c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e7370:
    // 0x1e7370: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x1e7370u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7374:
    // 0x1e7374: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e7374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7378:
    // 0x1e7378: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1e7378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1e737c:
    // 0x1e737c: 0x320f809  jalr        $t9
label_1e7380:
    if (ctx->pc == 0x1E7380u) {
        ctx->pc = 0x1E7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E737Cu;
        // 0x1e7380: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7384u;
        goto label_1e7384;
    }
    ctx->pc = 0x1E737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7384u);
        ctx->pc = 0x1E7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E737Cu;
        // 0x1e7380: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E737Cu, 0x1E7384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7384u;
label_1e7384:
    // 0x1e7384: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1e7384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e7388:
    // 0x1e7388: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x1e7388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1e738c:
    // 0x1e738c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1e7390:
    if (ctx->pc == 0x1E7390u) {
        ctx->pc = 0x1E7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E738Cu;
        // 0x1e7390: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7394u;
        goto label_1e7394;
    }
    ctx->pc = 0x1E738Cu;
    {
        const bool branch_taken_0x1e738c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E738Cu;
        // 0x1e7390: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e738c) {
            ctx->pc = 0x1E7368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7368;
        }
    }
    ctx->pc = 0x1E7394u;
label_1e7394:
    // 0x1e7394: 0x0  nop
    ctx->pc = 0x1e7394u;
    // NOP
label_1e7398:
    // 0x1e7398: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e7398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e739c:
    // 0x1e739c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e739cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e73a0:
    // 0x1e73a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e73a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e73a4:
    // 0x1e73a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e73a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e73a8:
    // 0x1e73a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e73a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e73ac:
    // 0x1e73ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e73acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e73b0:
    // 0x1e73b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e73b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e73b4:
    // 0x1e73b4: 0x3e00008  jr          $ra
label_1e73b8:
    if (ctx->pc == 0x1E73B8u) {
        ctx->pc = 0x1E73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73B4u;
        // 0x1e73b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E73BCu;
        goto label_fallthrough_0x1e73b4;
    }
    ctx->pc = 0x1E73B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73B4u;
        // 0x1e73b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E73B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e73b4:
    ctx->pc = 0x1E73BCu;
}
