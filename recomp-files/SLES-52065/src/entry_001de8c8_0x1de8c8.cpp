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

// Function: entry_001de8c8
// Address: 0x1de8c8 - 0x1de8e8
void entry_001de8c8_0x1de8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de8c8_0x1de8c8");
#endif

    ctx->pc = 0x1de8c8u;

    // 0x1de8c8: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1de8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de8cc: 0x3c01c3f0  lui         $at, 0xC3F0
    ctx->pc = 0x1de8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50160 << 16));
    // 0x1de8d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1de8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de8d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de8d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE8D8u;
    {
        const bool branch_taken_0x1de8d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de8d8) {
            ctx->pc = 0x1DE8E8u;
            return;
        }
    }
    ctx->pc = 0x1DE8E0u;
    // 0x1de8e0: 0xe60100e4  swc1        $f1, 0xE4($s0)
    ctx->pc = 0x1de8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1de8e4: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1de8e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    ctx->pc = 0x1de8e8u;
}
