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

// Function: entry_00198718
// Address: 0x198718 - 0x198720
void entry_00198718_0x198718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198718_0x198718");
#endif

    ctx->pc = 0x198718u;

    // 0x198718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x198718u;
    {
        const bool branch_taken_0x198718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198718u;
        // 0x19871c: 0xaeb00340  sw          $s0, 0x340($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 832), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198718) {
            ctx->pc = 0x198730u;
            return;
        }
    }
    ctx->pc = 0x198720u;
}
