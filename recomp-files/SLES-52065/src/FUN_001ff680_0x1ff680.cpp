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

// Function: FUN_001ff680
// Address: 0x1ff680 - 0x1ff760
void FUN_001ff680_0x1ff680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ff680_0x1ff680");
#endif

    switch (ctx->pc) {
        case 0x1ff6e0u: goto label_1ff6e0;
        case 0x1ff73cu: goto label_1ff73c;
        default: break;
    }

    ctx->pc = 0x1ff680u;

    // 0x1ff680: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x1ff680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff684: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FF684u;
    {
        const bool branch_taken_0x1ff684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF684u;
        // 0x1ff688: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff684) {
            ctx->pc = 0x1FF720u;
            goto label_1ff720;
        }
    }
    ctx->pc = 0x1FF68Cu;
    // 0x1ff68c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1ff68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1ff690: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FF690u;
    {
        const bool branch_taken_0x1ff690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF690u;
        // 0x1ff694: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff690) {
            ctx->pc = 0x1FF720u;
            goto label_1ff720;
        }
    }
    ctx->pc = 0x1FF698u;
    // 0x1ff698: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x1ff698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x1ff69c: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x1ff69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x1ff6a0: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x1ff6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x1ff6a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ff6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ff6a8: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x1ff6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x1ff6ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ff6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ff6b0: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x1ff6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x1ff6b4: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x1ff6b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1ff6b8: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1ff6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1ff6bc: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1ff6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1ff6c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ff6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ff6c4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1ff6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1ff6c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ff6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ff6cc: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1ff6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1ff6d0: 0x700a46e9  pcpyh       $t0, $t2
    ctx->pc = 0x1ff6d0u;
    { __m128i src = GPR_VEC(ctx, 10); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 8, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x1ff6d4: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x1ff6d4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x1ff6d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ff6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6dc: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x1ff6dcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_1ff6e0:
    // 0x1ff6e0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1ff6e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ff6e4: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x1ff6e4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1ff6e8: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x1ff6e8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x1ff6ec: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x1ff6ecu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ff6f0: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x1ff6f0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1ff6f4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x1ff6f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ff6f8: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x1ff6f8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1ff6fc: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x1ff6fcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1ff700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ff700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ff704: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF704u;
    {
        const bool branch_taken_0x1ff704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff704) {
            ctx->pc = 0x1FF708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF704u;
            // 0x1ff708: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF720u;
            goto label_1ff720;
        }
    }
    ctx->pc = 0x1FF70Cu;
    // 0x1ff70c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1ff70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1ff710: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x1ff710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff714: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FF714u;
    {
        const bool branch_taken_0x1ff714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF714u;
        // 0x1ff718: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff714) {
            ctx->pc = 0x1FF6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff6e0;
        }
    }
    ctx->pc = 0x1FF71Cu;
    // 0x1ff71c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1ff71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ff720:
    // 0x1ff720: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1ff720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff724: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff728: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ff728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ff72c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF72Cu;
    {
        const bool branch_taken_0x1ff72c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff72c) {
            ctx->pc = 0x1FF750u;
            goto label_1ff750;
        }
    }
    ctx->pc = 0x1FF734u;
    // 0x1ff734: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ff734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ff738: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ff738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1ff73c:
    // 0x1ff73c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1ff73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff740: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF740u;
    {
        const bool branch_taken_0x1ff740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF740u;
        // 0x1ff744: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff740) {
            ctx->pc = 0x1FF758u;
            goto label_1ff758;
        }
    }
    ctx->pc = 0x1FF748u;
    // 0x1ff748: 0x14c3fffc  bne         $a2, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1FF748u;
    {
        const bool branch_taken_0x1ff748 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF748u;
        // 0x1ff74c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff748) {
            ctx->pc = 0x1FF73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff73c;
        }
    }
    ctx->pc = 0x1FF750u;
label_1ff750:
    // 0x1ff750: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF750u;
        // 0x1ff754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF758u;
label_1ff758:
    // 0x1ff758: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF758u;
        // 0x1ff75c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF760u;
}
