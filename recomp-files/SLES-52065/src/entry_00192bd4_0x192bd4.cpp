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

// Function: entry_00192bd4
// Address: 0x192bd4 - 0x192bf4
void entry_00192bd4_0x192bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192bd4_0x192bd4");
#endif

    ctx->pc = 0x192bd4u;

    // 0x192bd4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x192bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x192bd8: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x192bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192bdc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x192bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x192be0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x192be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x192be4: 0x80831484  lb          $v1, 0x1484($a0)
    ctx->pc = 0x192be4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5252)));
    // 0x192be8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x192be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x192bec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x192BECu;
    {
        const bool branch_taken_0x192bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BECu;
        // 0x192bf0: 0xa0831484  sb          $v1, 0x1484($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5252), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192bec) {
            ctx->pc = 0x192C0Cu;
            return;
        }
    }
    ctx->pc = 0x192BF4u;
}
