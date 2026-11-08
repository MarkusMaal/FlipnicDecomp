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

// Function: entry_001fd1fc
// Address: 0x1fd1fc - 0x1fd204
void entry_001fd1fc_0x1fd1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd1fc_0x1fd1fc");
#endif

    ctx->pc = 0x1fd1fcu;

    // 0x1fd1fc: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1FD1FCu;
    {
        const bool branch_taken_0x1fd1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1FCu;
        // 0x1fd200: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1fc) {
            ctx->pc = 0x1FD33Cu;
            return;
        }
    }
    ctx->pc = 0x1FD204u;
}
