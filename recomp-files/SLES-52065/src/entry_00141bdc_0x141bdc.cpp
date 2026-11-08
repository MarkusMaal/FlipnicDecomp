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

// Function: entry_00141bdc
// Address: 0x141bdc - 0x141c20
void entry_00141bdc_0x141bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141bdc_0x141bdc");
#endif

    ctx->pc = 0x141bdcu;

    // 0x141bdc: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x141bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x141be0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x141be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x141be4: 0x0  nop
    ctx->pc = 0x141be4u;
    // NOP
    // 0x141be8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x141BE8u;
    {
        const bool branch_taken_0x141be8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x141be8) {
            ctx->pc = 0x141C30u;
            return;
        }
    }
    ctx->pc = 0x141BF0u;
    // 0x141bf0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x141bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x141bf4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x141BF4u;
    {
        const bool branch_taken_0x141bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141bf4) {
            ctx->pc = 0x141C20u;
            return;
        }
    }
    ctx->pc = 0x141BFCu;
    // 0x141bfc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x141bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x141c00: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x141c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x141c04: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x141c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x141c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x141c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141c0c: 0x0  nop
    ctx->pc = 0x141c0cu;
    // NOP
    // 0x141c10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x141c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x141c14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x141c14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x141c18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x141C18u;
    {
        const bool branch_taken_0x141c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C18u;
        // 0x141c1c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c18) {
            ctx->pc = 0x141C24u;
            return;
        }
    }
    ctx->pc = 0x141C20u;
}
