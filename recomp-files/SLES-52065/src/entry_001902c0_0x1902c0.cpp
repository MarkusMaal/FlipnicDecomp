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

// Function: entry_001902c0
// Address: 0x1902c0 - 0x1902dc
void entry_001902c0_0x1902c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001902c0_0x1902c0");
#endif

    ctx->pc = 0x1902c0u;

    // 0x1902c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1902c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1902c4: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1902c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1902c8: 0x7c20d6f0  sq          $zero, -0x2910($at)
    ctx->pc = 0x1902c8u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x36D6F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x36D6F0u, _value); } while (0);
    // 0x1902cc: 0x2508d6f0  addiu       $t0, $t0, -0x2910
    ctx->pc = 0x1902ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956784));
    // 0x1902d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1902d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902d4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1902d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1902d8: 0x24c6fde8  addiu       $a2, $a2, -0x218
    ctx->pc = 0x1902d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966760));
    ctx->pc = 0x1902dcu;
}
