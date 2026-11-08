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

// Function: entry_001677d0
// Address: 0x1677d0 - 0x1677dc
void entry_001677d0_0x1677d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001677d0_0x1677d0");
#endif

    ctx->pc = 0x1677d0u;

    // 0x1677d0: 0x18800002  blez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1677D0u;
    {
        const bool branch_taken_0x1677d0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1677D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677D0u;
        // 0x1677d4: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677d0) {
            ctx->pc = 0x1677DCu;
            return;
        }
    }
    ctx->pc = 0x1677D8u;
    // 0x1677d8: 0xa6030228  sh          $v1, 0x228($s0)
    ctx->pc = 0x1677d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1677dcu;
}
