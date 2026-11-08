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

// Function: entry_0010bbac
// Address: 0x10bbac - 0x10bbb4
void entry_0010bbac_0x10bbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bbac_0x10bbac");
#endif

    ctx->pc = 0x10bbacu;

    // 0x10bbac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10BBACu;
    {
        const bool branch_taken_0x10bbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bbac) {
            ctx->pc = 0x10BBDCu;
            return;
        }
    }
    ctx->pc = 0x10BBB4u;
}
