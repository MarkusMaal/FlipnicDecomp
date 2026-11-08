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

// Function: entry_001a8dd8
// Address: 0x1a8dd8 - 0x1a8dfc
void entry_001a8dd8_0x1a8dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8dd8_0x1a8dd8");
#endif

    ctx->pc = 0x1a8dd8u;

    // 0x1a8dd8: 0x29e9021  addu        $s2, $s4, $fp
    ctx->pc = 0x1a8dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x1a8ddc: 0x8e4206d0  lw          $v0, 0x6D0($s2)
    ctx->pc = 0x1a8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1744)));
    // 0x1a8de0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1a8de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8de4: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x1A8DE4u;
    {
        const bool branch_taken_0x1a8de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8de4) {
            ctx->pc = 0x1A8BCCu;
            return;
        }
    }
    ctx->pc = 0x1A8DECu;
    // 0x1a8dec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1a8decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a8df0: 0x27de0068  addiu       $fp, $fp, 0x68
    ctx->pc = 0x1a8df0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 104));
    // 0x1a8df4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8df8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1a8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->pc = 0x1a8dfcu;
}
