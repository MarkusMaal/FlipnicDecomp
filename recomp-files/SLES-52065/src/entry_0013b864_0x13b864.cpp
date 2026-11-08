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

// Function: entry_0013b864
// Address: 0x13b864 - 0x13b880
void entry_0013b864_0x13b864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b864_0x13b864");
#endif

    ctx->pc = 0x13b864u;

    // 0x13b864: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x13b864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x13b868: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x13b868u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x13b86c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B86Cu;
    {
        const bool branch_taken_0x13b86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b86c) {
            ctx->pc = 0x13B880u;
            return;
        }
    }
    ctx->pc = 0x13B874u;
    // 0x13b874: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x13b874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b878: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B878u;
    {
        const bool branch_taken_0x13b878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B878u;
        // 0x13b87c: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b878) {
            ctx->pc = 0x13B888u;
            return;
        }
    }
    ctx->pc = 0x13B880u;
}
