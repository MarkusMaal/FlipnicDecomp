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

// Function: entry_0019dc54
// Address: 0x19dc54 - 0x19dc84
void entry_0019dc54_0x19dc54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dc54_0x19dc54");
#endif

    ctx->pc = 0x19dc54u;

    // 0x19dc54: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x19dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x19dc58: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x19dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19dc5c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x19dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19dc60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19dc64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19dc64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19dc68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19dc68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19dc6c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19dc6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19dc70: 0x0  nop
    ctx->pc = 0x19dc70u;
    // NOP
    // 0x19dc74: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19DC74u;
    {
        const bool branch_taken_0x19dc74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DC74u;
        // 0x19dc78: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc74) {
            ctx->pc = 0x19DC84u;
            return;
        }
    }
    ctx->pc = 0x19DC7Cu;
    // 0x19dc7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19dc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19dc80: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x19dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19dc84u;
}
