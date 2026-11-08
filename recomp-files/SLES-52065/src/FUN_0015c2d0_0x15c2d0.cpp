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

// Function: FUN_0015c2d0
// Address: 0x15c2d0 - 0x15c3c8
void FUN_0015c2d0_0x15c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c2d0_0x15c2d0");
#endif

    switch (ctx->pc) {
        case 0x15c338u: goto label_15c338;
        case 0x15c350u: goto label_15c350;
        case 0x15c374u: goto label_15c374;
        default: break;
    }

    ctx->pc = 0x15c2d0u;

    // 0x15c2d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15c2d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15c2d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15c2dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15c2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15c2e0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x15c2e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15c2e8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15c2e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c2f0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x15c2f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c2f8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x15c2f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c2fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c308: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15c308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c30c: 0x84c4000a  lh          $a0, 0xA($a2)
    ctx->pc = 0x15c30cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x15c310: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x15c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x15c314: 0x84c2000c  lh          $v0, 0xC($a2)
    ctx->pc = 0x15c314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15c318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c31c: 0x6a10002  bgez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C31Cu;
    {
        const bool branch_taken_0x15c31c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x15C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C31Cu;
        // 0x15c320: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c31c) {
            ctx->pc = 0x15C328u;
            goto label_15c328;
        }
    }
    ctx->pc = 0x15C324u;
    // 0x15c324: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x15c324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c328:
    // 0x15c328: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C328u;
    {
        const bool branch_taken_0x15c328 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C328u;
        // 0x15c32c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c328) {
            ctx->pc = 0x15C33Cu;
            goto label_15c33c;
        }
    }
    ctx->pc = 0x15C330u;
    // 0x15c330: 0xc080748  jal         func_201D20
    ctx->pc = 0x15C330u;
    SET_GPR_U32(ctx, 31, 0x15C338u);
    ctx->pc = 0x15C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C330u;
    // 0x15c334: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x15C330u, 0x15C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C338u;
label_15c338:
    // 0x15c338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c33c:
    // 0x15c33c: 0x86310008  lh          $s1, 0x8($s1)
    ctx->pc = 0x15c33cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15c340: 0x2b29023  subu        $s2, $s5, $s2
    ctx->pc = 0x15c340u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x15c344: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x15c344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15c348: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C348u;
    {
        const bool branch_taken_0x15c348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C348u;
        // 0x15c34c: 0x159880  sll         $s3, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c348) {
            ctx->pc = 0x15C398u;
            goto label_15c398;
        }
    }
    ctx->pc = 0x15C350u;
label_15c350:
    // 0x15c350: 0x680000c  bltz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x15C350u;
    {
        const bool branch_taken_0x15c350 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x15C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C350u;
        // 0x15c354: 0x2f31021  addu        $v0, $s7, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c350) {
            ctx->pc = 0x15C384u;
            goto label_15c384;
        }
    }
    ctx->pc = 0x15C358u;
    // 0x15c358: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15c358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15c35c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c360: 0x84820020  lh          $v0, 0x20($a0)
    ctx->pc = 0x15c360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15c364: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C364u;
    {
        const bool branch_taken_0x15c364 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C364u;
        // 0x15c368: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c364) {
            ctx->pc = 0x15C384u;
            goto label_15c384;
        }
    }
    ctx->pc = 0x15C36Cu;
    // 0x15c36c: 0xc080796  jal         func_201E58
    ctx->pc = 0x15C36Cu;
    SET_GPR_U32(ctx, 31, 0x15C374u);
    ctx->pc = 0x15C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C36Cu;
    // 0x15c370: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x15C36Cu, 0x15C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C374u;
label_15c374:
    // 0x15c374: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C374u;
    {
        const bool branch_taken_0x15c374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c374) {
            ctx->pc = 0x15C384u;
            goto label_15c384;
        }
    }
    ctx->pc = 0x15C37Cu;
    // 0x15c37c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15C37Cu;
    {
        const bool branch_taken_0x15c37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C37Cu;
        // 0x15c380: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c37c) {
            ctx->pc = 0x15C39Cu;
            goto label_15c39c;
        }
    }
    ctx->pc = 0x15C384u;
label_15c384:
    // 0x15c384: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15c384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15c388: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x15c388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x15c38c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x15c38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15c390: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15C390u;
    {
        const bool branch_taken_0x15c390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C390u;
        // 0x15c394: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c390) {
            ctx->pc = 0x15C350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c350;
        }
    }
    ctx->pc = 0x15C398u;
label_15c398:
    // 0x15c398: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c39c:
    // 0x15c39c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15c39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15c3a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15c3a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15c3a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15c3a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c3a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15c3a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c3ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c3acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c3b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c3b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c3b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c3b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c3bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15C3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3C0u;
        // 0x15c3c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C3C8u;
}
