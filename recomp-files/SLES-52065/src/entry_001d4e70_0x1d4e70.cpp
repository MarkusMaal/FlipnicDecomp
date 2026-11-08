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

// Function: entry_001d4e70
// Address: 0x1d4e70 - 0x1d4ef8
void entry_001d4e70_0x1d4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e70_0x1d4e70");
#endif

    ctx->pc = 0x1d4e70u;

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
