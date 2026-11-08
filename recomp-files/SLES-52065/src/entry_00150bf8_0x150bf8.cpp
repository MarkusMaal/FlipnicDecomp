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

// Function: entry_00150bf8
// Address: 0x150bf8 - 0x150c30
void entry_00150bf8_0x150bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150bf8_0x150bf8");
#endif

    switch (ctx->pc) {
        case 0x150c08u: goto label_150c08;
        case 0x150c28u: goto label_150c28;
        default: break;
    }

    ctx->pc = 0x150bf8u;

    // 0x150bf8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x150bfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150c00: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x150C00u;
    SET_GPR_U32(ctx, 31, 0x150C08u);
    ctx->pc = 0x150C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C00u;
    // 0x150c04: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x150C00u, 0x150C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C08u;
label_150c08:
    // 0x150c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c0c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150C0Cu;
    {
        const bool branch_taken_0x150c0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x150C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150C0Cu;
        // 0x150c10: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c0c) {
            ctx->pc = 0x150C30u;
            return;
        }
    }
    ctx->pc = 0x150C14u;
    // 0x150c14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x150c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x150c18: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x150c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x150c1c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x150c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x150c20: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x150C20u;
    SET_GPR_U32(ctx, 31, 0x150C28u);
    ctx->pc = 0x150C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C20u;
    // 0x150c24: 0x24a5f330  addiu       $a1, $a1, -0xCD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x150C20u, 0x150C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C28u;
label_150c28:
    // 0x150c28: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x150C28u;
    SET_GPR_U32(ctx, 31, 0x150C30u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x150C28u, 0x150C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C30u;
}
