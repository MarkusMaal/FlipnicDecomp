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

// Function: entry_0012f1b0
// Address: 0x12f1b0 - 0x12f20c
void entry_0012f1b0_0x12f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f1b0_0x12f1b0");
#endif

    ctx->pc = 0x12f1b0u;

label_12f1b0:
    // 0x12f1b0: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x12f1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12f1b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12f1b8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x12f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x12f1bc: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x12f1bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x12f1c0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x12f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x12f1c4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x12f1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x12f1c8: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x12f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x12f1cc: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x12f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x12f1d0: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x12f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x12f1d4: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x12f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x12f1d8: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x12f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x12f1dc: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x12f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x12f1e0: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x12f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x12f1e4: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x12f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x12f1e8: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x12f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x12f1ec: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x12f1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x12f1f0: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x12f1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x12f1f4: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x12f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x12f1f8: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x12f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x12f1fc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12F1FCu;
    {
        const bool branch_taken_0x12f1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1FCu;
        // 0x12f200: 0xace0003c  sw          $zero, 0x3C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1fc) {
            ctx->pc = 0x12F1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f1b0;
        }
    }
    ctx->pc = 0x12F204u;
    // 0x12f204: 0x3e00008  jr          $ra
    ctx->pc = 0x12F204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F20Cu;
}
