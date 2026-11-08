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

// Function: entry_001fafa0
// Address: 0x1fafa0 - 0x1fafb4
void entry_001fafa0_0x1fafa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fafa0_0x1fafa0");
#endif

    ctx->pc = 0x1fafa0u;

    // 0x1fafa0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1fafa0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1fafa4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1fafa4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1fafa8: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1fafa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1fafac: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x1fafacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x1fafb0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x1fafb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    ctx->pc = 0x1fafb4u;
}
