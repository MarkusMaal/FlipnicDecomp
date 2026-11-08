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

// Function: entry_001b9c90
// Address: 0x1b9c90 - 0x1b9cc8
void entry_001b9c90_0x1b9c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9c90_0x1b9c90");
#endif

    ctx->pc = 0x1b9c90u;

    // 0x1b9c90: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x1b9c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c94: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1b9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1b9c98: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b9c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ca0: 0x0  nop
    ctx->pc = 0x1b9ca0u;
    // NOP
    // 0x1b9ca4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9ca8: 0x0  nop
    ctx->pc = 0x1b9ca8u;
    // NOP
    // 0x1b9cac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9CACu;
    {
        const bool branch_taken_0x1b9cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CACu;
        // 0x1b9cb0: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9cac) {
            ctx->pc = 0x1B9CC8u;
            return;
        }
    }
    ctx->pc = 0x1B9CB4u;
    // 0x1b9cb4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b9cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9cb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9cbc: 0x0  nop
    ctx->pc = 0x1b9cbcu;
    // NOP
    // 0x1b9cc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9cc4: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x1b9cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    ctx->pc = 0x1b9cc8u;
}
