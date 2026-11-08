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

// Function: entry_001b6920
// Address: 0x1b6920 - 0x1b6944
void entry_001b6920_0x1b6920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6920_0x1b6920");
#endif

    ctx->pc = 0x1b6920u;

    // 0x1b6920: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1b6920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b6924: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6924u;
    {
        const bool branch_taken_0x1b6924 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6924u;
        // 0x1b6928: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6924) {
            ctx->pc = 0x1B6944u;
            return;
        }
    }
    ctx->pc = 0x1B692Cu;
    // 0x1b692c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1b692cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b6930: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x1b6930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1b6934: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1b6934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b6938: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6938u;
    {
        const bool branch_taken_0x1b6938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6938) {
            ctx->pc = 0x1B6950u;
            return;
        }
    }
    ctx->pc = 0x1B6940u;
    // 0x1b6940: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1b6940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x1b6944u;
}
