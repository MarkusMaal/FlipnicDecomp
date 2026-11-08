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

// Function: FUN_001d4de0
// Address: 0x1d4de0 - 0x1d4ef8
void FUN_001d4de0_0x1d4de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4de0_0x1d4de0");
#endif

    switch (ctx->pc) {
        case 0x1d4e70u: goto label_1d4e70;
        default: break;
    }

    ctx->pc = 0x1d4de0u;

    // 0x1d4de0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1d4de0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4de4: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1d4de8: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d4dec: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x1d4decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d4df0: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x1d4df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d4df4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d4df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4df8: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x1d4df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d4dfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4e00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d4e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4e04: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d4e08: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d4e0c: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1d4e0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d4e10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d4e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d4e14: 0x24210558  addiu       $at, $at, 0x558
    ctx->pc = 0x1d4e14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 1368));
    // 0x1d4e18: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1d4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d4e1c: 0x240d0064  addiu       $t5, $zero, 0x64
    ctx->pc = 0x1d4e1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d4e20: 0xac47002c  sw          $a3, 0x2C($v0)
    ctx->pc = 0x1d4e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 7));
    // 0x1d4e24: 0x240c007f  addiu       $t4, $zero, 0x7F
    ctx->pc = 0x1d4e24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d4e28: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1d4e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1d4e2c: 0xac490038  sw          $t1, 0x38($v0)
    ctx->pc = 0x1d4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 9));
    // 0x1d4e30: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1d4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1d4e34: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1d4e38: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1d4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1d4e3c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1d4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1d4e40: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1d4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1d4e44: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1d4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1d4e48: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1d4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1d4e4c: 0xac4302a0  sw          $v1, 0x2A0($v0)
    ctx->pc = 0x1d4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 672), GPR_U32(ctx, 3));
    // 0x1d4e50: 0x244302a4  addiu       $v1, $v0, 0x2A4
    ctx->pc = 0x1d4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 676));
    // 0x1d4e54: 0xa0440058  sb          $a0, 0x58($v0)
    ctx->pc = 0x1d4e54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d4e58: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1d4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d4e5c: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1d4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x1d4e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4e64: 0xac460030  sw          $a2, 0x30($v0)
    ctx->pc = 0x1d4e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
    // 0x1d4e68: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1d4e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d4e6c: 0x0  nop
    ctx->pc = 0x1d4e6cu;
    // NOP
label_1d4e70:
    // 0x1d4e70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d4e74: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1d4e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1d4e78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d4e7c: 0xac6e0008  sw          $t6, 0x8($v1)
    ctx->pc = 0x1d4e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 14));
    // 0x1d4e80: 0xac6b000c  sw          $t3, 0xC($v1)
    ctx->pc = 0x1d4e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 11));
    // 0x1d4e84: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1d4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1d4e88: 0xac6d0014  sw          $t5, 0x14($v1)
    ctx->pc = 0x1d4e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 13));
    // 0x1d4e8c: 0xac6c0020  sw          $t4, 0x20($v1)
    ctx->pc = 0x1d4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 12));
    // 0x1d4e90: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d4e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1d4e94: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1d4e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1d4e98: 0xac6b0034  sw          $t3, 0x34($v1)
    ctx->pc = 0x1d4e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 11));
    // 0x1d4e9c: 0xa0600068  sb          $zero, 0x68($v1)
    ctx->pc = 0x1d4e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d4ea0: 0xa0600069  sb          $zero, 0x69($v1)
    ctx->pc = 0x1d4ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d4ea4: 0xa060006a  sb          $zero, 0x6A($v1)
    ctx->pc = 0x1d4ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d4ea8: 0xa060006b  sb          $zero, 0x6B($v1)
    ctx->pc = 0x1d4ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 107), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d4eac: 0xac66004c  sw          $a2, 0x4C($v1)
    ctx->pc = 0x1d4eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 6));
    // 0x1d4eb0: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x1d4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x1d4eb4: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x1d4eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x1d4eb8: 0xa4600060  sh          $zero, 0x60($v1)
    ctx->pc = 0x1d4eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4ebc: 0xa4600062  sh          $zero, 0x62($v1)
    ctx->pc = 0x1d4ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4ec0: 0xa4600064  sh          $zero, 0x64($v1)
    ctx->pc = 0x1d4ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4ec4: 0xa4600066  sh          $zero, 0x66($v1)
    ctx->pc = 0x1d4ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 102), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d4ec8: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1d4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1d4ecc: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1d4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1d4ed0: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x1d4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x1d4ed4: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1d4ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1d4ed8: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x1d4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x1d4edc: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x1d4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x1d4ee0: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x1d4ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x1d4ee4: 0xac650044  sw          $a1, 0x44($v1)
    ctx->pc = 0x1d4ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
    // 0x1d4ee8: 0x481ffe1  bgez        $a0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1D4EE8u;
    {
        const bool branch_taken_0x1d4ee8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EE8u;
        // 0x1d4eec: 0x24630074  addiu       $v1, $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ee8) {
            ctx->pc = 0x1D4E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4e70;
        }
    }
    ctx->pc = 0x1D4EF0u;
    // 0x1d4ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4EF8u;
}
