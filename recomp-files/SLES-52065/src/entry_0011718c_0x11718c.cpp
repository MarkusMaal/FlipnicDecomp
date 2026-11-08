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

// Function: entry_0011718c
// Address: 0x11718c - 0x1171d4
void entry_0011718c_0x11718c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011718c_0x11718c");
#endif

    ctx->pc = 0x11718cu;

    // 0x11718c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x11718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x117190: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x117190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117194: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x117194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x117198: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x117198u;
    {
        const bool branch_taken_0x117198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117198) {
            ctx->pc = 0x1171ECu;
            return;
        }
    }
    ctx->pc = 0x1171A0u;
    // 0x1171a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1171a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1171a4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1171a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1171a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1171a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1171ac: 0x24420a34  addiu       $v0, $v0, 0xA34
    ctx->pc = 0x1171acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2612));
    // 0x1171b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1171b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1171b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1171b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1171b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1171b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1171bc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1171bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1171c0: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x1171c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1171c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1171C4u;
    {
        const bool branch_taken_0x1171c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171C4u;
        // 0x1171c8: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171c4) {
            ctx->pc = 0x1171D4u;
            return;
        }
    }
    ctx->pc = 0x1171CCu;
    // 0x1171cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1171CCu;
    {
        const bool branch_taken_0x1171cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1171D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171CCu;
        // 0x1171d0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171cc) {
            ctx->pc = 0x1171E4u;
            return;
        }
    }
    ctx->pc = 0x1171D4u;
}
