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

// Function: entry_001ba204
// Address: 0x1ba204 - 0x1ba220
void entry_001ba204_0x1ba204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba204_0x1ba204");
#endif

    ctx->pc = 0x1ba204u;

    // 0x1ba204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba208: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x1ba208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1ba20c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1ba20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ba210: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA210u;
    {
        const bool branch_taken_0x1ba210 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA210u;
        // 0x1ba214: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba210) {
            ctx->pc = 0x1BA220u;
            return;
        }
    }
    ctx->pc = 0x1BA218u;
    // 0x1ba218: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1ba218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba21c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ba21cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1ba220u;
}
