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

// Function: entry_00202a68
// Address: 0x202a68 - 0x202a84
void entry_00202a68_0x202a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202a68_0x202a68");
#endif

    switch (ctx->pc) {
        case 0x202a70u: goto label_202a70;
        case 0x202a7cu: goto label_202a7c;
        default: break;
    }

    ctx->pc = 0x202a68u;

    // 0x202a68: 0xc080176  jal         func_2005D8
    ctx->pc = 0x202A68u;
    SET_GPR_U32(ctx, 31, 0x202A70u);
    ctx->pc = 0x202A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A68u;
    // 0x202a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2005D8u, 0x202A68u, 0x202A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A70u;
label_202a70:
    // 0x202a70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a74: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202A74u;
    SET_GPR_U32(ctx, 31, 0x202A7Cu);
    ctx->pc = 0x202A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A74u;
    // 0x202a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202A74u, 0x202A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A7Cu;
label_202a7c:
    // 0x202a7c: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x202A7Cu;
    {
        const bool branch_taken_0x202a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A7Cu;
        // 0x202a80: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a7c) {
            ctx->pc = 0x2030B0u;
            return;
        }
    }
    ctx->pc = 0x202A84u;
}
