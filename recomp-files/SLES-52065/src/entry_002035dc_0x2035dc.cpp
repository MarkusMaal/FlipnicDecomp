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

// Function: entry_002035dc
// Address: 0x2035dc - 0x2035f0
void entry_002035dc_0x2035dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002035dc_0x2035dc");
#endif

    ctx->pc = 0x2035dcu;

    // 0x2035dc: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x2035DCu;
    {
        const bool branch_taken_0x2035dc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035DCu;
        // 0x2035e0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035dc) {
            ctx->pc = 0x2035F0u;
            return;
        }
    }
    ctx->pc = 0x2035E4u;
    // 0x2035e4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2035e8: 0x74100a  movz        $v0, $v1, $s4
    ctx->pc = 0x2035e8u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2035ec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2035ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x2035f0u;
}
