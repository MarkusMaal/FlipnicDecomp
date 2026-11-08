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

// Function: FUN_0010e3c0
// Address: 0x10e3c0 - 0x10e458
void FUN_0010e3c0_0x10e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e3c0_0x10e3c0");
#endif

    switch (ctx->pc) {
        case 0x10e3c0u: goto label_10e3c0;
        case 0x10e3c4u: goto label_10e3c4;
        case 0x10e3c8u: goto label_10e3c8;
        case 0x10e3ccu: goto label_10e3cc;
        case 0x10e3d0u: goto label_10e3d0;
        case 0x10e3d4u: goto label_10e3d4;
        case 0x10e3d8u: goto label_10e3d8;
        case 0x10e3dcu: goto label_10e3dc;
        case 0x10e3e0u: goto label_10e3e0;
        case 0x10e3e4u: goto label_10e3e4;
        case 0x10e3e8u: goto label_10e3e8;
        case 0x10e3ecu: goto label_10e3ec;
        case 0x10e3f0u: goto label_10e3f0;
        case 0x10e3f4u: goto label_10e3f4;
        case 0x10e3f8u: goto label_10e3f8;
        case 0x10e3fcu: goto label_10e3fc;
        case 0x10e400u: goto label_10e400;
        case 0x10e404u: goto label_10e404;
        case 0x10e408u: goto label_10e408;
        case 0x10e40cu: goto label_10e40c;
        case 0x10e410u: goto label_10e410;
        case 0x10e414u: goto label_10e414;
        case 0x10e418u: goto label_10e418;
        case 0x10e41cu: goto label_10e41c;
        case 0x10e420u: goto label_10e420;
        case 0x10e424u: goto label_10e424;
        case 0x10e428u: goto label_10e428;
        case 0x10e42cu: goto label_10e42c;
        case 0x10e430u: goto label_10e430;
        case 0x10e434u: goto label_10e434;
        case 0x10e438u: goto label_10e438;
        case 0x10e43cu: goto label_10e43c;
        case 0x10e440u: goto label_10e440;
        case 0x10e444u: goto label_10e444;
        case 0x10e448u: goto label_10e448;
        case 0x10e44cu: goto label_10e44c;
        case 0x10e450u: goto label_10e450;
        case 0x10e454u: goto label_10e454;
        default: break;
    }

    ctx->pc = 0x10e3c0u;

label_10e3c0:
    // 0x10e3c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10e3c4:
    // 0x10e3c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_10e3c8:
    // 0x10e3c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10e3cc:
    // 0x10e3cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10e3d0:
    // 0x10e3d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10e3d4:
    // 0x10e3d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e3d8:
    // 0x10e3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10e3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10e3dc:
    // 0x10e3dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10e3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e3e0:
    // 0x10e3e0: 0x10000010  b           . + 4 + (0x10 << 2)
label_10e3e4:
    if (ctx->pc == 0x10E3E4u) {
        ctx->pc = 0x10E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3E0u;
        // 0x10e3e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3E8u;
        goto label_10e3e8;
    }
    ctx->pc = 0x10E3E0u;
    {
        const bool branch_taken_0x10e3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3E0u;
        // 0x10e3e4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3e0) {
            ctx->pc = 0x10E424u;
            goto label_10e424;
        }
    }
    ctx->pc = 0x10E3E8u;
label_10e3e8:
    // 0x10e3e8: 0x8e430210  lw          $v1, 0x210($s2)
    ctx->pc = 0x10e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_10e3ec:
    // 0x10e3ec: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e3f0:
    // 0x10e3f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x10e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_10e3f4:
    // 0x10e3f4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10e3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10e3f8:
    // 0x10e3f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e3fc:
    // 0x10e3fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10e400:
    // 0x10e400: 0x8c532cd8  lw          $s3, 0x2CD8($v0)
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e404:
    // 0x10e404: 0x8e790008  lw          $t9, 0x8($s3)
    ctx->pc = 0x10e404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_10e408:
    // 0x10e408: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10e408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10e40c:
    // 0x10e40c: 0x320f809  jalr        $t9
label_10e410:
    if (ctx->pc == 0x10E410u) {
        ctx->pc = 0x10E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E40Cu;
        // 0x10e410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E414u;
        goto label_10e414;
    }
    ctx->pc = 0x10E40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E414u);
        ctx->pc = 0x10E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E40Cu;
        // 0x10e410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E40Cu, 0x10E414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E414u;
label_10e414:
    // 0x10e414: 0xa66001fa  sh          $zero, 0x1FA($s3)
    ctx->pc = 0x10e414u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 506), (uint16_t)GPR_U32(ctx, 0));
label_10e418:
    // 0x10e418: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x10e418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_10e41c:
    // 0x10e41c: 0xae6001fc  sw          $zero, 0x1FC($s3)
    ctx->pc = 0x10e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 508), GPR_U32(ctx, 0));
label_10e420:
    // 0x10e420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10e420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10e424:
    // 0x10e424: 0x0  nop
    ctx->pc = 0x10e424u;
    // NOP
label_10e428:
    // 0x10e428: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x10e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_10e42c:
    // 0x10e42c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10e42cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e430:
    // 0x10e430: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_10e434:
    if (ctx->pc == 0x10E434u) {
        ctx->pc = 0x10E438u;
        goto label_10e438;
    }
    ctx->pc = 0x10E430u;
    {
        const bool branch_taken_0x10e430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e430) {
            ctx->pc = 0x10E3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e3e8;
        }
    }
    ctx->pc = 0x10E438u;
label_10e438:
    // 0x10e438: 0xae400230  sw          $zero, 0x230($s2)
    ctx->pc = 0x10e438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 0));
label_10e43c:
    // 0x10e43c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10e43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10e440:
    // 0x10e440: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10e440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10e444:
    // 0x10e444: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10e444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10e448:
    // 0x10e448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e44c:
    // 0x10e44c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10e450:
    // 0x10e450: 0x3e00008  jr          $ra
label_10e454:
    if (ctx->pc == 0x10E454u) {
        ctx->pc = 0x10E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E450u;
        // 0x10e454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E458u;
        goto label_fallthrough_0x10e450;
    }
    ctx->pc = 0x10E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E450u;
        // 0x10e454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e450:
    ctx->pc = 0x10E458u;
}
