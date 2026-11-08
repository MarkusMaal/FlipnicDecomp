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

// Function: entry_001796a4
// Address: 0x1796a4 - 0x179718
void entry_001796a4_0x1796a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001796a4_0x1796a4");
#endif

    ctx->pc = 0x1796a4u;

    // 0x1796a4: 0x90420838  lbu         $v0, 0x838($v0)
    ctx->pc = 0x1796a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2104)));
    // 0x1796a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1796A8u;
    {
        const bool branch_taken_0x1796a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1796a8) {
            ctx->pc = 0x179738u;
            return;
        }
    }
    ctx->pc = 0x1796B0u;
    // 0x1796b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1796b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1796b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1796b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1796b8: 0x0  nop
    ctx->pc = 0x1796b8u;
    // NOP
    // 0x1796bc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1796bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1796c0: 0x0  nop
    ctx->pc = 0x1796c0u;
    // NOP
    // 0x1796c4: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1796C4u;
    {
        const bool branch_taken_0x1796c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1796C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796C4u;
        // 0x1796c8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796c4) {
            ctx->pc = 0x179718u;
            return;
        }
    }
    ctx->pc = 0x1796CCu;
    // 0x1796cc: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1796ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1796d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1796d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1796d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1796d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1796d8: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1796d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1796dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1796dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1796e0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1796e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1796e4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1796e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1796e8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1796e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1796ec: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1796ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1796f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1796f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1796f4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1796f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1796f8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1796f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1796fc: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1796fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179700: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x179700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179704: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x179708: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x179708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17970c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x17970cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x179710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x179710u;
    {
        const bool branch_taken_0x179710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179710u;
        // 0x179714: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179710) {
            ctx->pc = 0x179724u;
            return;
        }
    }
    ctx->pc = 0x179718u;
}
