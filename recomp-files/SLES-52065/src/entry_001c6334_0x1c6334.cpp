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

// Function: entry_001c6334
// Address: 0x1c6334 - 0x1c6358
void entry_001c6334_0x1c6334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6334_0x1c6334");
#endif

    switch (ctx->pc) {
        case 0x1c633cu: goto label_1c633c;
        case 0x1c6344u: goto label_1c6344;
        case 0x1c6350u: goto label_1c6350;
        default: break;
    }

    ctx->pc = 0x1c6334u;

    // 0x1c6334: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6334u;
    SET_GPR_U32(ctx, 31, 0x1C633Cu);
    ctx->pc = 0x1C6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6334u;
    // 0x1c6338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6334u, 0x1C633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C633Cu;
label_1c633c:
    // 0x1c633c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C633Cu;
    SET_GPR_U32(ctx, 31, 0x1C6344u);
    ctx->pc = 0x1C6340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C633Cu;
    // 0x1c6340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C633Cu, 0x1C6344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6344u;
label_1c6344:
    // 0x1c6344: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x1c6344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c6348: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C6348u;
    SET_GPR_U32(ctx, 31, 0x1C6350u);
    ctx->pc = 0x1C634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6348u;
    // 0x1c634c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C6348u, 0x1C6350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6350u;
label_1c6350:
    // 0x1c6350: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C6350u;
    SET_GPR_U32(ctx, 31, 0x1C6358u);
    ctx->pc = 0x1C6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6350u;
    // 0x1c6354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C6350u, 0x1C6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6358u;
}
