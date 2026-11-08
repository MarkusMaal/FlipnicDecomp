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

// Function: entry_001631b0
// Address: 0x1631b0 - 0x1631cc
void entry_001631b0_0x1631b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001631b0_0x1631b0");
#endif

    ctx->pc = 0x1631b0u;

    // 0x1631b0: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x1631b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x1631b4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1631b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1631b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1631bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1631bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1631c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1631c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1631c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1631c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1631c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1631c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x1631ccu;
}
