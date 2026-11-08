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

// Function: entry_0011423c
// Address: 0x11423c - 0x114258
void entry_0011423c_0x11423c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011423c_0x11423c");
#endif

    ctx->pc = 0x11423cu;

    // 0x11423c: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x11423cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x114240: 0x8cc2023c  lw          $v0, 0x23C($a2)
    ctx->pc = 0x114240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 572)));
    // 0x114244: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x114244u;
    {
        const bool branch_taken_0x114244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x114244) {
            ctx->pc = 0x114258u;
            return;
        }
    }
    ctx->pc = 0x11424Cu;
    // 0x11424c: 0x8cc20240  lw          $v0, 0x240($a2)
    ctx->pc = 0x11424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 576)));
    // 0x114250: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114250u;
    {
        const bool branch_taken_0x114250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x114250) {
            ctx->pc = 0x114260u;
            return;
        }
    }
    ctx->pc = 0x114258u;
}
