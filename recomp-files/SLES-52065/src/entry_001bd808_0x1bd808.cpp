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

// Function: entry_001bd808
// Address: 0x1bd808 - 0x1bd840
void entry_001bd808_0x1bd808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd808_0x1bd808");
#endif

    switch (ctx->pc) {
        case 0x1bd818u: goto label_1bd818;
        case 0x1bd838u: goto label_1bd838;
        default: break;
    }

    ctx->pc = 0x1bd808u;

    // 0x1bd808: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1bd808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1bd80c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd810: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BD810u;
    SET_GPR_U32(ctx, 31, 0x1BD818u);
    ctx->pc = 0x1BD814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD810u;
    // 0x1bd814: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BD810u, 0x1BD818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD818u;
label_1bd818:
    // 0x1bd818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd81c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BD81Cu;
    {
        const bool branch_taken_0x1bd81c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD81Cu;
        // 0x1bd820: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd81c) {
            ctx->pc = 0x1BD840u;
            return;
        }
    }
    ctx->pc = 0x1BD824u;
    // 0x1bd824: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bd824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bd828: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bd828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1bd82c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bd82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd830: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BD830u;
    SET_GPR_U32(ctx, 31, 0x1BD838u);
    ctx->pc = 0x1BD834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD830u;
    // 0x1bd834: 0x24a51250  addiu       $a1, $a1, 0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BD830u, 0x1BD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD838u;
label_1bd838:
    // 0x1bd838: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BD838u;
    SET_GPR_U32(ctx, 31, 0x1BD840u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BD838u, 0x1BD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD840u;
}
