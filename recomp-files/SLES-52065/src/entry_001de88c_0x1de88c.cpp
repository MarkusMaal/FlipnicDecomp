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

// Function: entry_001de88c
// Address: 0x1de88c - 0x1de8c8
void entry_001de88c_0x1de88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de88c_0x1de88c");
#endif

    ctx->pc = 0x1de88cu;

    // 0x1de88c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1DE88Cu;
    {
        const bool branch_taken_0x1de88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE88Cu;
        // 0x1de890: 0x31020400  andi        $v0, $t0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de88c) {
            ctx->pc = 0x1DE94Cu;
            return;
        }
    }
    ctx->pc = 0x1DE894u;
    // 0x1de894: 0x8e0600dc  lw          $a2, 0xDC($s0)
    ctx->pc = 0x1de894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1de898: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1de898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1de89c: 0x50c20026  beql        $a2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DE89Cu;
    {
        const bool branch_taken_0x1de89c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de89c) {
            ctx->pc = 0x1DE8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE89Cu;
            // 0x1de8a0: 0x2402fdff  addiu       $v0, $zero, -0x201 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE938u;
            return;
        }
    }
    ctx->pc = 0x1DE8A4u;
    // 0x1de8a4: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1de8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de8a8: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1de8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de8ac: 0x3c0143f0  lui         $at, 0x43F0
    ctx->pc = 0x1de8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17392 << 16));
    // 0x1de8b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1de8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1de8b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1de8b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1de8b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1de8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de8bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE8BCu;
    {
        const bool branch_taken_0x1de8bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE8BCu;
        // 0x1de8c0: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8bc) {
            ctx->pc = 0x1DE8C8u;
            return;
        }
    }
    ctx->pc = 0x1DE8C4u;
    // 0x1de8c4: 0xe60200e4  swc1        $f2, 0xE4($s0)
    ctx->pc = 0x1de8c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    ctx->pc = 0x1de8c8u;
}
