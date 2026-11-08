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

// Function: entry_00205c10
// Address: 0x205c10 - 0x205c20
void entry_00205c10_0x205c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205c10_0x205c10");
#endif

    switch (ctx->pc) {
        case 0x205c18u: goto label_205c18;
        default: break;
    }

    ctx->pc = 0x205c10u;

    // 0x205c10: 0xc080432  jal         func_2010C8
    ctx->pc = 0x205C10u;
    SET_GPR_U32(ctx, 31, 0x205C18u);
    ctx->pc = 0x205C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C10u;
    // 0x205c14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x205C10u, 0x205C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C18u;
label_205c18:
    // 0x205c18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205C18u;
    {
        const bool branch_taken_0x205c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C18u;
        // 0x205c1c: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c18) {
            ctx->pc = 0x205C30u;
            return;
        }
    }
    ctx->pc = 0x205C20u;
}
