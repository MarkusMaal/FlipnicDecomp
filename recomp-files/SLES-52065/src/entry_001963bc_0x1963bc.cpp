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

// Function: entry_001963bc
// Address: 0x1963bc - 0x1963d0
void entry_001963bc_0x1963bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001963bc_0x1963bc");
#endif

    switch (ctx->pc) {
        case 0x1963c8u: goto label_1963c8;
        default: break;
    }

    ctx->pc = 0x1963bcu;

    // 0x1963bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1963bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963c0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1963C0u;
    SET_GPR_U32(ctx, 31, 0x1963C8u);
    ctx->pc = 0x1963C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963C0u;
    // 0x1963c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1963C0u, 0x1963C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963C8u;
label_1963c8:
    // 0x1963c8: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x1963C8u;
    {
        const bool branch_taken_0x1963c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1963c8) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x1963D0u;
}
