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

// Function: FUN_001bae10
// Address: 0x1bae10 - 0x1bae60
void FUN_001bae10_0x1bae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bae10_0x1bae10");
#endif

    ctx->pc = 0x1bae10u;

    // 0x1bae10: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BAE10u;
    {
        const bool branch_taken_0x1bae10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE10u;
        // 0x1bae14: 0x3c03bd23  lui         $v1, 0xBD23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48419 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae10) {
            ctx->pc = 0x1BAE3Cu;
            goto label_1bae3c;
        }
    }
    ctx->pc = 0x1BAE18u;
    // 0x1bae18: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bae1c: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x1bae1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1bae20: 0xac8600a8  sw          $a2, 0xA8($a0)
    ctx->pc = 0x1bae20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 6));
    // 0x1bae24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bae24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bae28: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1bae28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1bae2c: 0xac850078  sw          $a1, 0x78($a0)
    ctx->pc = 0x1bae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
    // 0x1bae30: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x1bae30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x1bae34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAE34u;
    {
        const bool branch_taken_0x1bae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE34u;
        // 0x1bae38: 0xa08300a0  sb          $v1, 0xA0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae34) {
            ctx->pc = 0x1BAE58u;
            goto label_1bae58;
        }
    }
    ctx->pc = 0x1BAE3Cu;
label_1bae3c:
    // 0x1bae3c: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1bae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1bae40: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bae44: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x1bae44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x1bae48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bae4c: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x1bae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x1bae50: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x1bae50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x1bae54: 0xa08300a0  sb          $v1, 0xA0($a0)
    ctx->pc = 0x1bae54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 3));
label_1bae58:
    // 0x1bae58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAE60u;
}
