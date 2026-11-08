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

// Function: entry_00165fbc
// Address: 0x165fbc - 0x165fcc
void entry_00165fbc_0x165fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165fbc_0x165fbc");
#endif

    ctx->pc = 0x165fbcu;

    // 0x165fbc: 0xa6000226  sh          $zero, 0x226($s0)
    ctx->pc = 0x165fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x165fc0: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165fc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165FC4u;
    {
        const bool branch_taken_0x165fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FC4u;
        // 0x165fc8: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fc4) {
            ctx->pc = 0x165FD8u;
            return;
        }
    }
    ctx->pc = 0x165FCCu;
}
