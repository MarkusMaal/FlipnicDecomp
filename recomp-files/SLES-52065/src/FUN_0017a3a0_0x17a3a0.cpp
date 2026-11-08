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

// Function: FUN_0017a3a0
// Address: 0x17a3a0 - 0x17a444
void FUN_0017a3a0_0x17a3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a3a0_0x17a3a0");
#endif

    switch (ctx->pc) {
        case 0x17a3a0u: goto label_17a3a0;
        case 0x17a3a4u: goto label_17a3a4;
        case 0x17a3a8u: goto label_17a3a8;
        case 0x17a3acu: goto label_17a3ac;
        case 0x17a3b0u: goto label_17a3b0;
        case 0x17a3b4u: goto label_17a3b4;
        case 0x17a3b8u: goto label_17a3b8;
        case 0x17a3bcu: goto label_17a3bc;
        case 0x17a3c0u: goto label_17a3c0;
        case 0x17a3c4u: goto label_17a3c4;
        case 0x17a3c8u: goto label_17a3c8;
        case 0x17a3ccu: goto label_17a3cc;
        case 0x17a3d0u: goto label_17a3d0;
        case 0x17a3d4u: goto label_17a3d4;
        case 0x17a3d8u: goto label_17a3d8;
        case 0x17a3dcu: goto label_17a3dc;
        case 0x17a3e0u: goto label_17a3e0;
        case 0x17a3e4u: goto label_17a3e4;
        case 0x17a3e8u: goto label_17a3e8;
        case 0x17a3ecu: goto label_17a3ec;
        case 0x17a3f0u: goto label_17a3f0;
        case 0x17a3f4u: goto label_17a3f4;
        case 0x17a3f8u: goto label_17a3f8;
        case 0x17a3fcu: goto label_17a3fc;
        case 0x17a400u: goto label_17a400;
        case 0x17a404u: goto label_17a404;
        case 0x17a408u: goto label_17a408;
        case 0x17a40cu: goto label_17a40c;
        case 0x17a410u: goto label_17a410;
        case 0x17a414u: goto label_17a414;
        case 0x17a418u: goto label_17a418;
        case 0x17a41cu: goto label_17a41c;
        case 0x17a420u: goto label_17a420;
        case 0x17a424u: goto label_17a424;
        case 0x17a428u: goto label_17a428;
        case 0x17a42cu: goto label_17a42c;
        case 0x17a430u: goto label_17a430;
        case 0x17a434u: goto label_17a434;
        case 0x17a438u: goto label_17a438;
        case 0x17a43cu: goto label_17a43c;
        case 0x17a440u: goto label_17a440;
        default: break;
    }

    ctx->pc = 0x17a3a0u;

label_17a3a0:
    // 0x17a3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17a3a4:
    // 0x17a3a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17a3a8:
    // 0x17a3a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17a3ac:
    // 0x17a3ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17a3b0:
    // 0x17a3b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17a3b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a3b4:
    // 0x17a3b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a3b8:
    // 0x17a3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a3bc:
    // 0x17a3bc: 0x8f848628  lw          $a0, -0x79D8($gp)
    ctx->pc = 0x17a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936104)));
label_17a3c0:
    // 0x17a3c0: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x17a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17a3c4:
    // 0x17a3c4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_17a3c8:
    // 0x17a3c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17a3cc:
    // 0x17a3cc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x17a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17a3d0:
    // 0x17a3d0: 0x90710020  lbu         $s1, 0x20($v1)
    ctx->pc = 0x17a3d0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_17a3d4:
    // 0x17a3d4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x17a3d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_17a3d8:
    // 0x17a3d8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_17a3dc:
    if (ctx->pc == 0x17A3DCu) {
        ctx->pc = 0x17A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3D8u;
        // 0x17a3dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3E0u;
        goto label_17a3e0;
    }
    ctx->pc = 0x17A3D8u;
    {
        const bool branch_taken_0x17a3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3D8u;
        // 0x17a3dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3d8) {
            ctx->pc = 0x17A424u;
            goto label_17a424;
        }
    }
    ctx->pc = 0x17A3E0u;
label_17a3e0:
    // 0x17a3e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17a3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a3e4:
    // 0x17a3e4: 0x8f838628  lw          $v1, -0x79D8($gp)
    ctx->pc = 0x17a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936104)));
label_17a3e8:
    // 0x17a3e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a3ec:
    // 0x17a3ec: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17a3f0:
    // 0x17a3f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a3f4:
    // 0x17a3f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a3f8:
    // 0x17a3f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17a3fc:
    // 0x17a3fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_17a400:
    // 0x17a400: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a404:
    // 0x17a404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17a404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17a408:
    // 0x17a408: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17a408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17a40c:
    // 0x17a40c: 0x320f809  jalr        $t9
label_17a410:
    if (ctx->pc == 0x17A410u) {
        ctx->pc = 0x17A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A40Cu;
        // 0x17a410: 0x13280a  movz        $a1, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A414u;
        goto label_17a414;
    }
    ctx->pc = 0x17A40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A414u);
        ctx->pc = 0x17A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A40Cu;
        // 0x17a410: 0x13280a  movz        $a1, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A40Cu, 0x17A414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A414u;
label_17a414:
    // 0x17a414: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17a418:
    // 0x17a418: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x17a418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_17a41c:
    // 0x17a41c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_17a420:
    if (ctx->pc == 0x17A420u) {
        ctx->pc = 0x17A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A41Cu;
        // 0x17a420: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A424u;
        goto label_17a424;
    }
    ctx->pc = 0x17A41Cu;
    {
        const bool branch_taken_0x17a41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A41Cu;
        // 0x17a420: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a41c) {
            ctx->pc = 0x17A3E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a3e4;
        }
    }
    ctx->pc = 0x17A424u;
label_17a424:
    // 0x17a424: 0x0  nop
    ctx->pc = 0x17a424u;
    // NOP
label_17a428:
    // 0x17a428: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17a42c:
    // 0x17a42c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a42cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a430:
    // 0x17a430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a434:
    // 0x17a434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a438:
    // 0x17a438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a43c:
    // 0x17a43c: 0x3e00008  jr          $ra
label_17a440:
    if (ctx->pc == 0x17A440u) {
        ctx->pc = 0x17A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A43Cu;
        // 0x17a440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A444u;
        goto label_fallthrough_0x17a43c;
    }
    ctx->pc = 0x17A43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A43Cu;
        // 0x17a440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17a43c:
    ctx->pc = 0x17A444u;
}
