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

// Function: FUN_00133b10
// Address: 0x133b10 - 0x133b88
void FUN_00133b10_0x133b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133b10_0x133b10");
#endif

    switch (ctx->pc) {
        case 0x133b4cu: goto label_133b4c;
        case 0x133b58u: goto label_133b58;
        case 0x133b70u: goto label_133b70;
        default: break;
    }

    ctx->pc = 0x133b10u;

    // 0x133b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x133b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x133b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b24: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x133B24u;
    {
        const bool branch_taken_0x133b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B24u;
        // 0x133b28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b24) {
            ctx->pc = 0x133B70u;
            goto label_133b70;
        }
    }
    ctx->pc = 0x133B2Cu;
    // 0x133b2c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x133b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x133b30: 0x24428cd0  addiu       $v0, $v0, -0x7330
    ctx->pc = 0x133b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
    // 0x133b34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x133b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x133b38: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x133b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x133b3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133B3Cu;
    {
        const bool branch_taken_0x133b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b3c) {
            ctx->pc = 0x133B4Cu;
            goto label_133b4c;
        }
    }
    ctx->pc = 0x133B44u;
    // 0x133b44: 0xc04c178  jal         func_1305E0
    ctx->pc = 0x133B44u;
    SET_GPR_U32(ctx, 31, 0x133B4Cu);
    ctx->pc = 0x1305E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1305E0u, 0x133B44u, 0x133B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B4Cu;
label_133b4c:
    // 0x133b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b50: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x133B50u;
    SET_GPR_U32(ctx, 31, 0x133B58u);
    ctx->pc = 0x133B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B50u;
    // 0x133b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313B0u, 0x133B50u, 0x133B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B58u;
label_133b58:
    // 0x133b58: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x133b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x133b5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x133b5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x133b60: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133B60u;
    {
        const bool branch_taken_0x133b60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x133B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B60u;
        // 0x133b64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b60) {
            ctx->pc = 0x133B74u;
            goto label_133b74;
        }
    }
    ctx->pc = 0x133B68u;
    // 0x133b68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x133B68u;
    SET_GPR_U32(ctx, 31, 0x133B70u);
    ctx->pc = 0x133B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B68u;
    // 0x133b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x133B68u, 0x133B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B70u;
label_133b70:
    // 0x133b70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x133b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133b74:
    // 0x133b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x133b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133b80: 0x3e00008  jr          $ra
    ctx->pc = 0x133B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B80u;
        // 0x133b84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133B88u;
}
