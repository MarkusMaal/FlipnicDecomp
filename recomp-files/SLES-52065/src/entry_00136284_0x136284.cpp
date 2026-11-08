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

// Function: entry_00136284
// Address: 0x136284 - 0x1362ac
void entry_00136284_0x136284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136284_0x136284");
#endif

    ctx->pc = 0x136284u;

    // 0x136284: 0x0  nop
    ctx->pc = 0x136284u;
    // NOP
    // 0x136288: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x136288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13628c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x13628cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x136290: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x136290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x136294: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x136294u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x136298: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x136298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13629c: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x13629Cu;
    {
        const bool branch_taken_0x13629c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1362A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13629Cu;
        // 0x1362a0: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13629c) {
            ctx->pc = 0x136274u;
            return;
        }
    }
    ctx->pc = 0x1362A4u;
    // 0x1362a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1362A4u;
    {
        const bool branch_taken_0x1362a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1362a4) {
            ctx->pc = 0x136340u;
            return;
        }
    }
    ctx->pc = 0x1362ACu;
}
