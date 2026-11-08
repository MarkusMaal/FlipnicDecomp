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

// Function: entry_001fad60
// Address: 0x1fad60 - 0x1fad70
void entry_001fad60_0x1fad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fad60_0x1fad60");
#endif

    ctx->pc = 0x1fad60u;

    // 0x1fad60: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1fad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1fad64: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1FAD64u;
    {
        const bool branch_taken_0x1fad64 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD64u;
        // 0x1fad68: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad64) {
            ctx->pc = 0x1FACE0u;
            return;
        }
    }
    ctx->pc = 0x1FAD6Cu;
    // 0x1fad6c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1fad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    ctx->pc = 0x1fad70u;
}
