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

// Function: entry_0018a364
// Address: 0x18a364 - 0x18a374
void entry_0018a364_0x18a364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a364_0x18a364");
#endif

    ctx->pc = 0x18a364u;

    // 0x18a364: 0x0  nop
    ctx->pc = 0x18a364u;
    // NOP
    // 0x18a368: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18a36c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18A36Cu;
    {
        const bool branch_taken_0x18a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A36Cu;
        // 0x18a370: 0x24e70011  addiu       $a3, $a3, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a36c) {
            ctx->pc = 0x18A37Cu;
            return;
        }
    }
    ctx->pc = 0x18A374u;
}
