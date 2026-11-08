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

// Function: entry_001afc9c
// Address: 0x1afc9c - 0x1afcc4
void entry_001afc9c_0x1afc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc9c_0x1afc9c");
#endif

    ctx->pc = 0x1afc9cu;

    // 0x1afc9c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1afc9cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afca0: 0x0  nop
    ctx->pc = 0x1afca0u;
    // NOP
    // 0x1afca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1afca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1afca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1afca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1afcac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1afcacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1afcb0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1afcb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1afcb4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFCB4u;
    {
        const bool branch_taken_0x1afcb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCB4u;
        // 0x1afcb8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcb4) {
            ctx->pc = 0x1AFCC4u;
            return;
        }
    }
    ctx->pc = 0x1AFCBCu;
    // 0x1afcbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFCBCu;
    {
        const bool branch_taken_0x1afcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCBCu;
        // 0x1afcc0: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcbc) {
            ctx->pc = 0x1AFCC8u;
            return;
        }
    }
    ctx->pc = 0x1AFCC4u;
}
