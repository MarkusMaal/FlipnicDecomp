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

// Function: caseD_4
// Address: 0x1b9858 - 0x1b98b4
void caseD_4_0x1b9858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1b9858");
#endif

    ctx->pc = 0x1b9858u;

    // 0x1b9858: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b9858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1b985c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1b985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1b9860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9864: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1b9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1b9868: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b9868u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b986c: 0x0  nop
    ctx->pc = 0x1b986cu;
    // NOP
    // 0x1b9870: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b9870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b9874: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1b9874u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9878: 0x0  nop
    ctx->pc = 0x1b9878u;
    // NOP
    // 0x1b987c: 0x0  nop
    ctx->pc = 0x1b987cu;
    // NOP
    // 0x1b9880: 0x1810  mfhi        $v1
    ctx->pc = 0x1b9880u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b9884: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9888: 0x0  nop
    ctx->pc = 0x1b9888u;
    // NOP
    // 0x1b988c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b988cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9890: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1b9890u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1b9894: 0x0  nop
    ctx->pc = 0x1b9894u;
    // NOP
    // 0x1b9898: 0x0  nop
    ctx->pc = 0x1b9898u;
    // NOP
    // 0x1b989c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b989cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b98a0: 0x0  nop
    ctx->pc = 0x1b98a0u;
    // NOP
    // 0x1b98a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B98A4u;
    {
        const bool branch_taken_0x1b98a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98A4u;
        // 0x1b98a8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98a4) {
            ctx->pc = 0x1B98B4u;
            return;
        }
    }
    ctx->pc = 0x1B98ACu;
    // 0x1b98ac: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1B98ACu;
    {
        const bool branch_taken_0x1b98ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98ACu;
        // 0x1b98b0: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98ac) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B98B4u;
}
