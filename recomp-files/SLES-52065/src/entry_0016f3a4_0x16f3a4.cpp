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

// Function: entry_0016f3a4
// Address: 0x16f3a4 - 0x16f3e0
void entry_0016f3a4_0x16f3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f3a4_0x16f3a4");
#endif

    ctx->pc = 0x16f3a4u;

    // 0x16f3a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16F3A4u;
    {
        const bool branch_taken_0x16f3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f3a4) {
            ctx->pc = 0x16F3F0u;
            return;
        }
    }
    ctx->pc = 0x16F3ACu;
    // 0x16f3ac: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x16f3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f3b0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x16f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f3b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f3b8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f3b8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f3bc: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f3c0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f3c8: 0x0  nop
    ctx->pc = 0x16f3c8u;
    // NOP
    // 0x16f3cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f3d0: 0x0  nop
    ctx->pc = 0x16f3d0u;
    // NOP
    // 0x16f3d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F3D4u;
    {
        const bool branch_taken_0x16f3d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3D4u;
        // 0x16f3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3d4) {
            ctx->pc = 0x16F3E0u;
            return;
        }
    }
    ctx->pc = 0x16F3DCu;
    // 0x16f3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16f3e0u;
}
