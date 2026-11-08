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

// Function: entry_00172ed0
// Address: 0x172ed0 - 0x172f08
void entry_00172ed0_0x172ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172ed0_0x172ed0");
#endif

    ctx->pc = 0x172ed0u;

    // 0x172ed0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172ed4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x172ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x172ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172edc: 0x0  nop
    ctx->pc = 0x172edcu;
    // NOP
    // 0x172ee0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x172ee4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172ee8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x172eec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x172ef0: 0x0  nop
    ctx->pc = 0x172ef0u;
    // NOP
    // 0x172ef4: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
    // 0x172ef8: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
    // 0x172efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172f00: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x172F00u;
    {
        const bool branch_taken_0x172f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F00u;
        // 0x172f04: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f00) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
    ctx->pc = 0x172F08u;
}
