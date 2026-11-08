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

// Function: entry_0010d0f8
// Address: 0x10d0f8 - 0x10d13c
void entry_0010d0f8_0x10d0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0f8_0x10d0f8");
#endif

    ctx->pc = 0x10d0f8u;

    // 0x10d0f8: 0x8624024e  lh          $a0, 0x24E($s1)
    ctx->pc = 0x10d0f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 590)));
    // 0x10d0fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10d100: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x10D100u;
    {
        const bool branch_taken_0x10d100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D100u;
        // 0x10d104: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d100) {
            ctx->pc = 0x10D198u;
            return;
        }
    }
    ctx->pc = 0x10D108u;
    // 0x10d108: 0xc6220248  lwc1        $f2, 0x248($s1)
    ctx->pc = 0x10d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10d10c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10d110: 0xc6210244  lwc1        $f1, 0x244($s1)
    ctx->pc = 0x10d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10d114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10d114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10d118: 0x0  nop
    ctx->pc = 0x10d118u;
    // NOP
    // 0x10d11c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x10d11cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x10d120: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10d120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10d124: 0x0  nop
    ctx->pc = 0x10d124u;
    // NOP
    // 0x10d128: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x10D128u;
    {
        const bool branch_taken_0x10d128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D128u;
        // 0x10d12c: 0xe6210244  swc1        $f1, 0x244($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d128) {
            ctx->pc = 0x10D13Cu;
            return;
        }
    }
    ctx->pc = 0x10D130u;
    // 0x10d130: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x10d130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x10d134: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10d134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10d138: 0xa623024e  sh          $v1, 0x24E($s1)
    ctx->pc = 0x10d138u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x10d13cu;
}
