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

// Function: entry_001e6914
// Address: 0x1e6914 - 0x1e6944
void entry_001e6914_0x1e6914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6914_0x1e6914");
#endif

    switch (ctx->pc) {
        case 0x1e692cu: goto label_1e692c;
        case 0x1e693cu: goto label_1e693c;
        default: break;
    }

    ctx->pc = 0x1e6914u;

    // 0x1e6914: 0x8fc300bc  lw          $v1, 0xBC($fp)
    ctx->pc = 0x1e6914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e6918: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E6918u;
    {
        const bool branch_taken_0x1e6918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6918u;
        // 0x1e691c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6918) {
            ctx->pc = 0x1E6944u;
            return;
        }
    }
    ctx->pc = 0x1E6920u;
    // 0x1e6920: 0x8fc200bc  lw          $v0, 0xBC($fp)
    ctx->pc = 0x1e6920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x1e6924: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E6924u;
    SET_GPR_U32(ctx, 31, 0x1E692Cu);
    ctx->pc = 0x1E6928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6924u;
    // 0x1e6928: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E6924u, 0x1E692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E692Cu;
label_1e692c:
    // 0x1e692c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6934: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E6934u;
    SET_GPR_U32(ctx, 31, 0x1E693Cu);
    ctx->pc = 0x1E6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6934u;
    // 0x1e6938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E6934u, 0x1E693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E693Cu;
label_1e693c:
    // 0x1e693c: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E693Cu;
    SET_GPR_U32(ctx, 31, 0x1E6944u);
    ctx->pc = 0x1E6940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E693Cu;
    // 0x1e6940: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E693Cu, 0x1E6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6944u;
}
