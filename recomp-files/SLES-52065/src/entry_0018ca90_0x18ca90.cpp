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

// Function: entry_0018ca90
// Address: 0x18ca90 - 0x18cac8
void entry_0018ca90_0x18ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ca90_0x18ca90");
#endif

    ctx->pc = 0x18ca90u;

    // 0x18ca90: 0xc6010504  lwc1        $f1, 0x504($s0)
    ctx->pc = 0x18ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ca94: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18ca98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18ca9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ca9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18caa0: 0x0  nop
    ctx->pc = 0x18caa0u;
    // NOP
    // 0x18caa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18caa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18caa8: 0x0  nop
    ctx->pc = 0x18caa8u;
    // NOP
    // 0x18caac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CAACu;
    {
        const bool branch_taken_0x18caac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAACu;
        // 0x18cab0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18caac) {
            ctx->pc = 0x18CAC8u;
            return;
        }
    }
    ctx->pc = 0x18CAB4u;
    // 0x18cab4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18cab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18cab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cabc: 0x0  nop
    ctx->pc = 0x18cabcu;
    // NOP
    // 0x18cac0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18cac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18cac4: 0xe6000504  swc1        $f0, 0x504($s0)
    ctx->pc = 0x18cac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1284), bits); }
    ctx->pc = 0x18cac8u;
}
