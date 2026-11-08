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

// Function: entry_001d74f0
// Address: 0x1d74f0 - 0x1d7500
void entry_001d74f0_0x1d74f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d74f0_0x1d74f0");
#endif

    ctx->pc = 0x1d74f0u;

    // 0x1d74f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D74F0u;
    {
        const bool branch_taken_0x1d74f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74F0u;
        // 0x1d74f4: 0x96c50006  lhu         $a1, 0x6($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74f0) {
            ctx->pc = 0x1D7500u;
            return;
        }
    }
    ctx->pc = 0x1D74F8u;
    // 0x1d74f8: 0x30a280ff  andi        $v0, $a1, 0x80FF
    ctx->pc = 0x1d74f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)33023);
    // 0x1d74fc: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1d74fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->pc = 0x1d7500u;
}
