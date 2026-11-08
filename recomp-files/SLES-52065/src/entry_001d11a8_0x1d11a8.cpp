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

// Function: entry_001d11a8
// Address: 0x1d11a8 - 0x1d11d8
void entry_001d11a8_0x1d11a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d11a8_0x1d11a8");
#endif

    switch (ctx->pc) {
        case 0x1d11b0u: goto label_1d11b0;
        case 0x1d11d0u: goto label_1d11d0;
        default: break;
    }

    ctx->pc = 0x1d11a8u;

    // 0x1d11a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1D11A8u;
    SET_GPR_U32(ctx, 31, 0x1D11B0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1D11A8u, 0x1D11B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11B0u;
label_1d11b0:
    // 0x1d11b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d11b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11b4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D11B4u;
    {
        const bool branch_taken_0x1d11b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11B4u;
        // 0x1d11b8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11b4) {
            ctx->pc = 0x1D11D8u;
            return;
        }
    }
    ctx->pc = 0x1D11BCu;
    // 0x1d11bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d11bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d11c0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1d11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1d11c4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d11c8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1D11C8u;
    SET_GPR_U32(ctx, 31, 0x1D11D0u);
    ctx->pc = 0x1D11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D11C8u;
    // 0x1d11cc: 0x24a53480  addiu       $a1, $a1, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1D11C8u, 0x1D11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11D0u;
label_1d11d0:
    // 0x1d11d0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1D11D0u;
    SET_GPR_U32(ctx, 31, 0x1D11D8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1D11D0u, 0x1D11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11D8u;
}
