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

// Function: entry_00203030
// Address: 0x203030 - 0x203048
void entry_00203030_0x203030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203030_0x203030");
#endif

    switch (ctx->pc) {
        case 0x203044u: goto label_203044;
        default: break;
    }

    ctx->pc = 0x203030u;

    // 0x203030: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203030u;
    {
        const bool branch_taken_0x203030 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x203034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203030u;
        // 0x203034: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203030) {
            ctx->pc = 0x203048u;
            return;
        }
    }
    ctx->pc = 0x203038u;
    // 0x203038: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x203038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20303c: 0xc08009a  jal         func_200268
    ctx->pc = 0x20303Cu;
    SET_GPR_U32(ctx, 31, 0x203044u);
    ctx->pc = 0x203040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20303Cu;
    // 0x203040: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x20303Cu, 0x203044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203044u;
label_203044:
    // 0x203044: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x203044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->pc = 0x203048u;
}
