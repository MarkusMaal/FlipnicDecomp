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

// Function: entry_00192dac
// Address: 0x192dac - 0x192db4
void entry_00192dac_0x192dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192dac_0x192dac");
#endif

    ctx->pc = 0x192dacu;

    // 0x192dac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x192DACu;
    {
        const bool branch_taken_0x192dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192dac) {
            ctx->pc = 0x192DC8u;
            return;
        }
    }
    ctx->pc = 0x192DB4u;
}
