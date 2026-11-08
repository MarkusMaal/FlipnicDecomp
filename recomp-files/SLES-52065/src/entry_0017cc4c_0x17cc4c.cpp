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

// Function: entry_0017cc4c
// Address: 0x17cc4c - 0x17cca8
void entry_0017cc4c_0x17cc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cc4c_0x17cc4c");
#endif

    ctx->pc = 0x17cc4cu;

    // 0x17cc4c: 0x0  nop
    ctx->pc = 0x17cc4cu;
    // NOP
    // 0x17cc50: 0x0  nop
    ctx->pc = 0x17cc50u;
    // NOP
    // 0x17cc54: 0x0  nop
    ctx->pc = 0x17cc54u;
    // NOP
    // 0x17cc58: 0x460300c4  c1          0x300C4
    ctx->pc = 0x17cc58u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x17cc5c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x17cc5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x17cc60: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x17cc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x17cc64: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x17cc64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x17cc68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17cc68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17cc6c: 0x0  nop
    ctx->pc = 0x17cc6cu;
    // NOP
    // 0x17cc70: 0x0  nop
    ctx->pc = 0x17cc70u;
    // NOP
    // 0x17cc74: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17cc74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cc78: 0x0  nop
    ctx->pc = 0x17cc78u;
    // NOP
    // 0x17cc7c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x17CC7Cu;
    {
        const bool branch_taken_0x17cc7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC7Cu;
        // 0x17cc80: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc7c) {
            ctx->pc = 0x17CCACu;
            return;
        }
    }
    ctx->pc = 0x17CC84u;
    // 0x17cc84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17cc88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cc8c: 0x0  nop
    ctx->pc = 0x17cc8cu;
    // NOP
    // 0x17cc90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17cc90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cc94: 0x0  nop
    ctx->pc = 0x17cc94u;
    // NOP
    // 0x17cc98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17CC98u;
    {
        const bool branch_taken_0x17cc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cc98) {
            ctx->pc = 0x17CCA8u;
            return;
        }
    }
    ctx->pc = 0x17CCA0u;
    // 0x17cca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17CCA0u;
    {
        const bool branch_taken_0x17cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cca0) {
            ctx->pc = 0x17CCB0u;
            return;
        }
    }
    ctx->pc = 0x17CCA8u;
}
