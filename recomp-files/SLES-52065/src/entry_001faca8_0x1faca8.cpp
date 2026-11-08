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

// Function: entry_001faca8
// Address: 0x1faca8 - 0x1facd0
void entry_001faca8_0x1faca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faca8_0x1faca8");
#endif

    ctx->pc = 0x1faca8u;

label_1faca8:
    // 0x1faca8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1faca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1facac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1facacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1facb0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1facb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1facb4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1facb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1facb8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1facb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1facbc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1facbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1facc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1facc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1facc4: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FACC4u;
    {
        const bool branch_taken_0x1facc4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACC4u;
        // 0x1facc8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facc4) {
            ctx->pc = 0x1FACA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faca8;
        }
    }
    ctx->pc = 0x1FACCCu;
    // 0x1faccc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1facccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1facd0u;
}
