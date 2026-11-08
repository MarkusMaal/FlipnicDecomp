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

// Function: entry_0017fe84
// Address: 0x17fe84 - 0x17fe90
void entry_0017fe84_0x17fe84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fe84_0x17fe84");
#endif

    ctx->pc = 0x17fe84u;

    // 0x17fe84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FE84u;
    {
        const bool branch_taken_0x17fe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe84) {
            ctx->pc = 0x17FE90u;
            return;
        }
    }
    ctx->pc = 0x17FE8Cu;
    // 0x17fe8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x17fe90u;
}
