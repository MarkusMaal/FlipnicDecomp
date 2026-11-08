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

// Function: FUN_001220d0
// Address: 0x1220d0 - 0x1221f0
void FUN_001220d0_0x1220d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001220d0_0x1220d0");
#endif

    switch (ctx->pc) {
        case 0x12210cu: goto label_12210c;
        case 0x122114u: goto label_122114;
        case 0x122120u: goto label_122120;
        case 0x12212cu: goto label_12212c;
        case 0x122144u: goto label_122144;
        case 0x12217cu: goto label_12217c;
        case 0x122188u: goto label_122188;
        case 0x122194u: goto label_122194;
        case 0x1221acu: goto label_1221ac;
        default: break;
    }

    ctx->pc = 0x1220d0u;

    // 0x1220d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1220d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1220d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1220d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1220d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1220d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1220dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1220dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1220e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1220e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1220e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1220e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1220e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1220e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1220ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1220ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1220f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1220f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1220f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1220f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1220fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1220fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122100: 0x8cb60004  lw          $s6, 0x4($a1)
    ctx->pc = 0x122100u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122104: 0x12c00018  beqz        $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x122104u;
    {
        const bool branch_taken_0x122104 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x122108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122104u;
        // 0x122108: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122104) {
            ctx->pc = 0x122168u;
            goto label_122168;
        }
    }
    ctx->pc = 0x12210Cu;
label_12210c:
    // 0x12210c: 0xc048880  jal         func_122200
    ctx->pc = 0x12210Cu;
    SET_GPR_U32(ctx, 31, 0x122114u);
    ctx->pc = 0x122110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12210Cu;
    // 0x122110: 0x26c4000c  addiu       $a0, $s6, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x12210Cu, 0x122114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122114u;
label_122114:
    // 0x122114: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x122114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122118: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x122118u;
    SET_GPR_U32(ctx, 31, 0x122120u);
    ctx->pc = 0x12211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122118u;
    // 0x12211c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x122118u, 0x122120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122120u;
label_122120:
    // 0x122120: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122124: 0xc048880  jal         func_122200
    ctx->pc = 0x122124u;
    SET_GPR_U32(ctx, 31, 0x12212Cu);
    ctx->pc = 0x122128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122124u;
    // 0x122128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x122124u, 0x12212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12212Cu;
label_12212c:
    // 0x12212c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12212cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122130: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x122130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122134: 0x26c4000c  addiu       $a0, $s6, 0xC
    ctx->pc = 0x122134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x122138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12213c: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x12213Cu;
    SET_GPR_U32(ctx, 31, 0x122144u);
    ctx->pc = 0x122140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12213Cu;
    // 0x122140: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x12213Cu, 0x122144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122144u;
label_122144:
    // 0x122144: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122144u;
    {
        const bool branch_taken_0x122144 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x122144) {
            ctx->pc = 0x122158u;
            goto label_122158;
        }
    }
    ctx->pc = 0x12214Cu;
    // 0x12214c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x12214cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x122150u;
    {
        const bool branch_taken_0x122150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122150u;
        // 0x122154: 0x8ed60000  lw          $s6, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122150) {
            ctx->pc = 0x122160u;
            goto label_122160;
        }
    }
    ctx->pc = 0x122158u;
label_122158:
    // 0x122158: 0x8ed60004  lw          $s6, 0x4($s6)
    ctx->pc = 0x122158u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x12215c: 0x0  nop
    ctx->pc = 0x12215cu;
    // NOP
label_122160:
    // 0x122160: 0x16c0ffea  bnez        $s6, . + 4 + (-0x16 << 2)
    ctx->pc = 0x122160u;
    {
        const bool branch_taken_0x122160 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x122160) {
            ctx->pc = 0x12210Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12210c;
        }
    }
    ctx->pc = 0x122168u;
label_122168:
    // 0x122168: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x122168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12216c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12216Cu;
    {
        const bool branch_taken_0x12216c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x122170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12216Cu;
        // 0x122170: 0x26430004  addiu       $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12216c) {
            ctx->pc = 0x1221B8u;
            goto label_1221b8;
        }
    }
    ctx->pc = 0x122174u;
    // 0x122174: 0xc048880  jal         func_122200
    ctx->pc = 0x122174u;
    SET_GPR_U32(ctx, 31, 0x12217Cu);
    ctx->pc = 0x122178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122174u;
    // 0x122178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x122174u, 0x12217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12217Cu;
label_12217c:
    // 0x12217c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12217cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122180: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x122180u;
    SET_GPR_U32(ctx, 31, 0x122188u);
    ctx->pc = 0x122184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122180u;
    // 0x122184: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x122180u, 0x122188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122188u;
label_122188:
    // 0x122188: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122188u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12218c: 0xc048880  jal         func_122200
    ctx->pc = 0x12218Cu;
    SET_GPR_U32(ctx, 31, 0x122194u);
    ctx->pc = 0x122190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12218Cu;
    // 0x122190: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x12218Cu, 0x122194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122194u;
label_122194:
    // 0x122194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122198: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x122198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12219c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12219cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1221a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221a4: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1221A4u;
    SET_GPR_U32(ctx, 31, 0x1221ACu);
    ctx->pc = 0x1221A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1221A4u;
    // 0x1221a8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1221A4u, 0x1221ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221ACu;
label_1221ac:
    // 0x1221ac: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1221ACu;
    {
        const bool branch_taken_0x1221ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1221ac) {
            ctx->pc = 0x1221C4u;
            goto label_1221c4;
        }
    }
    ctx->pc = 0x1221B4u;
    // 0x1221b4: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x1221b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1221b8:
    // 0x1221b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1221b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1221bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1221BCu;
    {
        const bool branch_taken_0x1221bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1221C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221BCu;
        // 0x1221c0: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1221bc) {
            ctx->pc = 0x1221C8u;
            goto label_1221c8;
        }
    }
    ctx->pc = 0x1221C4u;
label_1221c4:
    // 0x1221c4: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1221c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_1221c8:
    // 0x1221c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1221c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1221cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1221ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1221d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1221d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1221d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1221d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1221d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1221d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1221dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1221dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1221e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1221e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1221e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1221e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1221e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1221E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1221ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1221E8u;
        // 0x1221ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1221E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1221F0u;
}
