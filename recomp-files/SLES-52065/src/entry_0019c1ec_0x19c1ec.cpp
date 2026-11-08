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

// Function: entry_0019c1ec
// Address: 0x19c1ec - 0x19c1f4
void entry_0019c1ec_0x19c1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c1ec_0x19c1ec");
#endif

    ctx->pc = 0x19c1ecu;

    // 0x19c1ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19C1ECu;
    {
        const bool branch_taken_0x19c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C1ECu;
        // 0x19c1f0: 0xdc852818  ld          $a1, 0x2818($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 10264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1ec) {
            ctx->pc = 0x19C1FCu;
            return;
        }
    }
    ctx->pc = 0x19C1F4u;
}
