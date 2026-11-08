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

// Function: entry_00191984
// Address: 0x191984 - 0x191990
void entry_00191984_0x191984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191984_0x191984");
#endif

    ctx->pc = 0x191984u;

    // 0x191984: 0x0  nop
    ctx->pc = 0x191984u;
    // NOP
    // 0x191988: 0x10000266  b           . + 4 + (0x266 << 2)
    ctx->pc = 0x191988u;
    {
        const bool branch_taken_0x191988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191988u;
        // 0x19198c: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191988) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191990u;
}
