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

// Function: entry_001945f0
// Address: 0x1945f0 - 0x194618
void entry_001945f0_0x1945f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001945f0_0x1945f0");
#endif

    switch (ctx->pc) {
        case 0x1945f8u: goto label_1945f8;
        default: break;
    }

    ctx->pc = 0x1945f0u;

    // 0x1945f0: 0xc0645ac  jal         func_1916B0
    ctx->pc = 0x1945F0u;
    SET_GPR_U32(ctx, 31, 0x1945F8u);
    ctx->pc = 0x1945F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1945F0u;
    // 0x1945f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1916B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1916B0u, 0x1945F0u, 0x1945F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1945F8u;
label_1945f8:
    // 0x1945f8: 0x8e84033c  lw          $a0, 0x33C($s4)
    ctx->pc = 0x1945f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 828)));
    // 0x1945fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1945fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194600: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x194600u;
    {
        const bool branch_taken_0x194600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194600) {
            ctx->pc = 0x194644u;
            return;
        }
    }
    ctx->pc = 0x194608u;
    // 0x194608: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194608u;
    {
        const bool branch_taken_0x194608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x194608) {
            ctx->pc = 0x194618u;
            return;
        }
    }
    ctx->pc = 0x194610u;
    // 0x194610: 0x100005d8  b           . + 4 + (0x5D8 << 2)
    ctx->pc = 0x194610u;
    {
        const bool branch_taken_0x194610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194610) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x194618u;
}
