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

// Function: entry_00194550
// Address: 0x194550 - 0x194568
void entry_00194550_0x194550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194550_0x194550");
#endif

    switch (ctx->pc) {
        case 0x194558u: goto label_194558;
        default: break;
    }

    ctx->pc = 0x194550u;

    // 0x194550: 0xc0645ac  jal         func_1916B0
    ctx->pc = 0x194550u;
    SET_GPR_U32(ctx, 31, 0x194558u);
    ctx->pc = 0x194554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194550u;
    // 0x194554: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x194550u, 0x194558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194558u;
label_194558:
    // 0x194558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194558u;
    {
        const bool branch_taken_0x194558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194558u;
        // 0x19455c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194558) {
            ctx->pc = 0x194568u;
            return;
        }
    }
    ctx->pc = 0x194560u;
    // 0x194560: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x194560u;
    {
        const bool branch_taken_0x194560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x194560) {
            ctx->pc = 0x1945D0u;
            return;
        }
    }
    ctx->pc = 0x194568u;
}
