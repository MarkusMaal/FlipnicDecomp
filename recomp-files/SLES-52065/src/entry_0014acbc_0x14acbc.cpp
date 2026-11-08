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

// Function: entry_0014acbc
// Address: 0x14acbc - 0x14acc4
void entry_0014acbc_0x14acbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014acbc_0x14acbc");
#endif

    ctx->pc = 0x14acbcu;

    // 0x14acbc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x14ACBCu;
    {
        const bool branch_taken_0x14acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACBCu;
        // 0x14acc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14acbc) {
            ctx->pc = 0x14AD88u;
            return;
        }
    }
    ctx->pc = 0x14ACC4u;
}
