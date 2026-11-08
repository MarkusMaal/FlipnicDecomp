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

// Function: entry_001fc680
// Address: 0x1fc680 - 0x1fc6a8
void entry_001fc680_0x1fc680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc680_0x1fc680");
#endif

    ctx->pc = 0x1fc680u;

label_1fc680:
    // 0x1fc680: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x1fc680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1fc684: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1fc684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1fc688: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1fc688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1fc68c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fc690: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1fc690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fc694: 0xafc30044  sw          $v1, 0x44($fp)
    ctx->pc = 0x1fc694u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x1fc698: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FC698u;
    {
        const bool branch_taken_0x1fc698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc698) {
            ctx->pc = 0x1FC680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc680;
        }
    }
    ctx->pc = 0x1FC6A0u;
    // 0x1fc6a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC6A0u;
    {
        const bool branch_taken_0x1fc6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6A0u;
        // 0x1fc6a4: 0x8fc50044  lw          $a1, 0x44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6a0) {
            ctx->pc = 0x1FC6B4u;
            return;
        }
    }
    ctx->pc = 0x1FC6A8u;
}
