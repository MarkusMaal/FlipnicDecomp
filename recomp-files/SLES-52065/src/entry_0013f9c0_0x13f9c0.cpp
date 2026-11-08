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

// Function: entry_0013f9c0
// Address: 0x13f9c0 - 0x13f9f0
void entry_0013f9c0_0x13f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f9c0_0x13f9c0");
#endif

    switch (ctx->pc) {
        case 0x13f9c8u: goto label_13f9c8;
        case 0x13f9e8u: goto label_13f9e8;
        default: break;
    }

    ctx->pc = 0x13f9c0u;

    // 0x13f9c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13F9C0u;
    SET_GPR_U32(ctx, 31, 0x13F9C8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13F9C0u, 0x13F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9C8u;
label_13f9c8:
    // 0x13f9c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9cc: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F9CCu;
    {
        const bool branch_taken_0x13f9cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9CCu;
        // 0x13f9d0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f9cc) {
            ctx->pc = 0x13F9F0u;
            return;
        }
    }
    ctx->pc = 0x13F9D4u;
    // 0x13f9d4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13f9d8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13f9dc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13f9e0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13F9E0u;
    SET_GPR_U32(ctx, 31, 0x13F9E8u);
    ctx->pc = 0x13F9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9E0u;
    // 0x13f9e4: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13F9E0u, 0x13F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9E8u;
label_13f9e8:
    // 0x13f9e8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13F9E8u;
    SET_GPR_U32(ctx, 31, 0x13F9F0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13F9E8u, 0x13F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9F0u;
}
