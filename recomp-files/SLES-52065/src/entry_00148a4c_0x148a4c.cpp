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

// Function: entry_00148a4c
// Address: 0x148a4c - 0x148a80
void entry_00148a4c_0x148a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148a4c_0x148a4c");
#endif

    ctx->pc = 0x148a4cu;

    // 0x148a4c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x148a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148a50: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x148a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148a54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148a58: 0x0  nop
    ctx->pc = 0x148a58u;
    // NOP
    // 0x148a5c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x148A5Cu;
    {
        const bool branch_taken_0x148a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148a5c) {
            ctx->pc = 0x148A80u;
            return;
        }
    }
    ctx->pc = 0x148A64u;
    // 0x148a64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x148a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148a68: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x148a68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a6c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x148a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x148a70: 0x8dc70000  lw          $a3, 0x0($t6)
    ctx->pc = 0x148a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x148a74: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x148a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x148a78: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x148a78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x148a7c: 0x0  nop
    ctx->pc = 0x148a7cu;
    // NOP
    ctx->pc = 0x148a80u;
}
