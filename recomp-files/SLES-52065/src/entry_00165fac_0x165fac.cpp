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

// Function: entry_00165fac
// Address: 0x165fac - 0x165fbc
void entry_00165fac_0x165fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165fac_0x165fac");
#endif

    ctx->pc = 0x165facu;

    // 0x165fac: 0xa6030226  sh          $v1, 0x226($s0)
    ctx->pc = 0x165facu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 3));
    // 0x165fb0: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165fb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165FB4u;
    {
        const bool branch_taken_0x165fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FB4u;
        // 0x165fb8: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fb4) {
            ctx->pc = 0x165FD8u;
            return;
        }
    }
    ctx->pc = 0x165FBCu;
}
