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

// Function: entry_00182308
// Address: 0x182308 - 0x182344
void entry_00182308_0x182308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182308_0x182308");
#endif

    ctx->pc = 0x182308u;

    // 0x182308: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18230c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18230cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182310: 0x0  nop
    ctx->pc = 0x182310u;
    // NOP
    // 0x182314: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x182314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x182318: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x182318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x18231c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18231cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182320: 0x0  nop
    ctx->pc = 0x182320u;
    // NOP
    // 0x182324: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182328: 0x0  nop
    ctx->pc = 0x182328u;
    // NOP
    // 0x18232c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18232Cu;
    {
        const bool branch_taken_0x18232c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18232Cu;
        // 0x182330: 0xa0238bb0  sb          $v1, -0x7450($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294937520), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18232c) {
            ctx->pc = 0x182344u;
            return;
        }
    }
    ctx->pc = 0x182334u;
    // 0x182334: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182334u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x182338: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x182338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18233c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18233Cu;
    {
        const bool branch_taken_0x18233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18233Cu;
        // 0x182340: 0x3c02437f  lui         $v0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18233c) {
            ctx->pc = 0x182360u;
            return;
        }
    }
    ctx->pc = 0x182344u;
}
