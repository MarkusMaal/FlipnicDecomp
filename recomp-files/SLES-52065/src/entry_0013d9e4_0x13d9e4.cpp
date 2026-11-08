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

// Function: entry_0013d9e4
// Address: 0x13d9e4 - 0x13d9ec
void entry_0013d9e4_0x13d9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d9e4_0x13d9e4");
#endif

    ctx->pc = 0x13d9e4u;

    // 0x13d9e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13D9E4u;
    {
        const bool branch_taken_0x13d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9E4u;
        // 0x13d9e8: 0xac800180  sw          $zero, 0x180($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d9e4) {
            ctx->pc = 0x13DA18u;
            return;
        }
    }
    ctx->pc = 0x13D9ECu;
}
