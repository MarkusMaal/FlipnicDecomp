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

// Function: entry_001c3e14
// Address: 0x1c3e14 - 0x1c3e2c
void entry_001c3e14_0x1c3e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3e14_0x1c3e14");
#endif

    switch (ctx->pc) {
        case 0x1c3e20u: goto label_1c3e20;
        default: break;
    }

    ctx->pc = 0x1c3e14u;

    // 0x1c3e14: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1c3e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1c3e18: 0xc0748c8  jal         func_1D2320
    ctx->pc = 0x1C3E18u;
    SET_GPR_U32(ctx, 31, 0x1C3E20u);
    ctx->pc = 0x1C3E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E18u;
    // 0x1c3e1c: 0x24a51c28  addiu       $a1, $a1, 0x1C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2320u, 0x1C3E18u, 0x1C3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E20u;
label_1c3e20:
    // 0x1c3e20: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1c3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c3e24: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x1C3E24u;
    {
        const bool branch_taken_0x1c3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E24u;
        // 0x1c3e28: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e24) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3E2Cu;
}
