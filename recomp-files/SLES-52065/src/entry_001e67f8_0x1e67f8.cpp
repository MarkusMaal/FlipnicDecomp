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

// Function: entry_001e67f8
// Address: 0x1e67f8 - 0x1e6828
void entry_001e67f8_0x1e67f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e67f8_0x1e67f8");
#endif

    switch (ctx->pc) {
        case 0x1e6810u: goto label_1e6810;
        case 0x1e6820u: goto label_1e6820;
        default: break;
    }

    ctx->pc = 0x1e67f8u;

    // 0x1e67f8: 0x8fc300b8  lw          $v1, 0xB8($fp)
    ctx->pc = 0x1e67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e67fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E67FCu;
    {
        const bool branch_taken_0x1e67fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67FCu;
        // 0x1e6800: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67fc) {
            ctx->pc = 0x1E6828u;
            return;
        }
    }
    ctx->pc = 0x1E6804u;
    // 0x1e6804: 0x8fc200b8  lw          $v0, 0xB8($fp)
    ctx->pc = 0x1e6804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x1e6808: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E6808u;
    SET_GPR_U32(ctx, 31, 0x1E6810u);
    ctx->pc = 0x1E680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6808u;
    // 0x1e680c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E6808u, 0x1E6810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6810u;
label_1e6810:
    // 0x1e6810: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6818: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E6818u;
    SET_GPR_U32(ctx, 31, 0x1E6820u);
    ctx->pc = 0x1E681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6818u;
    // 0x1e681c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E6818u, 0x1E6820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6820u;
label_1e6820:
    // 0x1e6820: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E6820u;
    SET_GPR_U32(ctx, 31, 0x1E6828u);
    ctx->pc = 0x1E6824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6820u;
    // 0x1e6824: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E6820u, 0x1E6828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6828u;
}
