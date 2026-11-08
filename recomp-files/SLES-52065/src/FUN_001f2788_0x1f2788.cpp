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

// Function: FUN_001f2788
// Address: 0x1f2788 - 0x1f2878
void FUN_001f2788_0x1f2788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2788_0x1f2788");
#endif

    switch (ctx->pc) {
        case 0x1f27d8u: goto label_1f27d8;
        case 0x1f285cu: goto label_1f285c;
        default: break;
    }

    ctx->pc = 0x1f2788u;

    // 0x1f2788: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f2788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f278c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f278cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2790: 0x8c43a478  lw          $v1, -0x5B88($v0)
    ctx->pc = 0x1f2790u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A478u));
    // 0x1f2794: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f2794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f279c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F279Cu;
    {
        const bool branch_taken_0x1f279c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F279Cu;
        // 0x1f27a0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f279c) {
            ctx->pc = 0x1F27ACu;
            goto label_1f27ac;
        }
    }
    ctx->pc = 0x1F27A4u;
    // 0x1f27a4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1F27A4u;
    {
        const bool branch_taken_0x1f27a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27A4u;
        // 0x1f27a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27a4) {
            ctx->pc = 0x1F2868u;
            goto label_1f2868;
        }
    }
    ctx->pc = 0x1F27ACu;
label_1f27ac:
    // 0x1f27ac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1f27acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f27b0: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1f27b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1f27b4: 0x24e3fa80  addiu       $v1, $a3, -0x580
    ctx->pc = 0x1f27b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965888));
    // 0x1f27b8: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x1f27b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x38FA84u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x38FA84u, _value); } while (0);
    // 0x1f27bc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1f27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f27c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F27C0u;
    {
        const bool branch_taken_0x1f27c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27C0u;
        // 0x1f27c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27c0) {
            ctx->pc = 0x1F2808u;
            goto label_1f2808;
        }
    }
    ctx->pc = 0x1F27C8u;
    // 0x1f27c8: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f27c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f27cc: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f27ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f27d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f27d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f27d4: 0x0  nop
    ctx->pc = 0x1f27d4u;
    // NOP
label_1f27d8:
    // 0x1f27d8: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x1f27d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1f27dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F27DCu;
    {
        const bool branch_taken_0x1f27dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27DCu;
        // 0x1f27e0: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27dc) {
            ctx->pc = 0x1F2810u;
            goto label_1f2810;
        }
    }
    ctx->pc = 0x1F27E4u;
    // 0x1f27e4: 0x24e3fa80  addiu       $v1, $a3, -0x580
    ctx->pc = 0x1f27e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965888));
    // 0x1f27e8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1f27e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f27ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1f27f0: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1f27f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f27f4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1f27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1f27f8: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F27F8u;
    {
        const bool branch_taken_0x1f27f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f27f8) {
            ctx->pc = 0x1F27FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F27F8u;
            // 0x1f27fc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F27D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f27d8;
        }
    }
    ctx->pc = 0x1F2800u;
    // 0x1f2800: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2800u;
    {
        const bool branch_taken_0x1f2800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2800u;
        // 0x1f2804: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2800) {
            ctx->pc = 0x1F2814u;
            goto label_1f2814;
        }
    }
    ctx->pc = 0x1F2808u;
label_1f2808:
    // 0x1f2808: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f2808u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f280c: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f280cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
label_1f2810:
    // 0x1f2810: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1f2810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1f2814:
    // 0x1f2814: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2814u;
    {
        const bool branch_taken_0x1f2814 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2814) {
            ctx->pc = 0x1F2818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2814u;
            // 0x1f2818: 0xace5fa80  sw          $a1, -0x580($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4294965888), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F282Cu;
            goto label_1f282c;
        }
    }
    ctx->pc = 0x1F281Cu;
    // 0x1f281c: 0x24e2fa80  addiu       $v0, $a3, -0x580
    ctx->pc = 0x1f281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965888));
    // 0x1f2820: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x1f2820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x1f2824: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1f2824u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2828: 0xace5fa80  sw          $a1, -0x580($a3)
    ctx->pc = 0x1f2828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294965888), GPR_U32(ctx, 5));
label_1f282c:
    // 0x1f282c: 0x24e2fa80  addiu       $v0, $a3, -0x580
    ctx->pc = 0x1f282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965888));
    // 0x1f2830: 0x2524f9c0  addiu       $a0, $t1, -0x640
    ctx->pc = 0x1f2830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965696));
    // 0x1f2834: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1f2834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2838: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f283c: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x1f283cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1f2840: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2844: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f2844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2848: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f284c: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f284cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f2850: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2854: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2854u;
    SET_GPR_U32(ctx, 31, 0x1F285Cu);
    ctx->pc = 0x1F2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2854u;
    // 0x1f2858: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2854u, 0x1F285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F285Cu;
label_1f285c:
    // 0x1f285c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F285Cu;
    {
        const bool branch_taken_0x1f285c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F285Cu;
        // 0x1f2860: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f285c) {
            ctx->pc = 0x1F2868u;
            goto label_1f2868;
        }
    }
    ctx->pc = 0x1F2864u;
    // 0x1f2864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f2864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f2868:
    // 0x1f2868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f286c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f286cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2870: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2870u;
        // 0x1f2874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2878u;
}
