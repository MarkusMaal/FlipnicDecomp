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

// Function: entry_0010d2a8
// Address: 0x10d2a8 - 0x10d2e8
void entry_0010d2a8_0x10d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d2a8_0x10d2a8");
#endif

    ctx->pc = 0x10d2a8u;

    // 0x10d2a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d2ac: 0x14830041  bne         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x10D2ACu;
    {
        const bool branch_taken_0x10d2ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2ACu;
        // 0x10d2b0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2ac) {
            ctx->pc = 0x10D3B4u;
            return;
        }
    }
    ctx->pc = 0x10D2B4u;
    // 0x10d2b4: 0xc6220248  lwc1        $f2, 0x248($s1)
    ctx->pc = 0x10d2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10d2b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10d2bc: 0xc6210244  lwc1        $f1, 0x244($s1)
    ctx->pc = 0x10d2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10d2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d2c4: 0x0  nop
    ctx->pc = 0x10d2c4u;
    // NOP
    // 0x10d2c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x10d2c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x10d2cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10d2ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d2d0: 0x0  nop
    ctx->pc = 0x10d2d0u;
    // NOP
    // 0x10d2d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x10D2D4u;
    {
        const bool branch_taken_0x10d2d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D2D4u;
        // 0x10d2d8: 0xe6210244  swc1        $f1, 0x244($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d2d4) {
            ctx->pc = 0x10D2E8u;
            return;
        }
    }
    ctx->pc = 0x10D2DCu;
    // 0x10d2dc: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x10d2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x10d2e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d2e4: 0xa622024e  sh          $v0, 0x24E($s1)
    ctx->pc = 0x10d2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10d2e8u;
}
