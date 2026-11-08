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

// Function: entry_00169bb4
// Address: 0x169bb4 - 0x169bc0
void entry_00169bb4_0x169bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169bb4_0x169bb4");
#endif

    ctx->pc = 0x169bb4u;

    // 0x169bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169bb8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x169BB8u;
    {
        const bool branch_taken_0x169bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BB8u;
        // 0x169bbc: 0xa2030222  sb          $v1, 0x222($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bb8) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
    ctx->pc = 0x169BC0u;
}
