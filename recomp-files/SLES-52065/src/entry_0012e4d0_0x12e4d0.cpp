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

// Function: entry_0012e4d0
// Address: 0x12e4d0 - 0x12e4f4
void entry_0012e4d0_0x12e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e4d0_0x12e4d0");
#endif

    ctx->pc = 0x12e4d0u;

    // 0x12e4d0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x12e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12e4d4: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E4D4u;
    {
        const bool branch_taken_0x12e4d4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x12E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4D4u;
        // 0x12e4d8: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4d4) {
            ctx->pc = 0x12E4F4u;
            return;
        }
    }
    ctx->pc = 0x12E4DCu;
    // 0x12e4dc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x12e4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12e4e0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x12e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x12e4e4: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x12e4e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12e4e8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E4E8u;
    {
        const bool branch_taken_0x12e4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e4e8) {
            ctx->pc = 0x12E500u;
            return;
        }
    }
    ctx->pc = 0x12E4F0u;
    // 0x12e4f0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x12e4f4u;
}
