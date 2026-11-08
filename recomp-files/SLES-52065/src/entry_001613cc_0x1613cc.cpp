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

// Function: entry_001613cc
// Address: 0x1613cc - 0x161410
void entry_001613cc_0x1613cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001613cc_0x1613cc");
#endif

    ctx->pc = 0x1613ccu;

    // 0x1613cc: 0x4410024  bgez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1613CCu;
    {
        const bool branch_taken_0x1613cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1613cc) {
            ctx->pc = 0x161460u;
            return;
        }
    }
    ctx->pc = 0x1613D4u;
    // 0x1613d4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1613d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1613d8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1613d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1613dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1613dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1613e0: 0x0  nop
    ctx->pc = 0x1613e0u;
    // NOP
    // 0x1613e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1613e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1613e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1613e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1613ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1613ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1613f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1613f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1613f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1613f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1613f8: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1613f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1613fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1613FCu;
    {
        const bool branch_taken_0x1613fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613FCu;
        // 0x161400: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613fc) {
            ctx->pc = 0x161410u;
            return;
        }
    }
    ctx->pc = 0x161404u;
    // 0x161404: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x161404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x161408: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161408u;
    {
        const bool branch_taken_0x161408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161408u;
        // 0x16140c: 0xc4211628  lwc1        $f1, 0x1628($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 5672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161408) {
            ctx->pc = 0x161448u;
            return;
        }
    }
    ctx->pc = 0x161410u;
}
