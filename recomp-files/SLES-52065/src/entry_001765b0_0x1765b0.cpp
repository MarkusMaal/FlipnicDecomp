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

// Function: entry_001765b0
// Address: 0x1765b0 - 0x176614
void entry_001765b0_0x1765b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001765b0_0x1765b0");
#endif

    ctx->pc = 0x1765b0u;

    // 0x1765b0: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x1765b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1765b4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1765b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765b8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1765b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1765bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1765bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1765c0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1765c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1765c4: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1765c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1765c8: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1765c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765cc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1765ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1765d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1765d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1765d4: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1765d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1765d8: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x1765d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1765dc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1765dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765e0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1765e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1765e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1765e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1765e8: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1765e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1765ec: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1765ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765f0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1765f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1765f4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1765f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1765f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1765f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1765fc: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1765fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176604: 0x0  nop
    ctx->pc = 0x176604u;
    // NOP
    // 0x176608: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x176608u;
    {
        const bool branch_taken_0x176608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176608u;
        // 0x17660c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176608) {
            ctx->pc = 0x176614u;
            return;
        }
    }
    ctx->pc = 0x176610u;
    // 0x176610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176614u;
}
