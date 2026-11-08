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

// Function: entry_00191f3c
// Address: 0x191f3c - 0x191f70
void entry_00191f3c_0x191f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191f3c_0x191f3c");
#endif

    ctx->pc = 0x191f3cu;

    // 0x191f3c: 0x0  nop
    ctx->pc = 0x191f3cu;
    // NOP
    // 0x191f40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191f44: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x191f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191f48: 0x848201ec  lh          $v0, 0x1EC($a0)
    ctx->pc = 0x191f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x191f4c: 0x8c630450  lw          $v1, 0x450($v1)
    ctx->pc = 0x191f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1104)));
    // 0x191f50: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x191F50u;
    {
        const bool branch_taken_0x191f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x191f50) {
            ctx->pc = 0x191F88u;
            return;
        }
    }
    ctx->pc = 0x191F58u;
    // 0x191f58: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x191f58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x191f5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191f60: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191F60u;
    {
        const bool branch_taken_0x191f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x191F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F60u;
        // 0x191f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f60) {
            ctx->pc = 0x191F70u;
            return;
        }
    }
    ctx->pc = 0x191F68u;
    // 0x191f68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191F68u;
    {
        const bool branch_taken_0x191f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f68) {
            ctx->pc = 0x191F74u;
            return;
        }
    }
    ctx->pc = 0x191F70u;
}
