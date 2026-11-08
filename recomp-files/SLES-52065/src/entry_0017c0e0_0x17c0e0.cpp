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

// Function: entry_0017c0e0
// Address: 0x17c0e0 - 0x17c0fc
void entry_0017c0e0_0x17c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c0e0_0x17c0e0");
#endif

    ctx->pc = 0x17c0e0u;

    // 0x17c0e0: 0x8482021a  lh          $v0, 0x21A($a0)
    ctx->pc = 0x17c0e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 538)));
    // 0x17c0e4: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C0E4u;
    {
        const bool branch_taken_0x17c0e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x17C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0E4u;
        // 0x17c0e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0e4) {
            ctx->pc = 0x17C0FCu;
            return;
        }
    }
    ctx->pc = 0x17C0ECu;
    // 0x17c0ec: 0x84820216  lh          $v0, 0x216($a0)
    ctx->pc = 0x17c0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 534)));
    // 0x17c0f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C0F0u;
    {
        const bool branch_taken_0x17c0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0F0u;
        // 0x17c0f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0f0) {
            ctx->pc = 0x17C0FCu;
            return;
        }
    }
    ctx->pc = 0x17C0F8u;
    // 0x17c0f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x17c0fcu;
}
