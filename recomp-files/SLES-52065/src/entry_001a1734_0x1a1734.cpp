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

// Function: entry_001a1734
// Address: 0x1a1734 - 0x1a1768
void entry_001a1734_0x1a1734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1734_0x1a1734");
#endif

    switch (ctx->pc) {
        case 0x1a1764u: goto label_1a1764;
        default: break;
    }

    ctx->pc = 0x1a1734u;

    // 0x1a1734: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x1a1734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x1a1738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a173c: 0xae830680  sw          $v1, 0x680($s4)
    ctx->pc = 0x1a173cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1664), GPR_U32(ctx, 3));
    // 0x1a1740: 0x8e830680  lw          $v1, 0x680($s4)
    ctx->pc = 0x1a1740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1664)));
    // 0x1a1744: 0x1c60012f  bgtz        $v1, . + 4 + (0x12F << 2)
    ctx->pc = 0x1A1744u;
    {
        const bool branch_taken_0x1a1744 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a1744) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A174Cu;
    // 0x1a174c: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
    // 0x1a1750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1750u;
    {
        const bool branch_taken_0x1a1750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1750u;
        // 0x1a1754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1750) {
            ctx->pc = 0x1A1768u;
            return;
        }
    }
    ctx->pc = 0x1A1758u;
    // 0x1a1758: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x1a1758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1a175c: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A175Cu;
    SET_GPR_U32(ctx, 31, 0x1A1764u);
    ctx->pc = 0x1A1760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A175Cu;
    // 0x1a1760: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A175Cu, 0x1A1764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1764u;
label_1a1764:
    // 0x1a1764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a1768u;
}
