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

// Function: FUN_001dcb00
// Address: 0x1dcb00 - 0x1dcb68
void FUN_001dcb00_0x1dcb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dcb00_0x1dcb00");
#endif

    switch (ctx->pc) {
        case 0x1dcb10u: goto label_1dcb10;
        default: break;
    }

    ctx->pc = 0x1dcb00u;

    // 0x1dcb00: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dcb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dcb04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dcb04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcb08: 0x24437330  addiu       $v1, $v0, 0x7330
    ctx->pc = 0x1dcb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dcb0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcb0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb10:
    // 0x1dcb10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dcb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcb14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcb18: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1DCB18u;
    {
        const bool branch_taken_0x1dcb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb18) {
            ctx->pc = 0x1DCB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB18u;
            // 0x1dcb1c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB20u;
    // 0x1dcb20: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dcb24: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCB24u;
    {
        const bool branch_taken_0x1dcb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dcb24) {
            ctx->pc = 0x1DCB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB24u;
            // 0x1dcb28: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB2Cu;
    // 0x1dcb2c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1dcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1dcb30: 0x54460008  bnel        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCB30u;
    {
        const bool branch_taken_0x1dcb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1dcb30) {
            ctx->pc = 0x1DCB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB30u;
            // 0x1dcb34: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB38u;
    // 0x1dcb38: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1dcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1dcb3c: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCB3Cu;
    {
        const bool branch_taken_0x1dcb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1dcb3c) {
            ctx->pc = 0x1DCB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB3Cu;
            // 0x1dcb40: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB54u;
            goto label_1dcb54;
        }
    }
    ctx->pc = 0x1DCB44u;
    // 0x1dcb44: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1dcb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1dcb48: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dcb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dcb4c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1dcb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1dcb50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dcb50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dcb54:
    // 0x1dcb54: 0x29020030  slti        $v0, $t0, 0x30
    ctx->pc = 0x1dcb54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1dcb58: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DCB58u;
    {
        const bool branch_taken_0x1dcb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB58u;
        // 0x1dcb5c: 0x246300e8  addiu       $v1, $v1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb58) {
            ctx->pc = 0x1DCB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcb10;
        }
    }
    ctx->pc = 0x1DCB60u;
    // 0x1dcb60: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB60u;
        // 0x1dcb64: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCB68u;
}
