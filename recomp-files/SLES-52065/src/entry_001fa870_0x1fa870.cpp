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

// Function: entry_001fa870
// Address: 0x1fa870 - 0x1fa8ac
void entry_001fa870_0x1fa870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa870_0x1fa870");
#endif

    ctx->pc = 0x1fa870u;

label_1fa870:
    // 0x1fa870: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x1fa870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x1fa874: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1fa874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa878: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fa878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fa87c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1fa87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1fa880: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa880u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1fa884: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1fa884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa888: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fa888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fa88c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1fa88cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1fa890: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1fa890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1fa894: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1fa894u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1fa898: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x1fa898u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1fa89c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa89cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fa8a0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1fa8a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1fa8a4: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FA8A4u;
    {
        const bool branch_taken_0x1fa8a4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1FA8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8A4u;
        // 0x1fa8a8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8a4) {
            ctx->pc = 0x1FA870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa870;
        }
    }
    ctx->pc = 0x1FA8ACu;
}
