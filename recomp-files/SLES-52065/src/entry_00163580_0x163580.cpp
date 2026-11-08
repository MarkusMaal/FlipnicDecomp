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

// Function: entry_00163580
// Address: 0x163580 - 0x163590
void entry_00163580_0x163580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163580_0x163580");
#endif

    switch (ctx->pc) {
        case 0x163588u: goto label_163588;
        default: break;
    }

    ctx->pc = 0x163580u;

    // 0x163580: 0xc055c40  jal         func_157100
    ctx->pc = 0x163580u;
    SET_GPR_U32(ctx, 31, 0x163588u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x163580u, 0x163588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163588u;
label_163588:
    // 0x163588: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x163588u;
    {
        const bool branch_taken_0x163588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163588u;
        // 0x16358c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163588) {
            ctx->pc = 0x1636B0u;
            return;
        }
    }
    ctx->pc = 0x163590u;
}
