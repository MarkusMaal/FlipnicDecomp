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

// Function: entry_0010b200
// Address: 0x10b200 - 0x10b220
void entry_0010b200_0x10b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b200_0x10b200");
#endif

    ctx->pc = 0x10b200u;

    // 0x10b200: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x10b200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10b204: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10b204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10b208: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x10b208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10b20c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x10b20cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10b210: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B210u;
    {
        const bool branch_taken_0x10b210 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b210) {
            ctx->pc = 0x10B220u;
            return;
        }
    }
    ctx->pc = 0x10B218u;
    // 0x10b218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B218u;
    {
        const bool branch_taken_0x10b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B218u;
        // 0x10b21c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b218) {
            ctx->pc = 0x10B224u;
            return;
        }
    }
    ctx->pc = 0x10B220u;
}
