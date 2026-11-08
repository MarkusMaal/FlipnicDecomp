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

// Function: entry_001f7e9c
// Address: 0x1f7e9c - 0x1f7ef4
void entry_001f7e9c_0x1f7e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7e9c_0x1f7e9c");
#endif

    switch (ctx->pc) {
        case 0x1f7eb0u: goto label_1f7eb0;
        case 0x1f7edcu: goto label_1f7edc;
        case 0x1f7ef0u: goto label_1f7ef0;
        default: break;
    }

    ctx->pc = 0x1f7e9cu;

    // 0x1f7e9c: 0x267015d0  addiu       $s0, $s3, 0x15D0
    ctx->pc = 0x1f7e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5584));
    // 0x1f7ea0: 0xae7215d0  sw          $s2, 0x15D0($s3)
    ctx->pc = 0x1f7ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5584), GPR_U32(ctx, 18));
    // 0x1f7ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ea8: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F7EA8u;
    SET_GPR_U32(ctx, 31, 0x1F7EB0u);
    ctx->pc = 0x1F7EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7EA8u;
    // 0x1f7eac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F7EA8u, 0x1F7EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EB0u;
label_1f7eb0:
    // 0x1f7eb0: 0x26f1d580  addiu       $s1, $s7, -0x2A80
    ctx->pc = 0x1f7eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956416));
    // 0x1f7eb4: 0x26841590  addiu       $a0, $s4, 0x1590
    ctx->pc = 0x1f7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 5520));
    // 0x1f7eb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f7eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ebc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f7ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f7ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ec8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f7ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7ecc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f7eccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ed0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f7ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7ed4: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F7ED4u;
    SET_GPR_U32(ctx, 31, 0x1F7EDCu);
    ctx->pc = 0x1F7ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7ED4u;
    // 0x1f7ed8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F7ED4u, 0x1F7EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EDCu;
label_1f7edc:
    // 0x1f7edc: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7EDCu;
    {
        const bool branch_taken_0x1f7edc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f7edc) {
            ctx->pc = 0x1F7EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7EDCu;
            // 0x1f7ee0: 0x8ec2bb10  lw          $v0, -0x44F0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294949648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7F04u;
            return;
        }
    }
    ctx->pc = 0x1F7EE4u;
    // 0x1f7ee4: 0x8ea4bb30  lw          $a0, -0x44D0($s5)
    ctx->pc = 0x1f7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949680)));
    // 0x1f7ee8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F7EE8u;
    SET_GPR_U32(ctx, 31, 0x1F7EF0u);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F7EE8u, 0x1F7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EF0u;
label_1f7ef0:
    // 0x1f7ef0: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x1f7ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    ctx->pc = 0x1f7ef4u;
}
