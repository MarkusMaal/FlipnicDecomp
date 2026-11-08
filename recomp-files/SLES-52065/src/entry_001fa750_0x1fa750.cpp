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

// Function: entry_001fa750
// Address: 0x1fa750 - 0x1fa778
void entry_001fa750_0x1fa750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa750_0x1fa750");
#endif

    ctx->pc = 0x1fa750u;

    // 0x1fa750: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fa750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fa754: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA754u;
    {
        const bool branch_taken_0x1fa754 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA754u;
        // 0x1fa758: 0x1221821  addu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa754) {
            ctx->pc = 0x1FA778u;
            return;
        }
    }
    ctx->pc = 0x1FA75Cu;
    // 0x1fa75c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x1fa75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1fa760: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1fa760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fa764: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fa764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fa768: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fa768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa76c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa76cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa770: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA770u;
    {
        const bool branch_taken_0x1fa770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA770u;
        // 0x1fa774: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa770) {
            ctx->pc = 0x1FA77Cu;
            return;
        }
    }
    ctx->pc = 0x1FA778u;
}
