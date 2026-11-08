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

// Function: entry_0013e7d0
// Address: 0x13e7d0 - 0x13e7ec
void entry_0013e7d0_0x13e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e7d0_0x13e7d0");
#endif

    ctx->pc = 0x13e7d0u;

    // 0x13e7d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13e7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e7d8: 0x0  nop
    ctx->pc = 0x13e7d8u;
    // NOP
    // 0x13e7dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13e7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13e7e0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x13e7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13e7e4: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x13e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x13e7e8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x13e7ecu;
}
