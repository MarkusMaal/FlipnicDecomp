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

// Function: entry_001b2bf4
// Address: 0x1b2bf4 - 0x1b2c0c
void entry_001b2bf4_0x1b2bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2bf4_0x1b2bf4");
#endif

    switch (ctx->pc) {
        case 0x1b2c08u: goto label_1b2c08;
        default: break;
    }

    ctx->pc = 0x1b2bf4u;

    // 0x1b2bf4: 0xc60c00b0  lwc1        $f12, 0xB0($s0)
    ctx->pc = 0x1b2bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b2bf8: 0xc60d00b4  lwc1        $f13, 0xB4($s0)
    ctx->pc = 0x1b2bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2bfc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b2bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b2c00: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1B2C00u;
    SET_GPR_U32(ctx, 31, 0x1B2C08u);
    ctx->pc = 0x1B2C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C00u;
    // 0x1b2c04: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1B2C00u, 0x1B2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C08u;
label_1b2c08:
    // 0x1b2c08: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1b2c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x1b2c0cu;
}
