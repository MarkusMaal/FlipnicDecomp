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

// Function: entry_0018bfc0
// Address: 0x18bfc0 - 0x18bff8
void entry_0018bfc0_0x18bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bfc0_0x18bfc0");
#endif

    ctx->pc = 0x18bfc0u;

    // 0x18bfc0: 0xc62104e8  lwc1        $f1, 0x4E8($s1)
    ctx->pc = 0x18bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bfc4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18bfc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18bfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bfd0: 0x0  nop
    ctx->pc = 0x18bfd0u;
    // NOP
    // 0x18bfd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18bfd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bfd8: 0x0  nop
    ctx->pc = 0x18bfd8u;
    // NOP
    // 0x18bfdc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18BFDCu;
    {
        const bool branch_taken_0x18bfdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BFDCu;
        // 0x18bfe0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfdc) {
            ctx->pc = 0x18BFF8u;
            return;
        }
    }
    ctx->pc = 0x18BFE4u;
    // 0x18bfe4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18bfe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bfe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bfec: 0x0  nop
    ctx->pc = 0x18bfecu;
    // NOP
    // 0x18bff0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18bff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18bff4: 0xe62004e8  swc1        $f0, 0x4E8($s1)
    ctx->pc = 0x18bff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1256), bits); }
    ctx->pc = 0x18bff8u;
}
