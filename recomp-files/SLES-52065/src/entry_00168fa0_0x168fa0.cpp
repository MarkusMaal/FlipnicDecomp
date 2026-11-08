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

// Function: entry_00168fa0
// Address: 0x168fa0 - 0x168fc4
void entry_00168fa0_0x168fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168fa0_0x168fa0");
#endif

    ctx->pc = 0x168fa0u;

    // 0x168fa0: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x168fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168fa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x168fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x168fa8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x168fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x168fac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x168facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x168fb0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x168fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x168fb4: 0x0  nop
    ctx->pc = 0x168fb4u;
    // NOP
    // 0x168fb8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x168FB8u;
    {
        const bool branch_taken_0x168fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FB8u;
        // 0x168fbc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fb8) {
            ctx->pc = 0x168FC4u;
            return;
        }
    }
    ctx->pc = 0x168FC0u;
    // 0x168fc0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x168fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x168fc4u;
}
