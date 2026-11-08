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

// Function: entry_001da068
// Address: 0x1da068 - 0x1da090
void entry_001da068_0x1da068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da068_0x1da068");
#endif

    ctx->pc = 0x1da068u;

    // 0x1da068: 0x11c2006d  beq         $t6, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1DA068u;
    {
        const bool branch_taken_0x1da068 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA068u;
        // 0x1da06c: 0x29c20042  slti        $v0, $t6, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da068) {
            ctx->pc = 0x1DA220u;
            return;
        }
    }
    ctx->pc = 0x1DA070u;
    // 0x1da070: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA070u;
    {
        const bool branch_taken_0x1da070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA070u;
        // 0x1da074: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da070) {
            ctx->pc = 0x1DA090u;
            return;
        }
    }
    ctx->pc = 0x1DA078u;
    // 0x1da078: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1da078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1da07c: 0x11c20008  beq         $t6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA07Cu;
    {
        const bool branch_taken_0x1da07c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA07Cu;
        // 0x1da080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da07c) {
            ctx->pc = 0x1DA0A0u;
            return;
        }
    }
    ctx->pc = 0x1DA084u;
    // 0x1da084: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1DA084u;
    {
        const bool branch_taken_0x1da084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA084u;
        // 0x1da088: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da084) {
            ctx->pc = 0x1DA514u;
            return;
        }
    }
    ctx->pc = 0x1DA08Cu;
    // 0x1da08c: 0x0  nop
    ctx->pc = 0x1da08cu;
    // NOP
    ctx->pc = 0x1da090u;
}
