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

// Function: entry_00170c20
// Address: 0x170c20 - 0x170c64
void entry_00170c20_0x170c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c20_0x170c20");
#endif

    ctx->pc = 0x170c20u;

    // 0x170c20: 0xc6010244  lwc1        $f1, 0x244($s0)
    ctx->pc = 0x170c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170c24: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x170c24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x170c28: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x170c2c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x170c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x170c30: 0x0  nop
    ctx->pc = 0x170c30u;
    // NOP
    // 0x170c34: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x170c34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170c38: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x170C38u;
    {
        const bool branch_taken_0x170c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c38) {
            ctx->pc = 0x170C70u;
            return;
        }
    }
    ctx->pc = 0x170C40u;
    // 0x170c40: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x170c40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170c44: 0x0  nop
    ctx->pc = 0x170c44u;
    // NOP
    // 0x170c48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x170c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x170c4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170c50: 0x0  nop
    ctx->pc = 0x170c50u;
    // NOP
    // 0x170c54: 0x4501fff0  bc1t        . + 4 + (-0x10 << 2)
    ctx->pc = 0x170C54u;
    {
        const bool branch_taken_0x170c54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C54u;
        // 0x170c58: 0x9d1021  addu        $v0, $a0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170c54) {
            ctx->pc = 0x170C18u;
            return;
        }
    }
    ctx->pc = 0x170C5Cu;
    // 0x170c5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x170C5Cu;
    {
        const bool branch_taken_0x170c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170c5c) {
            ctx->pc = 0x170C70u;
            return;
        }
    }
    ctx->pc = 0x170C64u;
}
