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

// Function: entry_002005fc
// Address: 0x2005fc - 0x200618
void entry_002005fc_0x2005fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002005fc_0x2005fc");
#endif

    ctx->pc = 0x2005fcu;

    // 0x2005fc: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x2005fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x200600: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x200600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x200604: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x200604u;
    {
        const bool branch_taken_0x200604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200604u;
        // 0x200608: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200604) {
            ctx->pc = 0x200618u;
            return;
        }
    }
    ctx->pc = 0x20060Cu;
    // 0x20060c: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x20060cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x200610: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x200610u;
    {
        const bool branch_taken_0x200610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200610u;
        // 0x200614: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200610) {
            ctx->pc = 0x200660u;
            return;
        }
    }
    ctx->pc = 0x200618u;
}
