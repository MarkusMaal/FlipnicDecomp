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

// Function: entry_00173bcc
// Address: 0x173bcc - 0x173be4
void entry_00173bcc_0x173bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173bcc_0x173bcc");
#endif

    ctx->pc = 0x173bccu;

    // 0x173bcc: 0x0  nop
    ctx->pc = 0x173bccu;
    // NOP
    // 0x173bd0: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x173bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x173bd4: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x173BD4u;
    {
        const bool branch_taken_0x173bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BD4u;
        // 0x173bd8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bd4) {
            ctx->pc = 0x173B18u;
            return;
        }
    }
    ctx->pc = 0x173BDCu;
    // 0x173bdc: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x173BDCu;
    {
        const bool branch_taken_0x173bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173bdc) {
            ctx->pc = 0x173E6Cu;
            return;
        }
    }
    ctx->pc = 0x173BE4u;
}
