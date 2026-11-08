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

// Function: entry_00202798
// Address: 0x202798 - 0x2027a8
void entry_00202798_0x202798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202798_0x202798");
#endif

    switch (ctx->pc) {
        case 0x2027a0u: goto label_2027a0;
        default: break;
    }

    ctx->pc = 0x202798u;

    // 0x202798: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202798u;
    SET_GPR_U32(ctx, 31, 0x2027A0u);
    ctx->pc = 0x20279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202798u;
    // 0x20279c: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202798u, 0x2027A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027A0u;
label_2027a0:
    // 0x2027a0: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x2027A0u;
    {
        const bool branch_taken_0x2027a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027A0u;
        // 0x2027a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027a0) {
            ctx->pc = 0x2030ECu;
            return;
        }
    }
    ctx->pc = 0x2027A8u;
}
