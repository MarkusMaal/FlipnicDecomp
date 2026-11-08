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

// Function: entry_0014deac
// Address: 0x14deac - 0x14decc
void entry_0014deac_0x14deac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014deac_0x14deac");
#endif

    ctx->pc = 0x14deacu;

    // 0x14deac: 0x2631fff4  addiu       $s1, $s1, -0xC
    ctx->pc = 0x14deacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x14deb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14deb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14deb4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DEB4u;
    {
        const bool branch_taken_0x14deb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14deb4) {
            ctx->pc = 0x14DECCu;
            return;
        }
    }
    ctx->pc = 0x14DEBCu;
    // 0x14debc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DEBCu;
    {
        const bool branch_taken_0x14debc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DEBCu;
        // 0x14dec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14debc) {
            ctx->pc = 0x14DECCu;
            return;
        }
    }
    ctx->pc = 0x14DEC4u;
    // 0x14dec4: 0xc048414  jal         func_121050
    ctx->pc = 0x14DEC4u;
    SET_GPR_U32(ctx, 31, 0x14DECCu);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x14DEC4u, 0x14DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DECCu;
}
