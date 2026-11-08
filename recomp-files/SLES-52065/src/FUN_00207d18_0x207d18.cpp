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

// Function: FUN_00207d18
// Address: 0x207d18 - 0x207db4
void FUN_00207d18_0x207d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00207d18_0x207d18");
#endif

    ctx->pc = 0x207d18u;

    // 0x207d18: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x207d18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207d1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x207d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x207d20: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x207d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x207d24: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x207d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x207d28: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x207d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x207d2c: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x207d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x207d30: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x207d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x207d34: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x207d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x207d38: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x207D38u;
    {
        const bool branch_taken_0x207d38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x207D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D38u;
        // 0x207d3c: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d38) {
            ctx->pc = 0x207D50u;
            goto label_207d50;
        }
    }
    ctx->pc = 0x207D40u;
    // 0x207d40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207d44: 0x3e00008  jr          $ra
    ctx->pc = 0x207D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D44u;
        // 0x207d48: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D4Cu;
    // 0x207d4c: 0x0  nop
    ctx->pc = 0x207d4cu;
    // NOP
label_207d50:
    // 0x207d50: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x207D50u;
    {
        const bool branch_taken_0x207d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x207d50) {
            ctx->pc = 0x207D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207D50u;
            // 0x207d54: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207D90u;
            goto label_207d90;
        }
    }
    ctx->pc = 0x207D58u;
    // 0x207d58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207D58u;
    {
        const bool branch_taken_0x207d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D58u;
        // 0x207d5c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d58) {
            ctx->pc = 0x207D68u;
            goto label_207d68;
        }
    }
    ctx->pc = 0x207D60u;
    // 0x207d60: 0x3e00008  jr          $ra
    ctx->pc = 0x207D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D60u;
        // 0x207d64: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D68u;
label_207d68:
    // 0x207d68: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x207d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x207d6c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x207d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x207d70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207d74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207D74u;
    {
        const bool branch_taken_0x207d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D74u;
        // 0x207d78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d74) {
            ctx->pc = 0x207D84u;
            goto label_207d84;
        }
    }
    ctx->pc = 0x207D7Cu;
    // 0x207d7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x207D7Cu;
    {
        const bool branch_taken_0x207d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D7Cu;
        // 0x207d80: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d7c) {
            ctx->pc = 0x207D88u;
            goto label_207d88;
        }
    }
    ctx->pc = 0x207D84u;
label_207d84:
    // 0x207d84: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x207d84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_207d88:
    // 0x207d88: 0x3e00008  jr          $ra
    ctx->pc = 0x207D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D88u;
        // 0x207d8c: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D90u;
label_207d90:
    // 0x207d90: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x207d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x207d94: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x207d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x207d98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x207d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207d9c: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x207d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x207da0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x207da4: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x207da4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x207da8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x207da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x207dac: 0x3e00008  jr          $ra
    ctx->pc = 0x207DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207DACu;
        // 0x207db0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207DB4u;
}
