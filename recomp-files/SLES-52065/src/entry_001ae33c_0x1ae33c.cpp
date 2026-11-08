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

// Function: entry_001ae33c
// Address: 0x1ae33c - 0x1ae368
void entry_001ae33c_0x1ae33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae33c_0x1ae33c");
#endif

    ctx->pc = 0x1ae33cu;

    // 0x1ae33c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1ae33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae340: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1ae340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1ae344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae348: 0x0  nop
    ctx->pc = 0x1ae348u;
    // NOP
    // 0x1ae34c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae350: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae350u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ae354: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ae354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ae358: 0x0  nop
    ctx->pc = 0x1ae358u;
    // NOP
    // 0x1ae35c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE35Cu;
    {
        const bool branch_taken_0x1ae35c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE35Cu;
        // 0x1ae360: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae35c) {
            ctx->pc = 0x1AE368u;
            return;
        }
    }
    ctx->pc = 0x1AE364u;
    // 0x1ae364: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ae364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1ae368u;
}
