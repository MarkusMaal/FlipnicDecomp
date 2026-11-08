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

// Function: entry_0019e528
// Address: 0x19e528 - 0x19e530
void entry_0019e528_0x19e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e528_0x19e528");
#endif

    ctx->pc = 0x19e528u;

    // 0x19e528: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19E528u;
    {
        const bool branch_taken_0x19e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E528u;
        // 0x19e52c: 0xae320670  sw          $s2, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e528) {
            ctx->pc = 0x19E540u;
            return;
        }
    }
    ctx->pc = 0x19E530u;
}
