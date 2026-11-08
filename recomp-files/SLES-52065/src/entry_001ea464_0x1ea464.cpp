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

// Function: entry_001ea464
// Address: 0x1ea464 - 0x1ea490
void entry_001ea464_0x1ea464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea464_0x1ea464");
#endif

    ctx->pc = 0x1ea464u;

    // 0x1ea464: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EA464u;
    {
        const bool branch_taken_0x1ea464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea464) {
            ctx->pc = 0x1EA4B4u;
            return;
        }
    }
    ctx->pc = 0x1EA46Cu;
    // 0x1ea46c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA46Cu;
    {
        const bool branch_taken_0x1ea46c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea46c) {
            ctx->pc = 0x1EA490u;
            return;
        }
    }
    ctx->pc = 0x1EA474u;
    // 0x1ea474: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ea478: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ea47c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea480: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ea484: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ea484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea488: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA488u;
    {
        const bool branch_taken_0x1ea488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA488u;
        // 0x1ea48c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea488) {
            ctx->pc = 0x1EA4A4u;
            return;
        }
    }
    ctx->pc = 0x1EA490u;
}
