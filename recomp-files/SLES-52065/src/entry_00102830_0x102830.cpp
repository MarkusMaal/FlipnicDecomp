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

// Function: entry_00102830
// Address: 0x102830 - 0x102858
void entry_00102830_0x102830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102830_0x102830");
#endif

    switch (ctx->pc) {
        case 0x10284cu: goto label_10284c;
        default: break;
    }

    ctx->pc = 0x102830u;

    // 0x102830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102834: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102838: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10283c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102840: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x102840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102844: 0xc0607f4  jal         func_181FD0
    ctx->pc = 0x102844u;
    SET_GPR_U32(ctx, 31, 0x10284Cu);
    ctx->pc = 0x102848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102844u;
    // 0x102848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181FD0u, 0x102844u, 0x10284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10284Cu;
label_10284c:
    // 0x10284c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102850: 0xc060840  jal         func_182100
    ctx->pc = 0x102850u;
    SET_GPR_U32(ctx, 31, 0x102858u);
    ctx->pc = 0x102854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102850u;
    // 0x102854: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182100u, 0x102850u, 0x102858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102858u;
}
