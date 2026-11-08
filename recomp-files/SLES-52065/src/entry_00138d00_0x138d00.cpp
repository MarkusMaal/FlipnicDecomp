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

// Function: entry_00138d00
// Address: 0x138d00 - 0x138d14
void entry_00138d00_0x138d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138d00_0x138d00");
#endif

    ctx->pc = 0x138d00u;

    // 0x138d00: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x138d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x138d04: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x138d04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x138d08: 0x1020024e  beqz        $at, . + 4 + (0x24E << 2)
    ctx->pc = 0x138D08u;
    {
        const bool branch_taken_0x138d08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D08u;
        // 0x138d0c: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d08) {
            ctx->pc = 0x139644u;
            return;
        }
    }
    ctx->pc = 0x138D10u;
    // 0x138d10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x138d10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x138d14u;
}
