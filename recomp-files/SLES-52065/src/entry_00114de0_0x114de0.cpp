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

// Function: entry_00114de0
// Address: 0x114de0 - 0x114e5c
void entry_00114de0_0x114de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114de0_0x114de0");
#endif

    switch (ctx->pc) {
        case 0x114e0cu: goto label_114e0c;
        case 0x114e2cu: goto label_114e2c;
        case 0x114e4cu: goto label_114e4c;
        default: break;
    }

    ctx->pc = 0x114de0u;

label_114de0:
    // 0x114de0: 0x10400367  beqz        $v0, . + 4 + (0x367 << 2)
label_114de4:
    if (ctx->pc == 0x114DE4u) {
        ctx->pc = 0x114DE8u;
        goto label_114de8;
    }
    ctx->pc = 0x114DE0u;
    {
        const bool branch_taken_0x114de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114de0) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114DE8u;
label_114de8:
    // 0x114de8: 0x93828290  lbu         $v0, -0x7D70($gp)
    ctx->pc = 0x114de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935184)));
label_114dec:
    // 0x114dec: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x114decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_114df0:
    // 0x114df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114df4:
    // 0x114df4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x114df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_114df8:
    // 0x114df8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114dfc:
    // 0x114dfc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114e00:
    // 0x114e00: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114e04:
    // 0x114e04: 0x320f809  jalr        $t9
label_114e08:
    if (ctx->pc == 0x114E08u) {
        ctx->pc = 0x114E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E04u;
        // 0x114e08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E0Cu;
        goto label_114e0c;
    }
    ctx->pc = 0x114E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114E0Cu);
        ctx->pc = 0x114E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E04u;
        // 0x114e08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E04u, 0x114E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114E0Cu;
label_114e0c:
    // 0x114e0c: 0x93828294  lbu         $v0, -0x7D6C($gp)
    ctx->pc = 0x114e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935188)));
label_114e10:
    // 0x114e10: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x114e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_114e14:
    // 0x114e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114e18:
    // 0x114e18: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114e18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114e1c:
    // 0x114e1c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114e20:
    // 0x114e20: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114e24:
    // 0x114e24: 0x320f809  jalr        $t9
label_114e28:
    if (ctx->pc == 0x114E28u) {
        ctx->pc = 0x114E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E24u;
        // 0x114e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E2Cu;
        goto label_114e2c;
    }
    ctx->pc = 0x114E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114E2Cu);
        ctx->pc = 0x114E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E24u;
        // 0x114e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114E24u, 0x114E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114E2Cu;
label_114e2c:
    // 0x114e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_114e30:
    // 0x114e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e34:
    // 0x114e34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e38:
    // 0x114e38: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x114e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_114e3c:
    // 0x114e3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x114e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114e40:
    // 0x114e40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x114e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114e44:
    // 0x114e44: 0xc045700  jal         func_115C00
label_114e48:
    if (ctx->pc == 0x114E48u) {
        ctx->pc = 0x114E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E44u;
        // 0x114e48: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E4Cu;
        goto label_114e4c;
    }
    ctx->pc = 0x114E44u;
    SET_GPR_U32(ctx, 31, 0x114E4Cu);
    ctx->pc = 0x114E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E44u;
    // 0x114e48: 0x240a0009  addiu       $t2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x114E44u, 0x114E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E4Cu;
label_114e4c:
    // 0x114e4c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114e50:
    // 0x114e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114e54:
    // 0x114e54: 0x1000034a  b           . + 4 + (0x34A << 2)
label_114e58:
    if (ctx->pc == 0x114E58u) {
        ctx->pc = 0x114E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E54u;
        // 0x114e58: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114E5Cu;
        goto label_fallthrough_0x114e54;
    }
    ctx->pc = 0x114E54u;
    {
        const bool branch_taken_0x114e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E54u;
        // 0x114e58: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e54) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x114e54:
    ctx->pc = 0x114E5Cu;
}
