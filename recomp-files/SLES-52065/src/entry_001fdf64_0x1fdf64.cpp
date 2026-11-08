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

// Function: entry_001fdf64
// Address: 0x1fdf64 - 0x1fdf80
void entry_001fdf64_0x1fdf64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdf64_0x1fdf64");
#endif

    ctx->pc = 0x1fdf64u;

    // 0x1fdf64: 0x16e00015  bnez        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FDF64u;
    {
        const bool branch_taken_0x1fdf64 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF64u;
        // 0x1fdf68: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf64) {
            ctx->pc = 0x1FDFBCu;
            return;
        }
    }
    ctx->pc = 0x1FDF6Cu;
    // 0x1fdf6c: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x1fdf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x1fdf70: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDF70u;
    {
        const bool branch_taken_0x1fdf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf70) {
            ctx->pc = 0x1FDF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDF70u;
            // 0x1fdf74: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDF80u;
            return;
        }
    }
    ctx->pc = 0x1FDF78u;
    // 0x1fdf78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDF78u;
    {
        const bool branch_taken_0x1fdf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF78u;
        // 0x1fdf7c: 0x8e120050  lw          $s2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf78) {
            ctx->pc = 0x1FDFA0u;
            return;
        }
    }
    ctx->pc = 0x1FDF80u;
}
