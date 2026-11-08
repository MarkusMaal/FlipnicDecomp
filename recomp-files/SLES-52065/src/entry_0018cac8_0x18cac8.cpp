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

// Function: entry_0018cac8
// Address: 0x18cac8 - 0x18cb00
void entry_0018cac8_0x18cac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cac8_0x18cac8");
#endif

    ctx->pc = 0x18cac8u;

    // 0x18cac8: 0xc6010508  lwc1        $f1, 0x508($s0)
    ctx->pc = 0x18cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18cacc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18caccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x18cad0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18cad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18cad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cad8: 0x0  nop
    ctx->pc = 0x18cad8u;
    // NOP
    // 0x18cadc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18cadcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18cae0: 0x0  nop
    ctx->pc = 0x18cae0u;
    // NOP
    // 0x18cae4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x18CAE4u;
    {
        const bool branch_taken_0x18cae4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAE4u;
        // 0x18cae8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cae4) {
            ctx->pc = 0x18CB00u;
            return;
        }
    }
    ctx->pc = 0x18CAECu;
    // 0x18caec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18caecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18caf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18caf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18caf4: 0x0  nop
    ctx->pc = 0x18caf4u;
    // NOP
    // 0x18caf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18caf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18cafc: 0xe6000508  swc1        $f0, 0x508($s0)
    ctx->pc = 0x18cafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1288), bits); }
    ctx->pc = 0x18cb00u;
}
