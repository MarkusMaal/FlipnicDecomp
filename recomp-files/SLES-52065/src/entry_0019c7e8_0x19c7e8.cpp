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

// Function: entry_0019c7e8
// Address: 0x19c7e8 - 0x19c7fc
void entry_0019c7e8_0x19c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c7e8_0x19c7e8");
#endif

    ctx->pc = 0x19c7e8u;

    // 0x19c7e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C7E8u;
    {
        const bool branch_taken_0x19c7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7E8u;
        // 0x19c7ec: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7e8) {
            ctx->pc = 0x19C7FCu;
            return;
        }
    }
    ctx->pc = 0x19C7F0u;
    // 0x19c7f0: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x19c7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x19c7f4: 0x90250e5f  lbu         $a1, 0xE5F($at)
    ctx->pc = 0x19c7f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x210E5Fu));
    // 0x19c7f8: 0x0  nop
    ctx->pc = 0x19c7f8u;
    // NOP
    ctx->pc = 0x19c7fcu;
}
