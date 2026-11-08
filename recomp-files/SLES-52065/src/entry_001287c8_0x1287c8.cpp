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

// Function: entry_001287c8
// Address: 0x1287c8 - 0x1287f4
void entry_001287c8_0x1287c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001287c8_0x1287c8");
#endif

    ctx->pc = 0x1287c8u;

    // 0x1287c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1287c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1287cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1287ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1287d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1287D0u;
    {
        const bool branch_taken_0x1287d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287d0) {
            ctx->pc = 0x1287F4u;
            return;
        }
    }
    ctx->pc = 0x1287D8u;
    // 0x1287d8: 0xc68000a4  lwc1        $f0, 0xA4($s4)
    ctx->pc = 0x1287d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287dc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1287dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1287e0: 0x0  nop
    ctx->pc = 0x1287e0u;
    // NOP
    // 0x1287e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1287E4u;
    {
        const bool branch_taken_0x1287e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1287e4) {
            ctx->pc = 0x1287F8u;
            return;
        }
    }
    ctx->pc = 0x1287ECu;
    // 0x1287ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1287ECu;
    {
        const bool branch_taken_0x1287ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287ECu;
        // 0x1287f0: 0xe68300a4  swc1        $f3, 0xA4($s4) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287ec) {
            ctx->pc = 0x1287F8u;
            return;
        }
    }
    ctx->pc = 0x1287F4u;
}
