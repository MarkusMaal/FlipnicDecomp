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

// Function: entry_00112d64
// Address: 0x112d64 - 0x112d80
void entry_00112d64_0x112d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112d64_0x112d64");
#endif

    ctx->pc = 0x112d64u;

    // 0x112d64: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x112d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x112d68: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x112d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x112d6c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x112D6Cu;
    {
        const bool branch_taken_0x112d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x112d6c) {
            ctx->pc = 0x112D80u;
            return;
        }
    }
    ctx->pc = 0x112D74u;
    // 0x112d74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x112d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x112d78: 0x10000221  b           . + 4 + (0x221 << 2)
    ctx->pc = 0x112D78u;
    {
        const bool branch_taken_0x112d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D78u;
        // 0x112d7c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d78) {
            ctx->pc = 0x113600u;
            return;
        }
    }
    ctx->pc = 0x112D80u;
}
