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

// Function: entry_001c5fa4
// Address: 0x1c5fa4 - 0x1c5fb8
void entry_001c5fa4_0x1c5fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5fa4_0x1c5fa4");
#endif

    switch (ctx->pc) {
        case 0x1c5facu: goto label_1c5fac;
        default: break;
    }

    ctx->pc = 0x1c5fa4u;

    // 0x1c5fa4: 0xc0718e4  jal         func_1C6390
    ctx->pc = 0x1C5FA4u;
    SET_GPR_U32(ctx, 31, 0x1C5FACu);
    ctx->pc = 0x1C5FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FA4u;
    // 0x1c5fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6390u, 0x1C5FA4u, 0x1C5FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FACu;
label_1c5fac:
    // 0x1c5fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5fb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C5FB0u;
    {
        const bool branch_taken_0x1c5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FB0u;
        // 0x1c5fb4: 0xa242006c  sb          $v0, 0x6C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fb0) {
            ctx->pc = 0x1C5FE8u;
            return;
        }
    }
    ctx->pc = 0x1C5FB8u;
}
