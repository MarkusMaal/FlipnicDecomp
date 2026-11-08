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

// Function: entry_0018c690
// Address: 0x18c690 - 0x18c6d4
void entry_0018c690_0x18c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c690_0x18c690");
#endif

    ctx->pc = 0x18c690u;

    // 0x18c690: 0xc60104e4  lwc1        $f1, 0x4E4($s0)
    ctx->pc = 0x18c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c694: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x18c694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x18c698: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c69c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c69cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6a0: 0x0  nop
    ctx->pc = 0x18c6a0u;
    // NOP
    // 0x18c6a4: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x18c6a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x18c6a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18c6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c6ac: 0x0  nop
    ctx->pc = 0x18c6acu;
    // NOP
    // 0x18c6b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18C6B0u;
    {
        const bool branch_taken_0x18c6b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6B0u;
        // 0x18c6b4: 0xe6010574  swc1        $f1, 0x574($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6b0) {
            ctx->pc = 0x18C6D4u;
            return;
        }
    }
    ctx->pc = 0x18C6B8u;
    // 0x18c6b8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x18c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x18c6bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18c6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18c6c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c6c4: 0x0  nop
    ctx->pc = 0x18c6c4u;
    // NOP
    // 0x18c6c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18c6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18c6cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18C6CCu;
    {
        const bool branch_taken_0x18c6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C6CCu;
        // 0x18c6d0: 0xe6000574  swc1        $f0, 0x574($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c6cc) {
            ctx->pc = 0x18C70Cu;
            return;
        }
    }
    ctx->pc = 0x18C6D4u;
}
