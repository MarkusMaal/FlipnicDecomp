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

// Function: entry_001b2c94
// Address: 0x1b2c94 - 0x1b2cac
void entry_001b2c94_0x1b2c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c94_0x1b2c94");
#endif

    switch (ctx->pc) {
        case 0x1b2ca8u: goto label_1b2ca8;
        default: break;
    }

    ctx->pc = 0x1b2c94u;

    // 0x1b2c94: 0xc60c00b0  lwc1        $f12, 0xB0($s0)
    ctx->pc = 0x1b2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2c98: 0xc60d00b4  lwc1        $f13, 0xB4($s0)
    ctx->pc = 0x1b2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2c9c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b2c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b2ca0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1B2CA0u;
    SET_GPR_U32(ctx, 31, 0x1B2CA8u);
    ctx->pc = 0x1B2CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CA0u;
    // 0x1b2ca4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1B2CA0u, 0x1B2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CA8u;
label_1b2ca8:
    // 0x1b2ca8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b2ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x1b2cacu;
}
