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

// Function: entry_0011d964
// Address: 0x11d964 - 0x11d988
void entry_0011d964_0x11d964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d964_0x11d964");
#endif

    switch (ctx->pc) {
        case 0x11d980u: goto label_11d980;
        default: break;
    }

    ctx->pc = 0x11d964u;

    // 0x11d964: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x11d964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x11d968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d96c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x11d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x11d970: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x11d970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x11d974: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11d974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11d978: 0xc080702  jal         func_201C08
    ctx->pc = 0x11D978u;
    SET_GPR_U32(ctx, 31, 0x11D980u);
    ctx->pc = 0x11D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D978u;
    // 0x11d97c: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11D978u, 0x11D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D980u;
label_11d980:
    // 0x11d980: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x11D980u;
    {
        const bool branch_taken_0x11d980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d980) {
            ctx->pc = 0x11DA5Cu;
            return;
        }
    }
    ctx->pc = 0x11D988u;
}
