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

// Function: entry_00164fb8
// Address: 0x164fb8 - 0x164fc0
void entry_00164fb8_0x164fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164fb8_0x164fb8");
#endif

    ctx->pc = 0x164fb8u;

    // 0x164fb8: 0xc6600344  lwc1        $f0, 0x344($s3)
    ctx->pc = 0x164fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164fbc: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x164fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    ctx->pc = 0x164fc0u;
}
