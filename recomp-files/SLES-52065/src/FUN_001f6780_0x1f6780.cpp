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

// Function: FUN_001f6780
// Address: 0x1f6780 - 0x1f6834
void FUN_001f6780_0x1f6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6780_0x1f6780");
#endif

    switch (ctx->pc) {
        case 0x1f67c0u: goto label_1f67c0;
        default: break;
    }

    ctx->pc = 0x1f6780u;

    // 0x1f6780: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f6780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6784: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f6784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f6788: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f6788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f678c: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1f678cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f6790: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f6790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f6794: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6798: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f6798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f679c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f679cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f67a0: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f67a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f67a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f67a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f67ac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f67acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f67b0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F67B0u;
    {
        const bool branch_taken_0x1f67b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67B0u;
        // 0x1f67b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67b0) {
            ctx->pc = 0x1F6828u;
            goto label_1f6828;
        }
    }
    ctx->pc = 0x1F67B8u;
    // 0x1f67b8: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F67B8u;
    SET_GPR_U32(ctx, 31, 0x1F67C0u);
    ctx->pc = 0x1F67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F67B8u;
    // 0x1f67bc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F67B8u, 0x1F67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F67C0u;
label_1f67c0:
    // 0x1f67c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f67c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f67c8: 0x90c20072  lbu         $v0, 0x72($a2)
    ctx->pc = 0x1f67c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 114)));
    // 0x1f67cc: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F67CCu;
    {
        const bool branch_taken_0x1f67cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f67cc) {
            ctx->pc = 0x1F67D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F67CCu;
            // 0x1f67d0: 0x90c20064  lbu         $v0, 0x64($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F67DCu;
            goto label_1f67dc;
        }
    }
    ctx->pc = 0x1F67D4u;
    // 0x1f67d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F67D4u;
    {
        const bool branch_taken_0x1f67d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67D4u;
        // 0x1f67d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67d4) {
            ctx->pc = 0x1F6828u;
            goto label_1f6828;
        }
    }
    ctx->pc = 0x1F67DCu;
label_1f67dc:
    // 0x1f67dc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f67dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f67e0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F67E0u;
    {
        const bool branch_taken_0x1f67e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67E0u;
        // 0x1f67e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67e0) {
            ctx->pc = 0x1F6828u;
            goto label_1f6828;
        }
    }
    ctx->pc = 0x1F67E8u;
    // 0x1f67e8: 0x90c20066  lbu         $v0, 0x66($a2)
    ctx->pc = 0x1f67e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 102)));
    // 0x1f67ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f67ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f67f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F67F0u;
    {
        const bool branch_taken_0x1f67f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F67F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67F0u;
        // 0x1f67f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67f0) {
            ctx->pc = 0x1F6828u;
            goto label_1f6828;
        }
    }
    ctx->pc = 0x1F67F8u;
    // 0x1f67f8: 0x90c5007a  lbu         $a1, 0x7A($a2)
    ctx->pc = 0x1f67f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
    // 0x1f67fc: 0x90c4007c  lbu         $a0, 0x7C($a2)
    ctx->pc = 0x1f67fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1f6800: 0x90c3007b  lbu         $v1, 0x7B($a2)
    ctx->pc = 0x1f6800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 123)));
    // 0x1f6804: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x1f6804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x1f6808: 0x90c20079  lbu         $v0, 0x79($a2)
    ctx->pc = 0x1f6808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 121)));
    // 0x1f680c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1f680cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1f6810: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f6810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f6814: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1f6814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1f6818: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1f6818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1f681c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f681cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1f6820: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f6820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f6824: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f6824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1f6828:
    // 0x1f6828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f682c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F682Cu;
        // 0x1f6830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6834u;
}
