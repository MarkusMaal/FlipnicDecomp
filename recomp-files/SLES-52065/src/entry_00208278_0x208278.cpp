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

// Function: entry_00208278
// Address: 0x208278 - 0x208290
void entry_00208278_0x208278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208278_0x208278");
#endif

    ctx->pc = 0x208278u;

    // 0x208278: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x208278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20827c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20827cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x208280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208280u;
    {
        const bool branch_taken_0x208280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208280u;
        // 0x208284: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208280) {
            ctx->pc = 0x208290u;
            return;
        }
    }
    ctx->pc = 0x208288u;
    // 0x208288: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x208288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x20828c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x20828cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    ctx->pc = 0x208290u;
}
