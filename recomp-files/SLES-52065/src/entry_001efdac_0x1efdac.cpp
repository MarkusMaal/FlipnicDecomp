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

// Function: entry_001efdac
// Address: 0x1efdac - 0x1efdc4
void entry_001efdac_0x1efdac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efdac_0x1efdac");
#endif

    switch (ctx->pc) {
        case 0x1efdbcu: goto label_1efdbc;
        default: break;
    }

    ctx->pc = 0x1efdacu;

    // 0x1efdac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFDACu;
    {
        const bool branch_taken_0x1efdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efdac) {
            ctx->pc = 0x1EFDC4u;
            return;
        }
    }
    ctx->pc = 0x1EFDB4u;
    // 0x1efdb4: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFDB4u;
    SET_GPR_U32(ctx, 31, 0x1EFDBCu);
    ctx->pc = 0x1EFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDB4u;
    // 0x1efdb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFDB4u, 0x1EFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFDBCu;
label_1efdbc:
    // 0x1efdbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFDBCu;
    {
        const bool branch_taken_0x1efdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDBCu;
        // 0x1efdc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efdbc) {
            ctx->pc = 0x1EFDD8u;
            return;
        }
    }
    ctx->pc = 0x1EFDC4u;
}
