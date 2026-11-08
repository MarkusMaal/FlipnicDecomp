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

// Function: entry_00189510
// Address: 0x189510 - 0x18954c
void entry_00189510_0x189510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189510_0x189510");
#endif

    ctx->pc = 0x189510u;

    // 0x189510: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x189510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x189514: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x189514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189518: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18951c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x189520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189524: 0x0  nop
    ctx->pc = 0x189524u;
    // NOP
    // 0x189528: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18952c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18952cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189530: 0x0  nop
    ctx->pc = 0x189530u;
    // NOP
    // 0x189534: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x189534u;
    {
        const bool branch_taken_0x189534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189534) {
            ctx->pc = 0x18954Cu;
            return;
        }
    }
    ctx->pc = 0x18953Cu;
    // 0x18953c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18953cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189540: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x189544u;
    {
        const bool branch_taken_0x189544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189544u;
        // 0x189548: 0xa3a300d9  sb          $v1, 0xD9($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 217), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189544) {
            ctx->pc = 0x189568u;
            return;
        }
    }
    ctx->pc = 0x18954Cu;
}
