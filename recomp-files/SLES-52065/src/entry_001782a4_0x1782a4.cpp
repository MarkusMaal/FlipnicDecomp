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

// Function: entry_001782a4
// Address: 0x1782a4 - 0x1782bc
void entry_001782a4_0x1782a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001782a4_0x1782a4");
#endif

    ctx->pc = 0x1782a4u;

    // 0x1782a4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1782a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1782a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1782a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1782ac: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1782acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1782b0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1782b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1782b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1782b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1782b8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1782b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x1782bcu;
}
