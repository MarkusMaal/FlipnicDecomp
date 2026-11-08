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

// Function: entry_00137e08
// Address: 0x137e08 - 0x137e40
void entry_00137e08_0x137e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e08_0x137e08");
#endif

    ctx->pc = 0x137e08u;

    // 0x137e08: 0x252b0008  addiu       $t3, $t1, 0x8
    ctx->pc = 0x137e08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x137e0c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x137e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137e10: 0xc522000c  lwc1        $f2, 0xC($t1)
    ctx->pc = 0x137e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137e14: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x137e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137e18: 0x0  nop
    ctx->pc = 0x137e18u;
    // NOP
    // 0x137e1c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x137E1Cu;
    {
        const bool branch_taken_0x137e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E1Cu;
        // 0x137e20: 0x2527000c  addiu       $a3, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e1c) {
            ctx->pc = 0x137E64u;
            return;
        }
    }
    ctx->pc = 0x137E24u;
    // 0x137e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137e28: 0x0  nop
    ctx->pc = 0x137e28u;
    // NOP
    // 0x137e2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x137E2Cu;
    {
        const bool branch_taken_0x137e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137e2c) {
            ctx->pc = 0x137E40u;
            return;
        }
    }
    ctx->pc = 0x137E34u;
    // 0x137e34: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x137e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x137e38: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x137E38u;
    {
        const bool branch_taken_0x137e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E38u;
        // 0x137e3c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e38) {
            ctx->pc = 0x137EA8u;
            return;
        }
    }
    ctx->pc = 0x137E40u;
}
