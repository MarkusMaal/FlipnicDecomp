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

// Function: entry_00170d1c
// Address: 0x170d1c - 0x170d50
void entry_00170d1c_0x170d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170d1c_0x170d1c");
#endif

    ctx->pc = 0x170d1cu;

    // 0x170d1c: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x170d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170d20: 0xc6000248  lwc1        $f0, 0x248($s0)
    ctx->pc = 0x170d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170d24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170d24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x170d28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x170d2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170d30: 0x0  nop
    ctx->pc = 0x170d30u;
    // NOP
    // 0x170d34: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x170D34u;
    {
        const bool branch_taken_0x170d34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D34u;
        // 0x170d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d34) {
            ctx->pc = 0x170D50u;
            return;
        }
    }
    ctx->pc = 0x170D3Cu;
    // 0x170d3c: 0xa2020264  sb          $v0, 0x264($s0)
    ctx->pc = 0x170d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 2));
    // 0x170d40: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x170d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x170d44: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x170d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x170d48: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x170d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x170d4c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x170d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x170d50u;
}
