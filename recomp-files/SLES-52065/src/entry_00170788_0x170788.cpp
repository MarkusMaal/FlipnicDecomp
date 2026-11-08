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

// Function: entry_00170788
// Address: 0x170788 - 0x1707b8
void entry_00170788_0x170788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170788_0x170788");
#endif

    ctx->pc = 0x170788u;

    // 0x170788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x170788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17078c: 0x0  nop
    ctx->pc = 0x17078cu;
    // NOP
    // 0x170790: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x170790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170794: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170798: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x170798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17079c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17079cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1707a0: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x1707a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1707a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1707A4u;
    {
        const bool branch_taken_0x1707a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1707A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707A4u;
        // 0x1707a8: 0x46000901  sub.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707a4) {
            ctx->pc = 0x1707B8u;
            return;
        }
    }
    ctx->pc = 0x1707ACu;
    // 0x1707ac: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1707acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1707b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1707B0u;
    {
        const bool branch_taken_0x1707b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707B0u;
        // 0x1707b4: 0xc424f4ec  lwc1        $f4, -0xB14($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707b0) {
            ctx->pc = 0x1707F0u;
            return;
        }
    }
    ctx->pc = 0x1707B8u;
}
