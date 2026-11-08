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

// Function: entry_001fe26c
// Address: 0x1fe26c - 0x1fe284
void entry_001fe26c_0x1fe26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe26c_0x1fe26c");
#endif

    ctx->pc = 0x1fe26cu;

    // 0x1fe26c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE26Cu;
    {
        const bool branch_taken_0x1fe26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE26Cu;
        // 0x1fe270: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe26c) {
            ctx->pc = 0x1FE284u;
            return;
        }
    }
    ctx->pc = 0x1FE274u;
    // 0x1fe274: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1fe274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1fe278: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe27c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1FE27Cu;
    {
        const bool branch_taken_0x1fe27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE27Cu;
        // 0x1fe280: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe27c) {
            ctx->pc = 0x1FE314u;
            return;
        }
    }
    ctx->pc = 0x1FE284u;
}
