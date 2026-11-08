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

// Function: entry_001279b8
// Address: 0x1279b8 - 0x127a00
void entry_001279b8_0x1279b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001279b8_0x1279b8");
#endif

    ctx->pc = 0x1279b8u;

    // 0x1279b8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1279b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1279bc: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1279bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1279c0: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x1279c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1279c4: 0x82620008  lb          $v0, 0x8($s3)
    ctx->pc = 0x1279c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1279c8: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1279C8u;
    {
        const bool branch_taken_0x1279c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1279c8) {
            ctx->pc = 0x127A34u;
            return;
        }
    }
    ctx->pc = 0x1279D0u;
    // 0x1279d0: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x1279d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1279d4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1279d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1279d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1279d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1279dc: 0x0  nop
    ctx->pc = 0x1279dcu;
    // NOP
    // 0x1279e0: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1279E0u;
    {
        const bool branch_taken_0x1279e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1279E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279E0u;
        // 0x1279e4: 0xc6610004  lwc1        $f1, 0x4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279e0) {
            ctx->pc = 0x127A34u;
            return;
        }
    }
    ctx->pc = 0x1279E8u;
    // 0x1279e8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1279e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1279ec: 0x0  nop
    ctx->pc = 0x1279ecu;
    // NOP
    // 0x1279f0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1279F0u;
    {
        const bool branch_taken_0x1279f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1279F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279F0u;
        // 0x1279f4: 0x24140009  addiu       $s4, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279f0) {
            ctx->pc = 0x127A34u;
            return;
        }
    }
    ctx->pc = 0x1279F8u;
    // 0x1279f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1279F8u;
    {
        const bool branch_taken_0x1279f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1279f8) {
            ctx->pc = 0x127A20u;
            return;
        }
    }
    ctx->pc = 0x127A00u;
}
