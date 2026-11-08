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

// Function: FUN_001340a0
// Address: 0x1340a0 - 0x1340b8
void FUN_001340a0_0x1340a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001340a0_0x1340a0");
#endif

    ctx->pc = 0x1340a0u;

    // 0x1340a0: 0xe48c0040  swc1        $f12, 0x40($a0)
    ctx->pc = 0x1340a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1340a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1340a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1340a8: 0xe48d0044  swc1        $f13, 0x44($a0)
    ctx->pc = 0x1340a8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x1340ac: 0xe48e0048  swc1        $f14, 0x48($a0)
    ctx->pc = 0x1340acu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1340b0: 0x804d06c  j           func_1341B0
    ctx->pc = 0x1340B0u;
    ctx->pc = 0x1340B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1340B0u;
    // 0x1340b4: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1341B0u;
    FUN_001341b0_0x1341b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1340B8u;
}
