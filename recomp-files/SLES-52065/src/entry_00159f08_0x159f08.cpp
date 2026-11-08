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

// Function: entry_00159f08
// Address: 0x159f08 - 0x159f24
void entry_00159f08_0x159f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159f08_0x159f08");
#endif

    ctx->pc = 0x159f08u;

    // 0x159f08: 0x8606022c  lh          $a2, 0x22C($s0)
    ctx->pc = 0x159f08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x159f0c: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x159F0Cu;
    {
        const bool branch_taken_0x159f0c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x159f0c) {
            ctx->pc = 0x159F24u;
            return;
        }
    }
    ctx->pc = 0x159F14u;
    // 0x159f14: 0x86030238  lh          $v1, 0x238($s0)
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x159f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x159F1Cu;
    {
        const bool branch_taken_0x159f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F1Cu;
        // 0x159f20: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f1c) {
            ctx->pc = 0x159F34u;
            return;
        }
    }
    ctx->pc = 0x159F24u;
}
