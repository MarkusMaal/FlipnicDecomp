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

// Function: FUN_002089f0
// Address: 0x2089f0 - 0x208a80
void FUN_002089f0_0x2089f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002089f0_0x2089f0");
#endif

    ctx->pc = 0x2089f0u;

    // 0x2089f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2089f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2089f4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x2089f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x2089f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2089f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2089fc: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x2089fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x208a00: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x208a00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x208a04: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x208a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x208a08: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x208a08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x208a0c: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x208A0Cu;
    {
        const bool branch_taken_0x208a0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x208A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A0Cu;
        // 0x208a10: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a0c) {
            ctx->pc = 0x208A20u;
            goto label_208a20;
        }
    }
    ctx->pc = 0x208A14u;
    // 0x208a14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x208a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208a18: 0x3e00008  jr          $ra
    ctx->pc = 0x208A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A18u;
        // 0x208a1c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A20u;
label_208a20:
    // 0x208a20: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208a24: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x208A24u;
    {
        const bool branch_taken_0x208a24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x208A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A24u;
        // 0x208a28: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a24) {
            ctx->pc = 0x208A60u;
            goto label_208a60;
        }
    }
    ctx->pc = 0x208A2Cu;
    // 0x208a2c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x208A2Cu;
    {
        const bool branch_taken_0x208a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A2Cu;
        // 0x208a30: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a2c) {
            ctx->pc = 0x208A40u;
            goto label_208a40;
        }
    }
    ctx->pc = 0x208A34u;
    // 0x208a34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x208a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x208a38: 0x3e00008  jr          $ra
    ctx->pc = 0x208A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A38u;
        // 0x208a3c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A40u;
label_208a40:
    // 0x208a40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x208a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x208a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208A44u;
    {
        const bool branch_taken_0x208a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A44u;
        // 0x208a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a44) {
            ctx->pc = 0x208A54u;
            goto label_208a54;
        }
    }
    ctx->pc = 0x208A4Cu;
    // 0x208a4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208A4Cu;
    {
        const bool branch_taken_0x208a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A4Cu;
        // 0x208a50: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a4c) {
            ctx->pc = 0x208A58u;
            goto label_208a58;
        }
    }
    ctx->pc = 0x208A54u;
label_208a54:
    // 0x208a54: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x208a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_208a58:
    // 0x208a58: 0x3e00008  jr          $ra
    ctx->pc = 0x208A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A58u;
        // 0x208a5c: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A60u;
label_208a60:
    // 0x208a60: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x208a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x208a64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x208a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x208a68: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x208a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x208a6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208a70: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x208a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x208a74: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x208a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x208a78: 0x3e00008  jr          $ra
    ctx->pc = 0x208A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A78u;
        // 0x208a7c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A80u;
}
