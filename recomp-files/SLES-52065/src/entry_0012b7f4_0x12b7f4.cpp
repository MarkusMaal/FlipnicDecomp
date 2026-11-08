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

// Function: entry_0012b7f4
// Address: 0x12b7f4 - 0x12b824
void entry_0012b7f4_0x12b7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b7f4_0x12b7f4");
#endif

    ctx->pc = 0x12b7f4u;

    // 0x12b7f4: 0x0  nop
    ctx->pc = 0x12b7f4u;
    // NOP
    // 0x12b7f8: 0x10a1021  addu        $v0, $t0, $t2
    ctx->pc = 0x12b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x12b7fc: 0x80470001  lb          $a3, 0x1($v0)
    ctx->pc = 0x12b7fcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x12b800: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B800u;
    {
        const bool branch_taken_0x12b800 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x12B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B800u;
        // 0x12b804: 0x17d1021  addu        $v0, $t3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b800) {
            ctx->pc = 0x12B824u;
            return;
        }
    }
    ctx->pc = 0x12B808u;
    // 0x12b808: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x12b808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x12b80c: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B80Cu;
    {
        const bool branch_taken_0x12b80c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x12b80c) {
            ctx->pc = 0x12B824u;
            return;
        }
    }
    ctx->pc = 0x12B814u;
    // 0x12b814: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B814u;
    {
        const bool branch_taken_0x12b814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12b814) {
            ctx->pc = 0x12B824u;
            return;
        }
    }
    ctx->pc = 0x12B81Cu;
    // 0x12b81c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12B81Cu;
    {
        const bool branch_taken_0x12b81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B81Cu;
        // 0x12b820: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b81c) {
            ctx->pc = 0x12B838u;
            return;
        }
    }
    ctx->pc = 0x12B824u;
}
