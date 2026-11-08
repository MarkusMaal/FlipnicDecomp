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

// Function: entry_00143a34
// Address: 0x143a34 - 0x143a50
void entry_00143a34_0x143a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143a34_0x143a34");
#endif

    switch (ctx->pc) {
        case 0x143a3cu: goto label_143a3c;
        default: break;
    }

    ctx->pc = 0x143a34u;

    // 0x143a34: 0xc0510d8  jal         func_144360
    ctx->pc = 0x143A34u;
    SET_GPR_U32(ctx, 31, 0x143A3Cu);
    ctx->pc = 0x143A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A34u;
    // 0x143a38: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144360u, 0x143A34u, 0x143A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A3Cu;
label_143a3c:
    // 0x143a3c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x143a40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143A40u;
    {
        const bool branch_taken_0x143a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a40) {
            ctx->pc = 0x143A50u;
            return;
        }
    }
    ctx->pc = 0x143A48u;
    // 0x143a48: 0xc0401a4  jal         func_100690
    ctx->pc = 0x143A48u;
    SET_GPR_U32(ctx, 31, 0x143A50u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x143A48u, 0x143A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A50u;
}
