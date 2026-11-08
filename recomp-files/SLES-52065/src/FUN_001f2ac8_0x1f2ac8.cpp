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

// Function: FUN_001f2ac8
// Address: 0x1f2ac8 - 0x1f2bc8
void FUN_001f2ac8_0x1f2ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2ac8_0x1f2ac8");
#endif

    switch (ctx->pc) {
        case 0x1f2af0u: goto label_1f2af0;
        case 0x1f2b04u: goto label_1f2b04;
        case 0x1f2b48u: goto label_1f2b48;
        case 0x1f2b88u: goto label_1f2b88;
        default: break;
    }

    ctx->pc = 0x1f2ac8u;

    // 0x1f2ac8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f2acc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f2accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f2ad0: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f2ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f2ad4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f2ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f2ad8: 0x8e42a480  lw          $v0, -0x5B80($s2)
    ctx->pc = 0x1f2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A480u));
    // 0x1f2adc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f2adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f2ae0: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F2AE0u;
    {
        const bool branch_taken_0x1f2ae0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AE0u;
        // 0x1f2ae4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ae0) {
            ctx->pc = 0x1F2BACu;
            goto label_1f2bac;
        }
    }
    ctx->pc = 0x1F2AE8u;
    // 0x1f2ae8: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f2ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1f2aec: 0x2630fd80  addiu       $s0, $s1, -0x280
    ctx->pc = 0x1f2aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966656));
label_1f2af0:
    // 0x1f2af0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f2af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f2af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2af8: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x1f2af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x1f2afc: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1F2AFCu;
    SET_GPR_U32(ctx, 31, 0x1F2B04u);
    ctx->pc = 0x1F2B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2AFCu;
    // 0x1f2b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1F2AFCu, 0x1F2B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B04u;
label_1f2b04:
    // 0x1f2b04: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2B04u;
    {
        const bool branch_taken_0x1f2b04 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f2b04) {
            ctx->pc = 0x1F2B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2B04u;
            // 0x1f2b08: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2B14u;
            goto label_1f2b14;
        }
    }
    ctx->pc = 0x1F2B0Cu;
    // 0x1f2b0c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F2B0Cu;
    {
        const bool branch_taken_0x1f2b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B0Cu;
        // 0x1f2b10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b0c) {
            ctx->pc = 0x1F2BB0u;
            goto label_1f2bb0;
        }
    }
    ctx->pc = 0x1F2B14u;
label_1f2b14:
    // 0x1f2b14: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F2B14u;
    {
        const bool branch_taken_0x1f2b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B14u;
        // 0x1f2b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b14) {
            ctx->pc = 0x1F2B7Cu;
            goto label_1f2b7c;
        }
    }
    ctx->pc = 0x1F2B1Cu;
    // 0x1f2b1c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f2b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1f2b20: 0xae40a480  sw          $zero, -0x5B80($s2)
    ctx->pc = 0x1f2b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943872), GPR_U32(ctx, 0));
    // 0x1f2b24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2b28: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1f2b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f2b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f2b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f2b34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b38: 0x2629fb80  addiu       $t1, $s1, -0x480
    ctx->pc = 0x1f2b38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966144));
    // 0x1f2b3c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2b40: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2B40u;
    SET_GPR_U32(ctx, 31, 0x1F2B48u);
    ctx->pc = 0x1F2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B40u;
    // 0x1f2b44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2B40u, 0x1F2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B48u;
label_1f2b48:
    // 0x1f2b48: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2B48u;
    {
        const bool branch_taken_0x1f2b48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B48u;
        // 0x1f2b4c: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b48) {
            ctx->pc = 0x1F2B5Cu;
            goto label_1f2b5c;
        }
    }
    ctx->pc = 0x1F2B50u;
    // 0x1f2b50: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f2b54: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F2B54u;
    {
        const bool branch_taken_0x1f2b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B54u;
        // 0x1f2b58: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b54) {
            ctx->pc = 0x1F2BB0u;
            goto label_1f2bb0;
        }
    }
    ctx->pc = 0x1F2B5Cu;
label_1f2b5c:
    // 0x1f2b5c: 0x2627fb80  addiu       $a3, $s1, -0x480
    ctx->pc = 0x1f2b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966144));
    // 0x1f2b60: 0x2466fda8  addiu       $a2, $v1, -0x258
    ctx->pc = 0x1f2b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966696));
    // 0x1f2b64: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1f2b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1f2b68: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1f2b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1f2b6c: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x1f2b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f2b70: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x1f2b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1f2b74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F2B74u;
    {
        const bool branch_taken_0x1f2b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B74u;
        // 0x1f2b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b74) {
            ctx->pc = 0x1F2BB0u;
            goto label_1f2bb0;
        }
    }
    ctx->pc = 0x1F2B7Cu;
label_1f2b7c:
    // 0x1f2b7c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1f2b80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2b84: 0x0  nop
    ctx->pc = 0x1f2b84u;
    // NOP
label_1f2b88:
    // 0x1f2b88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f2b8c: 0x0  nop
    ctx->pc = 0x1f2b8cu;
    // NOP
    // 0x1f2b90: 0x0  nop
    ctx->pc = 0x1f2b90u;
    // NOP
    // 0x1f2b94: 0x0  nop
    ctx->pc = 0x1f2b94u;
    // NOP
    // 0x1f2b98: 0x0  nop
    ctx->pc = 0x1f2b98u;
    // NOP
    // 0x1f2b9c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F2B9Cu;
    {
        const bool branch_taken_0x1f2b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f2b9c) {
            ctx->pc = 0x1F2B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2b88;
        }
    }
    ctx->pc = 0x1F2BA4u;
    // 0x1f2ba4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1F2BA4u;
    {
        const bool branch_taken_0x1f2ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BA4u;
        // 0x1f2ba8: 0x2630fd80  addiu       $s0, $s1, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ba4) {
            ctx->pc = 0x1F2AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2af0;
        }
    }
    ctx->pc = 0x1F2BACu;
label_1f2bac:
    // 0x1f2bac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2bb0:
    // 0x1f2bb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f2bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2bb4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f2bb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2bb8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f2bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2bbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f2bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BC0u;
        // 0x1f2bc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2BC8u;
}
