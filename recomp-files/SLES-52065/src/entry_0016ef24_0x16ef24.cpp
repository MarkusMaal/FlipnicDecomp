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

// Function: entry_0016ef24
// Address: 0x16ef24 - 0x16ef70
void entry_0016ef24_0x16ef24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ef24_0x16ef24");
#endif

    ctx->pc = 0x16ef24u;

    // 0x16ef24: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x16ef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ef28: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x16ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x16ef2c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x16ef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x16ef30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ef30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ef34: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16ef34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16ef38: 0x0  nop
    ctx->pc = 0x16ef38u;
    // NOP
    // 0x16ef3c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x16ef3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x16ef40: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x16ef40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x16ef44: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x16ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x16ef48: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x16ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x16ef4c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x16ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ef50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ef50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ef54: 0x0  nop
    ctx->pc = 0x16ef54u;
    // NOP
    // 0x16ef58: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16EF58u;
    {
        const bool branch_taken_0x16ef58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF58u;
        // 0x16ef5c: 0x3c033db8  lui         $v1, 0x3DB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef58) {
            ctx->pc = 0x16EF70u;
            return;
        }
    }
    ctx->pc = 0x16EF60u;
    // 0x16ef60: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x16ef60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16ef64: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x16ef64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x16ef68: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16EF68u;
    {
        const bool branch_taken_0x16ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF68u;
        // 0x16ef6c: 0xe4820014  swc1        $f2, 0x14($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef68) {
            ctx->pc = 0x16EFF4u;
            return;
        }
    }
    ctx->pc = 0x16EF70u;
}
