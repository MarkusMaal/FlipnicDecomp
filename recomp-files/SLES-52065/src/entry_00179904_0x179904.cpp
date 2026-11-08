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

// Function: entry_00179904
// Address: 0x179904 - 0x179924
void entry_00179904_0x179904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179904_0x179904");
#endif

    switch (ctx->pc) {
        case 0x17990cu: goto label_17990c;
        default: break;
    }

    ctx->pc = 0x179904u;

    // 0x179904: 0xc045ae8  jal         func_116BA0
    ctx->pc = 0x179904u;
    SET_GPR_U32(ctx, 31, 0x17990Cu);
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x179904u, 0x17990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17990Cu;
label_17990c:
    // 0x17990c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x17990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179910: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x179910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x179914: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x179914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179918: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x179918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17991c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17991Cu;
    {
        const bool branch_taken_0x17991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17991Cu;
        // 0x179920: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17991c) {
            ctx->pc = 0x179930u;
            return;
        }
    }
    ctx->pc = 0x179924u;
}
