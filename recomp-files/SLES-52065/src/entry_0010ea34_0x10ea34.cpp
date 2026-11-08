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

// Function: entry_0010ea34
// Address: 0x10ea34 - 0x10ea40
void entry_0010ea34_0x10ea34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea34_0x10ea34");
#endif

    ctx->pc = 0x10ea34u;

    // 0x10ea34: 0x0  nop
    ctx->pc = 0x10ea34u;
    // NOP
    // 0x10ea38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10EA38u;
    {
        const bool branch_taken_0x10ea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA38u;
        // 0x10ea3c: 0x23880  sll         $a3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea38) {
            ctx->pc = 0x10EA7Cu;
            return;
        }
    }
    ctx->pc = 0x10EA40u;
}
