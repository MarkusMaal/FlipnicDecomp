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

// Function: entry_00192b68
// Address: 0x192b68 - 0x192b7c
void entry_00192b68_0x192b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192b68_0x192b68");
#endif

    ctx->pc = 0x192b68u;

    // 0x192b68: 0x80a416a4  lb          $a0, 0x16A4($a1)
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5796)));
    // 0x192b6c: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x192b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192b70: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x192b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x192b74: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x192B74u;
    {
        const bool branch_taken_0x192b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B74u;
        // 0x192b78: 0xa0a316a4  sb          $v1, 0x16A4($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5796), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b74) {
            ctx->pc = 0x192C0Cu;
            return;
        }
    }
    ctx->pc = 0x192B7Cu;
}
