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

// Function: entry_00164e3c
// Address: 0x164e3c - 0x164e70
void entry_00164e3c_0x164e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164e3c_0x164e3c");
#endif

    ctx->pc = 0x164e3cu;

    // 0x164e3c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164E3Cu;
    {
        const bool branch_taken_0x164e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164e3c) {
            ctx->pc = 0x164E70u;
            return;
        }
    }
    ctx->pc = 0x164E44u;
    // 0x164e44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x164e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x164e48: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x164e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164e4c: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x164e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164e50: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x164e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164e54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x164e54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x164e58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x164e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164e5c: 0x0  nop
    ctx->pc = 0x164e5cu;
    // NOP
    // 0x164e60: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x164E60u;
    {
        const bool branch_taken_0x164e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164e60) {
            ctx->pc = 0x164EACu;
            return;
        }
    }
    ctx->pc = 0x164E68u;
    // 0x164e68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x164E68u;
    {
        const bool branch_taken_0x164e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E68u;
        // 0x164e6c: 0xe66102f0  swc1        $f1, 0x2F0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e68) {
            ctx->pc = 0x164EACu;
            return;
        }
    }
    ctx->pc = 0x164E70u;
}
