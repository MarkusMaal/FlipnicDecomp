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

// Function: entry_001c8eec
// Address: 0x1c8eec - 0x1c8f18
void entry_001c8eec_0x1c8eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8eec_0x1c8eec");
#endif

    switch (ctx->pc) {
        case 0x1c8f10u: goto label_1c8f10;
        default: break;
    }

    ctx->pc = 0x1c8eecu;

    // 0x1c8eec: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c8eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c8ef0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8ef4: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c8ef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8efc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c8efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f00: 0x24a56110  addiu       $a1, $a1, 0x6110
    ctx->pc = 0x1c8f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
    // 0x1c8f04: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c8f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c8f08: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C8F08u;
    SET_GPR_U32(ctx, 31, 0x1C8F10u);
    ctx->pc = 0x1C8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F08u;
    // 0x1c8f0c: 0xa043282b  sb          $v1, 0x282B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 10283), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C8F08u, 0x1C8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F10u;
label_1c8f10:
    // 0x1c8f10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8F10u;
    {
        const bool branch_taken_0x1c8f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F10u;
        // 0x1c8f14: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f10) {
            ctx->pc = 0x1C8F1Cu;
            return;
        }
    }
    ctx->pc = 0x1C8F18u;
}
