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

// Function: entry_00205a38
// Address: 0x205a38 - 0x205a48
void entry_00205a38_0x205a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205a38_0x205a38");
#endif

    switch (ctx->pc) {
        case 0x205a40u: goto label_205a40;
        default: break;
    }

    ctx->pc = 0x205a38u;

    // 0x205a38: 0xc080432  jal         func_2010C8
    ctx->pc = 0x205A38u;
    SET_GPR_U32(ctx, 31, 0x205A40u);
    ctx->pc = 0x205A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A38u;
    // 0x205a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205A38u, 0x205A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A40u;
label_205a40:
    // 0x205a40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205A40u;
    {
        const bool branch_taken_0x205a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A40u;
        // 0x205a44: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a40) {
            ctx->pc = 0x205A58u;
            return;
        }
    }
    ctx->pc = 0x205A48u;
}
