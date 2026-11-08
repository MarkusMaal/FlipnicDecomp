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

// Function: entry_0021b8d0
// Address: 0x21b8d0 - 0x21b8e8
void entry_0021b8d0_0x21b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b8d0_0x21b8d0");
#endif

    switch (ctx->pc) {
        case 0x21b8e0u: goto label_21b8e0;
        default: break;
    }

    ctx->pc = 0x21b8d0u;

    // 0x21b8d0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B8D0u;
    {
        const bool branch_taken_0x21b8d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8D0u;
        // 0x21b8d4: 0x24030483  addiu       $v1, $zero, 0x483 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8d0) {
            ctx->pc = 0x21B8E8u;
            return;
        }
    }
    ctx->pc = 0x21B8D8u;
    // 0x21b8d8: 0xc01d918  jal         func_076460
    ctx->pc = 0x21B8D8u;
    SET_GPR_U32(ctx, 31, 0x21B8E0u);
    ctx->pc = 0x21B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8D8u;
    // 0x21b8dc: 0x96446740  lhu         $a0, 0x6740($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x21B8D8u, 0x21B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8E0u;
label_21b8e0:
    // 0x21b8e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21B8E0u;
    {
        const bool branch_taken_0x21b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b8e0) {
            ctx->pc = 0x21B8F4u;
            return;
        }
    }
    ctx->pc = 0x21B8E8u;
}
