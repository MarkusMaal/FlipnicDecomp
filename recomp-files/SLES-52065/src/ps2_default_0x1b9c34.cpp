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

// Function: default
// Address: 0x1b9c34 - 0x1b9c90
void ps2_default_0x1b9c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1b9c34");
#endif

    ctx->pc = 0x1b9c34u;

    // 0x1b9c34: 0xc60200a8  lwc1        $f2, 0xA8($s0)
    ctx->pc = 0x1b9c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9c38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c3c: 0x0  nop
    ctx->pc = 0x1b9c3cu;
    // NOP
    // 0x1b9c40: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1b9c40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9c44: 0x0  nop
    ctx->pc = 0x1b9c44u;
    // NOP
    // 0x1b9c48: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x1B9C48u;
    {
        const bool branch_taken_0x1b9c48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9c48) {
            ctx->pc = 0x1B9CC8u;
            return;
        }
    }
    ctx->pc = 0x1B9C50u;
    // 0x1b9c50: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x1b9c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c54: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1b9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1b9c58: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b9c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c60: 0x0  nop
    ctx->pc = 0x1b9c60u;
    // NOP
    // 0x1b9c64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b9c64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b9c68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9c68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9c6c: 0x0  nop
    ctx->pc = 0x1b9c6cu;
    // NOP
    // 0x1b9c70: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9C70u;
    {
        const bool branch_taken_0x1b9c70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C70u;
        // 0x1b9c74: 0xe60100a4  swc1        $f1, 0xA4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c70) {
            ctx->pc = 0x1B9C90u;
            return;
        }
    }
    ctx->pc = 0x1B9C78u;
    // 0x1b9c78: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1b9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1b9c7c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1b9c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1b9c80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c84: 0x0  nop
    ctx->pc = 0x1b9c84u;
    // NOP
    // 0x1b9c88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b9c88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b9c8c: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x1b9c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    ctx->pc = 0x1b9c90u;
}
