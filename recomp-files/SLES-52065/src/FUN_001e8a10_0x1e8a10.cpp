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

// Function: FUN_001e8a10
// Address: 0x1e8a10 - 0x1e8aa4
void FUN_001e8a10_0x1e8a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8a10_0x1e8a10");
#endif

    switch (ctx->pc) {
        case 0x1e8a30u: goto label_1e8a30;
        case 0x1e8a3cu: goto label_1e8a3c;
        case 0x1e8a54u: goto label_1e8a54;
        case 0x1e8a6cu: goto label_1e8a6c;
        default: break;
    }

    ctx->pc = 0x1e8a10u;

    // 0x1e8a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8a18: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x1e8a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x1e8a1c: 0x83828760  lb          $v0, -0x78A0($gp)
    ctx->pc = 0x1e8a1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936416)));
    // 0x1e8a20: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E8A20u;
    {
        const bool branch_taken_0x1e8a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A20u;
        // 0x1e8a24: 0x3a0f021  addu        $fp, $sp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a20) {
            ctx->pc = 0x1E8A5Cu;
            goto label_1e8a5c;
        }
    }
    ctx->pc = 0x1E8A28u;
    // 0x1e8a28: 0xc07a2ac  jal         func_1E8AB0
    ctx->pc = 0x1E8A28u;
    SET_GPR_U32(ctx, 31, 0x1E8A30u);
    ctx->pc = 0x1E8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8AB0u, 0x1E8A28u, 0x1E8A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A30u;
label_1e8a30:
    // 0x1e8a30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8a34: 0xc04814c  jal         func_120530
    ctx->pc = 0x1E8A34u;
    SET_GPR_U32(ctx, 31, 0x1E8A3Cu);
    ctx->pc = 0x1E8A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A34u;
    // 0x1e8a38: 0x27848768  addiu       $a0, $gp, -0x7898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120530u, 0x1E8A34u, 0x1E8A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A3Cu;
label_1e8a3c:
    // 0x1e8a3c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1e8a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1e8a40: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e8a40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e8a44: 0x27848768  addiu       $a0, $gp, -0x7898
    ctx->pc = 0x1e8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936424));
    // 0x1e8a48: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1e8a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1e8a4c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1E8A4Cu;
    SET_GPR_U32(ctx, 31, 0x1E8A54u);
    ctx->pc = 0x1E8A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A4Cu;
    // 0x1e8a50: 0x24c6ba28  addiu       $a2, $a2, -0x45D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E8A4Cu, 0x1E8A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A54u;
label_1e8a54:
    // 0x1e8a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8a58: 0xa3828760  sb          $v0, -0x78A0($gp)
    ctx->pc = 0x1e8a58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936416), (uint8_t)GPR_U32(ctx, 2));
label_1e8a5c:
    // 0x1e8a5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E8A5Cu;
    {
        const bool branch_taken_0x1e8a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A5Cu;
        // 0x1e8a60: 0x27828768  addiu       $v0, $gp, -0x7898 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8a5c) {
            ctx->pc = 0x1E8A8Cu;
            goto label_1e8a8c;
        }
    }
    ctx->pc = 0x1E8A64u;
    // 0x1e8a64: 0xc07a704  jal         func_1E9C10
    ctx->pc = 0x1E8A64u;
    SET_GPR_U32(ctx, 31, 0x1E8A6Cu);
    ctx->pc = 0x1E8A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8A64u;
    // 0x1e8a68: 0x27c40020  addiu       $a0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E8A64u, 0x1E8A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A6Cu;
label_1e8a6c:
    // 0x1e8a6c: 0x0  nop
    ctx->pc = 0x1e8a6cu;
    // NOP
    // 0x1e8a70: 0x0  nop
    ctx->pc = 0x1e8a70u;
    // NOP
    // 0x1e8a74: 0x0  nop
    ctx->pc = 0x1e8a74u;
    // NOP
    // 0x1e8a78: 0x0  nop
    ctx->pc = 0x1e8a78u;
    // NOP
    // 0x1e8a7c: 0x0  nop
    ctx->pc = 0x1e8a7cu;
    // NOP
    // 0x1e8a80: 0x0  nop
    ctx->pc = 0x1e8a80u;
    // NOP
    // 0x1e8a84: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8A84u;
    {
        const bool branch_taken_0x1e8a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a84) {
            ctx->pc = 0x1E8A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8a6c;
        }
    }
    ctx->pc = 0x1E8A8Cu;
label_1e8a8c:
    // 0x1e8a8c: 0x0  nop
    ctx->pc = 0x1e8a8cu;
    // NOP
    // 0x1e8a90: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e8a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e8a94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8a98: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x1e8a98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8A9Cu;
        // 0x1e8aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8AA4u;
}
