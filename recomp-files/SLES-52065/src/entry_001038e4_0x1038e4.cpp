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

// Function: entry_001038e4
// Address: 0x1038e4 - 0x103908
void entry_001038e4_0x1038e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001038e4_0x1038e4");
#endif

    switch (ctx->pc) {
        case 0x1038ecu: goto label_1038ec;
        case 0x1038fcu: goto label_1038fc;
        default: break;
    }

    ctx->pc = 0x1038e4u;

    // 0x1038e4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1038E4u;
    SET_GPR_U32(ctx, 31, 0x1038ECu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1038E4u, 0x1038ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038ECu;
label_1038ec:
    // 0x1038ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1038ECu;
    {
        const bool branch_taken_0x1038ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1038F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1038ECu;
        // 0x1038f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1038ec) {
            ctx->pc = 0x103908u;
            return;
        }
    }
    ctx->pc = 0x1038F4u;
    // 0x1038f4: 0xc056360  jal         func_158D80
    ctx->pc = 0x1038F4u;
    SET_GPR_U32(ctx, 31, 0x1038FCu);
    ctx->pc = 0x1038F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1038F4u;
    // 0x1038f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1038F4u, 0x1038FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1038FCu;
label_1038fc:
    // 0x1038fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1038fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103900: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x103900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
    // 0x103904: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103908u;
}
