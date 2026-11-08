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

// Function: entry_001fde40
// Address: 0x1fde40 - 0x1fde6c
void entry_001fde40_0x1fde40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fde40_0x1fde40");
#endif

    ctx->pc = 0x1fde40u;

    // 0x1fde40: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x1fde40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x1fde44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDE44u;
    {
        const bool branch_taken_0x1fde44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE44u;
        // 0x1fde48: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde44) {
            ctx->pc = 0x1FDE6Cu;
            return;
        }
    }
    ctx->pc = 0x1FDE4Cu;
    // 0x1fde4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fde50: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1fde50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1fde54: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FDE54u;
    {
        const bool branch_taken_0x1fde54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE54u;
        // 0x1fde58: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde54) {
            ctx->pc = 0x1FDE8Cu;
            return;
        }
    }
    ctx->pc = 0x1FDE5Cu;
    // 0x1fde5c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fde60: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1fde60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fde64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FDE64u;
    {
        const bool branch_taken_0x1fde64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE64u;
        // 0x1fde68: 0x242902f  dsubu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde64) {
            ctx->pc = 0x1FDE90u;
            return;
        }
    }
    ctx->pc = 0x1FDE6Cu;
}
