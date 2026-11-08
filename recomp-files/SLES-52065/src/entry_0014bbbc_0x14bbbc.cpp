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

// Function: entry_0014bbbc
// Address: 0x14bbbc - 0x14bbe8
void entry_0014bbbc_0x14bbbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bbbc_0x14bbbc");
#endif

    ctx->pc = 0x14bbbcu;

    // 0x14bbbc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14bbc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14bbc4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14bbc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14bbc8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x14BBC8u;
    {
        const bool branch_taken_0x14bbc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bbc8) {
            ctx->pc = 0x14BC18u;
            return;
        }
    }
    ctx->pc = 0x14BBD0u;
    // 0x14bbd0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14bbd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BBD4u;
    {
        const bool branch_taken_0x14bbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bbd4) {
            ctx->pc = 0x14BBE8u;
            return;
        }
    }
    ctx->pc = 0x14BBDCu;
    // 0x14bbdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14bbe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14BBE0u;
    {
        const bool branch_taken_0x14bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBE0u;
        // 0x14bbe4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbe0) {
            ctx->pc = 0x14BBF0u;
            return;
        }
    }
    ctx->pc = 0x14BBE8u;
}
