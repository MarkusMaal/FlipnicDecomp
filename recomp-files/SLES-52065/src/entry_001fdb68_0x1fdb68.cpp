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

// Function: entry_001fdb68
// Address: 0x1fdb68 - 0x1fdb88
void entry_001fdb68_0x1fdb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdb68_0x1fdb68");
#endif

    ctx->pc = 0x1fdb68u;

label_1fdb68:
    // 0x1fdb68: 0x50e80007  beql        $a3, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDB68u;
    {
        const bool branch_taken_0x1fdb68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x1fdb68) {
            ctx->pc = 0x1FDB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB68u;
            // 0x1fdb6c: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB88u;
            return;
        }
    }
    ctx->pc = 0x1FDB70u;
    // 0x1fdb70: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1fdb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1fdb74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fdb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fdb78: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1fdb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fdb7c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FDB7Cu;
    {
        const bool branch_taken_0x1fdb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb7c) {
            ctx->pc = 0x1FDB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDB7Cu;
            // 0x1fdb80: 0x8ce70008  lw          $a3, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdb68;
        }
    }
    ctx->pc = 0x1FDB84u;
    // 0x1fdb84: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1fdb84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    ctx->pc = 0x1fdb88u;
}
