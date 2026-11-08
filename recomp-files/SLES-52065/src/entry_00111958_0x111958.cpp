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

// Function: entry_00111958
// Address: 0x111958 - 0x111974
void entry_00111958_0x111958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111958_0x111958");
#endif

    ctx->pc = 0x111958u;

    // 0x111958: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x111958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11195c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11195Cu;
    {
        const bool branch_taken_0x11195c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11195c) {
            ctx->pc = 0x111914u;
            return;
        }
    }
    ctx->pc = 0x111964u;
    // 0x111964: 0x14e6001b  bne         $a3, $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x111964u;
    {
        const bool branch_taken_0x111964 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x111964) {
            ctx->pc = 0x1119D4u;
            return;
        }
    }
    ctx->pc = 0x11196Cu;
    // 0x11196c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11196Cu;
    {
        const bool branch_taken_0x11196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11196Cu;
        // 0x111970: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11196c) {
            ctx->pc = 0x1119D4u;
            return;
        }
    }
    ctx->pc = 0x111974u;
}
