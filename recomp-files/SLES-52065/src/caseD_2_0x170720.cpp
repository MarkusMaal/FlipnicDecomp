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

// Function: caseD_2
// Address: 0x170720 - 0x170770
void caseD_2_0x170720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x170720");
#endif

    ctx->pc = 0x170720u;

    // 0x170720: 0xc602024c  lwc1        $f2, 0x24C($s0)
    ctx->pc = 0x170720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170724: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170728: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x170728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x17072c: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x17072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170730: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x170730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x170734: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x170734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x170738: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x170738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17073c: 0x0  nop
    ctx->pc = 0x17073cu;
    // NOP
    // 0x170740: 0x46022800  add.s       $f0, $f5, $f2
    ctx->pc = 0x170740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x170744: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x170744u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170748: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x170748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17074c: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x17074cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x170750: 0x0  nop
    ctx->pc = 0x170750u;
    // NOP
    // 0x170754: 0x0  nop
    ctx->pc = 0x170754u;
    // NOP
    // 0x170758: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x170758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17075c: 0x0  nop
    ctx->pc = 0x17075cu;
    // NOP
    // 0x170760: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x170760u;
    {
        const bool branch_taken_0x170760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170760) {
            ctx->pc = 0x170770u;
            return;
        }
    }
    ctx->pc = 0x170768u;
    // 0x170768: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x170768u;
    {
        const bool branch_taken_0x170768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170768u;
        // 0x17076c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170768) {
            ctx->pc = 0x170784u;
            return;
        }
    }
    ctx->pc = 0x170770u;
}
