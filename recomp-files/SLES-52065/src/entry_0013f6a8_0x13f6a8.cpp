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

// Function: entry_0013f6a8
// Address: 0x13f6a8 - 0x13f6e0
void entry_0013f6a8_0x13f6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f6a8_0x13f6a8");
#endif

    switch (ctx->pc) {
        case 0x13f6b8u: goto label_13f6b8;
        case 0x13f6d8u: goto label_13f6d8;
        default: break;
    }

    ctx->pc = 0x13f6a8u;

    // 0x13f6a8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13f6ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f6b0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13F6B0u;
    SET_GPR_U32(ctx, 31, 0x13F6B8u);
    ctx->pc = 0x13F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6B0u;
    // 0x13f6b4: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13F6B0u, 0x13F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6B8u;
label_13f6b8:
    // 0x13f6b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6bc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F6BCu;
    {
        const bool branch_taken_0x13f6bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6BCu;
        // 0x13f6c0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6bc) {
            ctx->pc = 0x13F6E0u;
            return;
        }
    }
    ctx->pc = 0x13F6C4u;
    // 0x13f6c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13f6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13f6c8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13f6cc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f6d0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13F6D0u;
    SET_GPR_U32(ctx, 31, 0x13F6D8u);
    ctx->pc = 0x13F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6D0u;
    // 0x13f6d4: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13F6D0u, 0x13F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6D8u;
label_13f6d8:
    // 0x13f6d8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13F6D8u;
    SET_GPR_U32(ctx, 31, 0x13F6E0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13F6D8u, 0x13F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6E0u;
}
