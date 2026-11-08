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

// Function: entry_001a1638
// Address: 0x1a1638 - 0x1a1654
void entry_001a1638_0x1a1638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1638_0x1a1638");
#endif

    ctx->pc = 0x1a1638u;

    // 0x1a1638: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1a1638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1a163c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a163cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a1640: 0xac430bbc  sw          $v1, 0xBBC($v0)
    ctx->pc = 0x1a1640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3004), GPR_U32(ctx, 3));
    // 0x1a1644: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a1644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a1648: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x1a1648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1a164c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A164Cu;
    {
        const bool branch_taken_0x1a164c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A164Cu;
        // 0x1a1650: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a164c) {
            ctx->pc = 0x1A1604u;
            return;
        }
    }
    ctx->pc = 0x1A1654u;
}
