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

// Function: entry_001730f4
// Address: 0x1730f4 - 0x173118
void entry_001730f4_0x1730f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001730f4_0x1730f4");
#endif

    ctx->pc = 0x1730f4u;

    // 0x1730f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1730f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1730f8: 0xe6211464  swc1        $f1, 0x1464($s1)
    ctx->pc = 0x1730f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
    // 0x1730fc: 0xc6201474  lwc1        $f0, 0x1474($s1)
    ctx->pc = 0x1730fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173100: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x173100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173104: 0x0  nop
    ctx->pc = 0x173104u;
    // NOP
    // 0x173108: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x173108u;
    {
        const bool branch_taken_0x173108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173108) {
            ctx->pc = 0x17315Cu;
            return;
        }
    }
    ctx->pc = 0x173110u;
    // 0x173110: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x173110u;
    {
        const bool branch_taken_0x173110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173110u;
        // 0x173114: 0xe6201464  swc1        $f0, 0x1464($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x173110) {
            ctx->pc = 0x17315Cu;
            return;
        }
    }
    ctx->pc = 0x173118u;
}
