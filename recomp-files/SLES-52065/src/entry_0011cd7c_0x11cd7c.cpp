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

// Function: entry_0011cd7c
// Address: 0x11cd7c - 0x11cd98
void entry_0011cd7c_0x11cd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cd7c_0x11cd7c");
#endif

    ctx->pc = 0x11cd7cu;

    // 0x11cd7c: 0x0  nop
    ctx->pc = 0x11cd7cu;
    // NOP
    // 0x11cd80: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x11cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x11cd84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CD84u;
    {
        const bool branch_taken_0x11cd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cd84) {
            ctx->pc = 0x11CD98u;
            return;
        }
    }
    ctx->pc = 0x11CD8Cu;
    // 0x11cd8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cd90: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x11CD90u;
    {
        const bool branch_taken_0x11cd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD90u;
        // 0x11cd94: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd90) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CD98u;
}
