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

// Function: entry_001f8a5c
// Address: 0x1f8a5c - 0x1f8aa4
void entry_001f8a5c_0x1f8a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8a5c_0x1f8a5c");
#endif

    switch (ctx->pc) {
        case 0x1f8a64u: goto label_1f8a64;
        case 0x1f8a8cu: goto label_1f8a8c;
        default: break;
    }

    ctx->pc = 0x1f8a5cu;

    // 0x1f8a5c: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F8A5Cu;
    SET_GPR_U32(ctx, 31, 0x1F8A64u);
    ctx->pc = 0x1F8A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A5Cu;
    // 0x1f8a60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F8A5Cu, 0x1F8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A64u;
label_1f8a64:
    // 0x1f8a64: 0x26092bc0  addiu       $t1, $s0, 0x2BC0
    ctx->pc = 0x1f8a64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 11200));
    // 0x1f8a68: 0x26841600  addiu       $a0, $s4, 0x1600
    ctx->pc = 0x1f8a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5632));
    // 0x1f8a6c: 0x26671680  addiu       $a3, $s3, 0x1680
    ctx->pc = 0x1f8a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5760));
    // 0x1f8a70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8a74: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f8a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f8a78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8a7c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8a80: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8a80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8a84: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8A84u;
    SET_GPR_U32(ctx, 31, 0x1F8A8Cu);
    ctx->pc = 0x1F8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A84u;
    // 0x1f8a88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8A84u, 0x1F8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A8Cu;
label_1f8a8c:
    // 0x1f8a8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a90: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8A90u;
    {
        const bool branch_taken_0x1f8a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A90u;
        // 0x1f8a94: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a90) {
            ctx->pc = 0x1F8AA4u;
            return;
        }
    }
    ctx->pc = 0x1F8A98u;
    // 0x1f8a98: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f8a9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8A9Cu;
    {
        const bool branch_taken_0x1f8a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A9Cu;
        // 0x1f8aa0: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a9c) {
            ctx->pc = 0x1F8AACu;
            return;
        }
    }
    ctx->pc = 0x1F8AA4u;
}
