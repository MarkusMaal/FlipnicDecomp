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

// Function: FUN_00203a30
// Address: 0x203a30 - 0x203aa8
void FUN_00203a30_0x203a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203a30_0x203a30");
#endif

    switch (ctx->pc) {
        case 0x203a7cu: goto label_203a7c;
        case 0x203a90u: goto label_203a90;
        default: break;
    }

    ctx->pc = 0x203a30u;

    // 0x203a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x203a34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x203a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x203a38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x203a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203a3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x203a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203a44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x203a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x203a48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a4c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x203a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x203a50: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x203A50u;
    {
        const bool branch_taken_0x203a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x203A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A50u;
        // 0x203a54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a50) {
            ctx->pc = 0x203A68u;
            goto label_203a68;
        }
    }
    ctx->pc = 0x203A58u;
    // 0x203a58: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x203a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x203a5c: 0x8c43d9ac  lw          $v1, -0x2654($v0)
    ctx->pc = 0x203a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x203a60: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x203a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x203a64: 0x0  nop
    ctx->pc = 0x203a64u;
    // NOP
label_203a68:
    // 0x203a68: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x203a6c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x203A6Cu;
    {
        const bool branch_taken_0x203a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203a6c) {
            ctx->pc = 0x203A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203A6Cu;
            // 0x203a70: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203A80u;
            goto label_203a80;
        }
    }
    ctx->pc = 0x203A74u;
    // 0x203a74: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x203A74u;
    SET_GPR_U32(ctx, 31, 0x203A7Cu);
    ctx->pc = 0x203A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A74u;
    // 0x203a78: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x203A74u, 0x203A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A7Cu;
label_203a7c:
    // 0x203a7c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x203a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_203a80:
    // 0x203a80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x203a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a88: 0xc080eaa  jal         func_203AA8
    ctx->pc = 0x203A88u;
    SET_GPR_U32(ctx, 31, 0x203A90u);
    ctx->pc = 0x203A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A88u;
    // 0x203a8c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AA8u, 0x203A88u, 0x203A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A90u;
label_203a90:
    // 0x203a90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x203a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203a94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x203a94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203a98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x203a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x203AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AA0u;
        // 0x203aa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203AA8u;
}
