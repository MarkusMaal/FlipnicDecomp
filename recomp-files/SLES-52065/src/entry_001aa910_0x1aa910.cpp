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

// Function: entry_001aa910
// Address: 0x1aa910 - 0x1aa924
void entry_001aa910_0x1aa910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa910_0x1aa910");
#endif

    switch (ctx->pc) {
        case 0x1aa91cu: goto label_1aa91c;
        default: break;
    }

    ctx->pc = 0x1aa910u;

    // 0x1aa910: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1aa910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1aa914: 0xc0433ec  jal         func_10CFB0
    ctx->pc = 0x1AA914u;
    SET_GPR_U32(ctx, 31, 0x1AA91Cu);
    ctx->pc = 0x1AA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA914u;
    // 0x1aa918: 0x8c440670  lw          $a0, 0x670($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFB0u, 0x1AA914u, 0x1AA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA91Cu;
label_1aa91c:
    // 0x1aa91c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1aa91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1aa920: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1aa924u;
}
