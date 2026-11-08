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

// Function: entry_0016ef70
// Address: 0x16ef70 - 0x16efc0
void entry_0016ef70_0x16ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ef70_0x16ef70");
#endif

    ctx->pc = 0x16ef70u;

    // 0x16ef70: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x16ef70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x16ef74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ef74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ef78: 0x0  nop
    ctx->pc = 0x16ef78u;
    // NOP
    // 0x16ef7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16ef7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ef80: 0x0  nop
    ctx->pc = 0x16ef80u;
    // NOP
    // 0x16ef84: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x16EF84u;
    {
        const bool branch_taken_0x16ef84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ef84) {
            ctx->pc = 0x16EFF4u;
            return;
        }
    }
    ctx->pc = 0x16EF8Cu;
    // 0x16ef8c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x16ef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ef90: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x16ef90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ef94: 0x0  nop
    ctx->pc = 0x16ef94u;
    // NOP
    // 0x16ef98: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x16EF98u;
    {
        const bool branch_taken_0x16ef98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF98u;
        // 0x16ef9c: 0x3c033ca3  lui         $v1, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef98) {
            ctx->pc = 0x16EFC0u;
            return;
        }
    }
    ctx->pc = 0x16EFA0u;
    // 0x16efa0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x16efa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x16efa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16efa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16efa8: 0x0  nop
    ctx->pc = 0x16efa8u;
    // NOP
    // 0x16efac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16efacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16efb0: 0x0  nop
    ctx->pc = 0x16efb0u;
    // NOP
    // 0x16efb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16EFB4u;
    {
        const bool branch_taken_0x16efb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16efb4) {
            ctx->pc = 0x16EFC0u;
            return;
        }
    }
    ctx->pc = 0x16EFBCu;
    // 0x16efbc: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x16efbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    ctx->pc = 0x16efc0u;
}
