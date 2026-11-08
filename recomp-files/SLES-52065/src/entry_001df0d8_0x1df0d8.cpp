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

// Function: entry_001df0d8
// Address: 0x1df0d8 - 0x1df0f8
void entry_001df0d8_0x1df0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df0d8_0x1df0d8");
#endif

    ctx->pc = 0x1df0d8u;

    // 0x1df0d8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1df0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1df0dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df0e0: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x1df0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x1df0e4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1df0e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df0ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF0ECu;
    {
        const bool branch_taken_0x1df0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0ECu;
        // 0x1df0f0: 0xaca90004  sw          $t1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0ec) {
            ctx->pc = 0x1DF13Cu;
            return;
        }
    }
    ctx->pc = 0x1DF0F4u;
    // 0x1df0f4: 0x0  nop
    ctx->pc = 0x1df0f4u;
    // NOP
    ctx->pc = 0x1df0f8u;
}
