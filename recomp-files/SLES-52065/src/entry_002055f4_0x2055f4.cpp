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

// Function: entry_002055f4
// Address: 0x2055f4 - 0x205604
void entry_002055f4_0x2055f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002055f4_0x2055f4");
#endif

    switch (ctx->pc) {
        case 0x2055fcu: goto label_2055fc;
        default: break;
    }

    ctx->pc = 0x2055f4u;

    // 0x2055f4: 0xc080432  jal         func_2010C8
    ctx->pc = 0x2055F4u;
    SET_GPR_U32(ctx, 31, 0x2055FCu);
    ctx->pc = 0x2055F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055F4u;
    // 0x2055f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x2055F4u, 0x2055FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055FCu;
label_2055fc:
    // 0x2055fc: 0x144001c7  bnez        $v0, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x2055FCu;
    {
        const bool branch_taken_0x2055fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055FCu;
        // 0x205600: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055fc) {
            ctx->pc = 0x205D1Cu;
            return;
        }
    }
    ctx->pc = 0x205604u;
}
