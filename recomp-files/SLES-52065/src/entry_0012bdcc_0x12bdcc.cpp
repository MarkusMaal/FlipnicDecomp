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

// Function: entry_0012bdcc
// Address: 0x12bdcc - 0x12be04
void entry_0012bdcc_0x12bdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bdcc_0x12bdcc");
#endif

    ctx->pc = 0x12bdccu;

    // 0x12bdcc: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x12bdccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12bdd0: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bdd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12bdd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12bdd8: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x12bdd8u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[6]); }
    // 0x12bddc: 0x46050882  mul.s       $f2, $f1, $f5
    ctx->pc = 0x12bddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x12bde0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12bde0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12bde4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12bde4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12bde8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12bde8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12bdec: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x12bdecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12bdf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BDF0u;
    {
        const bool branch_taken_0x12bdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDF0u;
        // 0x12bdf4: 0x460111c1  sub.s       $f7, $f2, $f1 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdf0) {
            ctx->pc = 0x12BE04u;
            return;
        }
    }
    ctx->pc = 0x12BDF8u;
    // 0x12bdf8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x12bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x12bdfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12BDFCu;
    {
        const bool branch_taken_0x12bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDFCu;
        // 0x12be00: 0xc442fffc  lwc1        $f2, -0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdfc) {
            ctx->pc = 0x12BE20u;
            return;
        }
    }
    ctx->pc = 0x12BE04u;
}
