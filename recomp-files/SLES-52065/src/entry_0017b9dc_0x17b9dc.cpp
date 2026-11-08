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

// Function: entry_0017b9dc
// Address: 0x17b9dc - 0x17b9e4
void entry_0017b9dc_0x17b9dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9dc_0x17b9dc");
#endif

    ctx->pc = 0x17b9dcu;

    // 0x17b9dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17B9DCu;
    {
        const bool branch_taken_0x17b9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9DCu;
        // 0x17b9e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9dc) {
            ctx->pc = 0x17B9ECu;
            return;
        }
    }
    ctx->pc = 0x17B9E4u;
}
