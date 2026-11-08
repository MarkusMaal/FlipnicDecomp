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

// Function: entry_001a6fd0
// Address: 0x1a6fd0 - 0x1a7000
void entry_001a6fd0_0x1a6fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6fd0_0x1a6fd0");
#endif

    ctx->pc = 0x1a6fd0u;

    // 0x1a6fd0: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A6FD0u;
    {
        const bool branch_taken_0x1a6fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FD0u;
        // 0x1a6fd4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fd0) {
            ctx->pc = 0x1A700Cu;
            return;
        }
    }
    ctx->pc = 0x1A6FD8u;
    // 0x1a6fd8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6FD8u;
    {
        const bool branch_taken_0x1a6fd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FD8u;
        // 0x1a6fdc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fd8) {
            ctx->pc = 0x1A7000u;
            return;
        }
    }
    ctx->pc = 0x1A6FE0u;
    // 0x1a6fe0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a6fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a6fe4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a6fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6fe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a6fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a6fec: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1a6fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1a6ff0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a6ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a6ff4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a6ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a6ff8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6FF8u;
    {
        const bool branch_taken_0x1a6ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FF8u;
        // 0x1a6ffc: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ff8) {
            ctx->pc = 0x1A7014u;
            return;
        }
    }
    ctx->pc = 0x1A7000u;
}
