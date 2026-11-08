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

// Function: entry_0018bf88
// Address: 0x18bf88 - 0x18bfc0
void entry_0018bf88_0x18bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bf88_0x18bf88");
#endif

    ctx->pc = 0x18bf88u;

    // 0x18bf88: 0xc62104e4  lwc1        $f1, 0x4E4($s1)
    ctx->pc = 0x18bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bf8c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x18bf90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18bf94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bf98: 0x0  nop
    ctx->pc = 0x18bf98u;
    // NOP
    // 0x18bf9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18bf9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bfa0: 0x0  nop
    ctx->pc = 0x18bfa0u;
    // NOP
    // 0x18bfa4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18BFA4u;
    {
        const bool branch_taken_0x18bfa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFA4u;
        // 0x18bfa8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfa4) {
            ctx->pc = 0x18BFC0u;
            return;
        }
    }
    ctx->pc = 0x18BFACu;
    // 0x18bfac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18bfb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bfb4: 0x0  nop
    ctx->pc = 0x18bfb4u;
    // NOP
    // 0x18bfb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18bfb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18bfbc: 0xe62004e4  swc1        $f0, 0x4E4($s1)
    ctx->pc = 0x18bfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1252), bits); }
    ctx->pc = 0x18bfc0u;
}
