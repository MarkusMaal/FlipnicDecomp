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

// Function: caseD_2
// Address: 0x1ef0b8 - 0x1ef0e0
void caseD_2_0x1ef0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ef0b8");
#endif

    ctx->pc = 0x1ef0b8u;

    // 0x1ef0b8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1ef0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ef0bc: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF0BCu;
    {
        const bool branch_taken_0x1ef0bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0BCu;
        // 0x1ef0c0: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0bc) {
            ctx->pc = 0x1EF108u;
            return;
        }
    }
    ctx->pc = 0x1EF0C4u;
    // 0x1ef0c4: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x1ef0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ef0c8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ef0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ef0cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0d0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EF0D0u;
    {
        const bool branch_taken_0x1ef0d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1EF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0D0u;
        // 0x1ef0d4: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0d0) {
            ctx->pc = 0x1EF108u;
            return;
        }
    }
    ctx->pc = 0x1EF0D8u;
    // 0x1ef0d8: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x1ef0d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1ef0dc: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x1ef0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    ctx->pc = 0x1ef0e0u;
}
