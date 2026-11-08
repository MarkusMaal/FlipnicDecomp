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

// Function: entry_00141ba8
// Address: 0x141ba8 - 0x141bc8
void entry_00141ba8_0x141ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ba8_0x141ba8");
#endif

    ctx->pc = 0x141ba8u;

    // 0x141ba8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x141ba8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141bac: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x141bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x141bb0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x141bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x141bb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x141bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x141bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x141bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141bbc: 0x0  nop
    ctx->pc = 0x141bbcu;
    // NOP
    // 0x141bc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x141bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x141bc4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x141bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->pc = 0x141bc8u;
}
