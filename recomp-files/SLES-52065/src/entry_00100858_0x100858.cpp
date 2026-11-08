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

// Function: entry_00100858
// Address: 0x100858 - 0x100880
void entry_00100858_0x100858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100858_0x100858");
#endif

    ctx->pc = 0x100858u;

    // 0x100858: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x100858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x10085c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x10085cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x100860: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x100860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x100864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100868: 0xc4410254  lwc1        $f1, 0x254($v0)
    ctx->pc = 0x100868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10086c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10086cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x100870: 0x0  nop
    ctx->pc = 0x100870u;
    // NOP
    // 0x100874: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x100874u;
    {
        const bool branch_taken_0x100874 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x100874) {
            ctx->pc = 0x100880u;
            return;
        }
    }
    ctx->pc = 0x10087Cu;
    // 0x10087c: 0xe4540254  swc1        $f20, 0x254($v0)
    ctx->pc = 0x10087cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 596), bits); }
    ctx->pc = 0x100880u;
}
