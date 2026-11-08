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

// Function: entry_0017c110
// Address: 0x17c110 - 0x17c134
void entry_0017c110_0x17c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c110_0x17c110");
#endif

    ctx->pc = 0x17c110u;

    // 0x17c110: 0x84830218  lh          $v1, 0x218($a0)
    ctx->pc = 0x17c110u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x17c114: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C114u;
    {
        const bool branch_taken_0x17c114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c114) {
            ctx->pc = 0x17C138u;
            return;
        }
    }
    ctx->pc = 0x17C11Cu;
    // 0x17c11c: 0x84830216  lh          $v1, 0x216($a0)
    ctx->pc = 0x17c11cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 534)));
    // 0x17c120: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C120u;
    {
        const bool branch_taken_0x17c120 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17c120) {
            ctx->pc = 0x17C134u;
            return;
        }
    }
    ctx->pc = 0x17C128u;
    // 0x17c128: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17c12c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17C12Cu;
    {
        const bool branch_taken_0x17c12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C12Cu;
        // 0x17c130: 0xa4830216  sh          $v1, 0x216($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 534), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c12c) {
            ctx->pc = 0x17C138u;
            return;
        }
    }
    ctx->pc = 0x17C134u;
}
