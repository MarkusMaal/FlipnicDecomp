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

// Function: entry_0011a8e0
// Address: 0x11a8e0 - 0x11a93c
void entry_0011a8e0_0x11a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a8e0_0x11a8e0");
#endif

    switch (ctx->pc) {
        case 0x11a904u: goto label_11a904;
        case 0x11a910u: goto label_11a910;
        case 0x11a918u: goto label_11a918;
        case 0x11a924u: goto label_11a924;
        case 0x11a938u: goto label_11a938;
        default: break;
    }

    ctx->pc = 0x11a8e0u;

    // 0x11a8e0: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11A8E0u;
    {
        const bool branch_taken_0x11a8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a8e0) {
            ctx->pc = 0x11A944u;
            return;
        }
    }
    ctx->pc = 0x11A8E8u;
    // 0x11a8e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a8ec: 0xaf8283c0  sw          $v0, -0x7C40($gp)
    ctx->pc = 0x11a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935488), GPR_U32(ctx, 2));
    // 0x11a8f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a8f4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11A8F4u;
    {
        const bool branch_taken_0x11a8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8F4u;
        // 0x11a8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8f4) {
            ctx->pc = 0x11A950u;
            return;
        }
    }
    ctx->pc = 0x11A8FCu;
    // 0x11a8fc: 0xc07b040  jal         func_1EC100
    ctx->pc = 0x11A8FCu;
    SET_GPR_U32(ctx, 31, 0x11A904u);
    ctx->pc = 0x11A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A8FCu;
    // 0x11a900: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC100u, 0x11A8FCu, 0x11A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A904u;
label_11a904:
    // 0x11a904: 0x8f8583c8  lw          $a1, -0x7C38($gp)
    ctx->pc = 0x11a904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935496)));
    // 0x11a908: 0xc07acc8  jal         func_1EB320
    ctx->pc = 0x11A908u;
    SET_GPR_U32(ctx, 31, 0x11A910u);
    ctx->pc = 0x11A90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A908u;
    // 0x11a90c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB320u, 0x11A908u, 0x11A910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A910u;
label_11a910:
    // 0x11a910: 0xc07ad0c  jal         func_1EB430
    ctx->pc = 0x11A910u;
    SET_GPR_U32(ctx, 31, 0x11A918u);
    ctx->pc = 0x11A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A910u;
    // 0x11a914: 0x8f8483cc  lw          $a0, -0x7C34($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB430u, 0x11A910u, 0x11A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A918u;
label_11a918:
    // 0x11a918: 0x8f8583d8  lw          $a1, -0x7C28($gp)
    ctx->pc = 0x11a918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935512)));
    // 0x11a91c: 0xc07ad2c  jal         func_1EB4B0
    ctx->pc = 0x11A91Cu;
    SET_GPR_U32(ctx, 31, 0x11A924u);
    ctx->pc = 0x11A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A91Cu;
    // 0x11a920: 0x8f8483d4  lw          $a0, -0x7C2C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB4B0u, 0x11A91Cu, 0x11A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A924u;
label_11a924:
    // 0x11a924: 0x8f8283bc  lw          $v0, -0x7C44($gp)
    ctx->pc = 0x11a924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935484)));
    // 0x11a928: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A928u;
    {
        const bool branch_taken_0x11a928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a928) {
            ctx->pc = 0x11A93Cu;
            return;
        }
    }
    ctx->pc = 0x11A930u;
    // 0x11a930: 0xc074e1c  jal         func_1D3870
    ctx->pc = 0x11A930u;
    SET_GPR_U32(ctx, 31, 0x11A938u);
    ctx->pc = 0x1D3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3870u, 0x11A930u, 0x11A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A938u;
label_11a938:
    // 0x11a938: 0xaf8083bc  sw          $zero, -0x7C44($gp)
    ctx->pc = 0x11a938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935484), GPR_U32(ctx, 0));
    ctx->pc = 0x11a93cu;
}
