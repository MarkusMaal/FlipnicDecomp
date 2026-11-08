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

// Function: FUN_0011b4b0
// Address: 0x11b4b0 - 0x11b598
void FUN_0011b4b0_0x11b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b4b0_0x11b4b0");
#endif

    switch (ctx->pc) {
        case 0x11b4d8u: goto label_11b4d8;
        default: break;
    }

    ctx->pc = 0x11b4b0u;

    // 0x11b4b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4b4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x11b4b4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4b8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x11b4b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4bc: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x11b4bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b4c0: 0x240c002e  addiu       $t4, $zero, 0x2E
    ctx->pc = 0x11b4c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x11b4c4: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x11b4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x11b4c8: 0x240a005c  addiu       $t2, $zero, 0x5C
    ctx->pc = 0x11b4c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x11b4cc: 0x2408002c  addiu       $t0, $zero, 0x2C
    ctx->pc = 0x11b4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x11b4d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x11b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b4d4: 0xad1821  addu        $v1, $a1, $t5
    ctx->pc = 0x11b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_11b4d8:
    // 0x11b4d8: 0x806f0000  lb          $t7, 0x0($v1)
    ctx->pc = 0x11b4d8u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b4dc: 0x29e30061  slti        $v1, $t7, 0x61
    ctx->pc = 0x11b4dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x11b4e0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B4E0u;
    {
        const bool branch_taken_0x11b4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4E0u;
        // 0x11b4e4: 0x29e1007b  slti        $at, $t7, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e0) {
            ctx->pc = 0x11B4F8u;
            goto label_11b4f8;
        }
    }
    ctx->pc = 0x11B4E8u;
    // 0x11b4e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B4E8u;
    {
        const bool branch_taken_0x11b4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4E8u;
        // 0x11b4ec: 0x25e3ffe0  addiu       $v1, $t7, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e8) {
            ctx->pc = 0x11B4F8u;
            goto label_11b4f8;
        }
    }
    ctx->pc = 0x11B4F0u;
    // 0x11b4f0: 0x37e3c  dsll32      $t7, $v1, 24
    ctx->pc = 0x11b4f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << (32 + 24));
    // 0x11b4f4: 0xf7e3f  dsra32      $t7, $t7, 24
    ctx->pc = 0x11b4f4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 24));
label_11b4f8:
    // 0x11b4f8: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x11b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11b4fc: 0xa06f0000  sb          $t7, 0x0($v1)
    ctx->pc = 0x11b4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x11b500: 0xf7e3c  dsll32      $t7, $t7, 24
    ctx->pc = 0x11b500u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 24));
    // 0x11b504: 0xf7e3f  dsra32      $t7, $t7, 24
    ctx->pc = 0x11b504u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 24));
    // 0x11b508: 0x15ec0005  bne         $t7, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B508u;
    {
        const bool branch_taken_0x11b508 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 12));
        if (branch_taken_0x11b508) {
            ctx->pc = 0x11B520u;
            goto label_11b520;
        }
    }
    ctx->pc = 0x11B510u;
    // 0x11b510: 0x14eb0003  bne         $a3, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B510u;
    {
        const bool branch_taken_0x11b510 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x11b510) {
            ctx->pc = 0x11B520u;
            goto label_11b520;
        }
    }
    ctx->pc = 0x11B518u;
    // 0x11b518: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11B518u;
    {
        const bool branch_taken_0x11b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B518u;
        // 0x11b51c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b518) {
            ctx->pc = 0x11B590u;
            goto label_11b590;
        }
    }
    ctx->pc = 0x11B520u;
label_11b520:
    // 0x11b520: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x11b520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b524: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B524u;
    {
        const bool branch_taken_0x11b524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b524) {
            ctx->pc = 0x11B548u;
            goto label_11b548;
        }
    }
    ctx->pc = 0x11B52Cu;
    // 0x11b52c: 0x15c00018  bnez        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x11B52Cu;
    {
        const bool branch_taken_0x11b52c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B52Cu;
        // 0x11b530: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b52c) {
            ctx->pc = 0x11B590u;
            goto label_11b590;
        }
    }
    ctx->pc = 0x11B534u;
    // 0x11b534: 0x14e30016  bne         $a3, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11B534u;
    {
        const bool branch_taken_0x11b534 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b534) {
            ctx->pc = 0x11B590u;
            goto label_11b590;
        }
    }
    ctx->pc = 0x11B53Cu;
    // 0x11b53c: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x11b53cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11b540: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11B540u;
    {
        const bool branch_taken_0x11b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B540u;
        // 0x11b544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b540) {
            ctx->pc = 0x11B590u;
            goto label_11b590;
        }
    }
    ctx->pc = 0x11B548u;
label_11b548:
    // 0x11b548: 0x11ea0005  beq         $t7, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B548u;
    {
        const bool branch_taken_0x11b548 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        ctx->pc = 0x11B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B548u;
        // 0x11b54c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b548) {
            ctx->pc = 0x11B560u;
            goto label_11b560;
        }
    }
    ctx->pc = 0x11B550u;
    // 0x11b550: 0x11e90003  beq         $t7, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B550u;
    {
        const bool branch_taken_0x11b550 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 9));
        if (branch_taken_0x11b550) {
            ctx->pc = 0x11B560u;
            goto label_11b560;
        }
    }
    ctx->pc = 0x11B558u;
    // 0x11b558: 0x15e80002  bne         $t7, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B558u;
    {
        const bool branch_taken_0x11b558 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 8));
        if (branch_taken_0x11b558) {
            ctx->pc = 0x11B564u;
            goto label_11b564;
        }
    }
    ctx->pc = 0x11B560u;
label_11b560:
    // 0x11b560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b564:
    // 0x11b564: 0x0  nop
    ctx->pc = 0x11b564u;
    // NOP
    // 0x11b568: 0x15ec0005  bne         $t7, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B568u;
    {
        const bool branch_taken_0x11b568 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 12));
        if (branch_taken_0x11b568) {
            ctx->pc = 0x11B580u;
            goto label_11b580;
        }
    }
    ctx->pc = 0x11B570u;
    // 0x11b570: 0x14e40003  bne         $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B570u;
    {
        const bool branch_taken_0x11b570 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x11b570) {
            ctx->pc = 0x11B580u;
            goto label_11b580;
        }
    }
    ctx->pc = 0x11B578u;
    // 0x11b578: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x11b578u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b57c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b57cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b580:
    // 0x11b580: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x11b580u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x11b584: 0x29a30160  slti        $v1, $t5, 0x160
    ctx->pc = 0x11b584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)352) ? 1 : 0);
    // 0x11b588: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x11B588u;
    {
        const bool branch_taken_0x11b588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B588u;
        // 0x11b58c: 0xad1821  addu        $v1, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b588) {
            ctx->pc = 0x11B4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b4d8;
        }
    }
    ctx->pc = 0x11B590u;
label_11b590:
    // 0x11b590: 0x3e00008  jr          $ra
    ctx->pc = 0x11B590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B598u;
}
