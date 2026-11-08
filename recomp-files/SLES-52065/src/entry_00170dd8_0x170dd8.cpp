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

// Function: entry_00170dd8
// Address: 0x170dd8 - 0x170e20
void entry_00170dd8_0x170dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170dd8_0x170dd8");
#endif

    ctx->pc = 0x170dd8u;

    // 0x170dd8: 0xc6010258  lwc1        $f1, 0x258($s0)
    ctx->pc = 0x170dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170ddc: 0x3c023eaa  lui         $v0, 0x3EAA
    ctx->pc = 0x170ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16042 << 16));
    // 0x170de0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x170de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x170de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170de8: 0x0  nop
    ctx->pc = 0x170de8u;
    // NOP
    // 0x170dec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170df0: 0x0  nop
    ctx->pc = 0x170df0u;
    // NOP
    // 0x170df4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x170DF4u;
    {
        const bool branch_taken_0x170df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DF4u;
        // 0x170df8: 0x3102a  slt         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170df4) {
            ctx->pc = 0x170E20u;
            return;
        }
    }
    ctx->pc = 0x170DFCu;
    // 0x170dfc: 0xa2020260  sb          $v0, 0x260($s0)
    ctx->pc = 0x170dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 2));
    // 0x170e00: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x170e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x170e04: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x170e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170e08: 0xa2020261  sb          $v0, 0x261($s0)
    ctx->pc = 0x170e08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 2));
    // 0x170e0c: 0xc6010254  lwc1        $f1, 0x254($s0)
    ctx->pc = 0x170e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170e10: 0xc6000258  lwc1        $f0, 0x258($s0)
    ctx->pc = 0x170e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170e14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x170e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x170e18: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x170E18u;
    {
        const bool branch_taken_0x170e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E18u;
        // 0x170e1c: 0xe6000258  swc1        $f0, 0x258($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e18) {
            ctx->pc = 0x170F98u;
            return;
        }
    }
    ctx->pc = 0x170E20u;
}
