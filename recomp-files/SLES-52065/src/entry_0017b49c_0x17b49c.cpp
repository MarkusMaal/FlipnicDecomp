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

// Function: entry_0017b49c
// Address: 0x17b49c - 0x17b4e0
void entry_0017b49c_0x17b49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b49c_0x17b49c");
#endif

    ctx->pc = 0x17b49cu;

    // 0x17b49c: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x17b49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b4a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b4a4: 0x0  nop
    ctx->pc = 0x17b4a4u;
    // NOP
    // 0x17b4a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b4ac: 0x0  nop
    ctx->pc = 0x17b4acu;
    // NOP
    // 0x17b4b0: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x17B4B0u;
    {
        const bool branch_taken_0x17b4b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4B0u;
        // 0x17b4b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4b0) {
            ctx->pc = 0x17B52Cu;
            return;
        }
    }
    ctx->pc = 0x17B4B8u;
    // 0x17b4b8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x17b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x17b4bc: 0xae030418  sw          $v1, 0x418($s0)
    ctx->pc = 0x17b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 3));
    // 0x17b4c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x17b4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x17b4c4: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x17b4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x17b4c8: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x17b4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b4d0: 0x0  nop
    ctx->pc = 0x17b4d0u;
    // NOP
    // 0x17b4d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17b4d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17B4D8u;
    {
        const bool branch_taken_0x17b4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4D8u;
        // 0x17b4dc: 0xe60002a4  swc1        $f0, 0x2A4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4d8) {
            ctx->pc = 0x17B52Cu;
            return;
        }
    }
    ctx->pc = 0x17B4E0u;
}
