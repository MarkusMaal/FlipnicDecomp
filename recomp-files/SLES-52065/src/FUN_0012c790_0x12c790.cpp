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

// Function: FUN_0012c790
// Address: 0x12c790 - 0x12c7e0
void FUN_0012c790_0x12c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c790_0x12c790");
#endif

    switch (ctx->pc) {
        case 0x12c7acu: goto label_12c7ac;
        case 0x12c7c4u: goto label_12c7c4;
        default: break;
    }

    ctx->pc = 0x12c790u;

    // 0x12c790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c798: 0x83828490  lb          $v0, -0x7B70($gp)
    ctx->pc = 0x12c798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x12c79c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12C79Cu;
    {
        const bool branch_taken_0x12c79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C79Cu;
        // 0x12c7a0: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c79c) {
            ctx->pc = 0x12C7CCu;
            goto label_12c7cc;
        }
    }
    ctx->pc = 0x12C7A4u;
    // 0x12c7a4: 0xc04b1fc  jal         func_12C7F0
    ctx->pc = 0x12C7A4u;
    SET_GPR_U32(ctx, 31, 0x12C7ACu);
    ctx->pc = 0x12C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C7A4u;
    // 0x12c7a8: 0x24842ed0  addiu       $a0, $a0, 0x2ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C7F0u, 0x12C7A4u, 0x12C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7ACu;
label_12c7ac:
    // 0x12c7ac: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12c7b0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x12c7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x12c7b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7b8: 0x24a5c810  addiu       $a1, $a1, -0x37F0
    ctx->pc = 0x12c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952976));
    // 0x12c7bc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x12C7BCu;
    SET_GPR_U32(ctx, 31, 0x12C7C4u);
    ctx->pc = 0x12C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C7BCu;
    // 0x12c7c0: 0x24c62ec0  addiu       $a2, $a2, 0x2EC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x12C7BCu, 0x12C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7C4u;
label_12c7c4:
    // 0x12c7c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c7c8: 0xa3828490  sb          $v0, -0x7B70($gp)
    ctx->pc = 0x12c7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935696), (uint8_t)GPR_U32(ctx, 2));
label_12c7cc:
    // 0x12c7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c7d0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x12c7d4: 0x24422ed0  addiu       $v0, $v0, 0x2ED0
    ctx->pc = 0x12c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11984));
    // 0x12c7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7D8u;
        // 0x12c7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C7E0u;
}
