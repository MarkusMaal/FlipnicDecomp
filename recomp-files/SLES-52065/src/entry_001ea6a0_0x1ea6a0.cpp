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

// Function: entry_001ea6a0
// Address: 0x1ea6a0 - 0x1ea6cc
void entry_001ea6a0_0x1ea6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea6a0_0x1ea6a0");
#endif

    ctx->pc = 0x1ea6a0u;

    // 0x1ea6a0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EA6A0u;
    {
        const bool branch_taken_0x1ea6a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea6a0) {
            ctx->pc = 0x1EA6E8u;
            return;
        }
    }
    ctx->pc = 0x1EA6A8u;
    // 0x1ea6a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA6A8u;
    {
        const bool branch_taken_0x1ea6a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea6a8) {
            ctx->pc = 0x1EA6CCu;
            return;
        }
    }
    ctx->pc = 0x1EA6B0u;
    // 0x1ea6b0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1ea6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1ea6b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ea6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ea6b8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ea6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ea6bc: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1ea6bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ea6c0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ea6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea6c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA6C4u;
    {
        const bool branch_taken_0x1ea6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA6C4u;
        // 0x1ea6c8: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6c4) {
            ctx->pc = 0x1EA6E0u;
            return;
        }
    }
    ctx->pc = 0x1EA6CCu;
}
