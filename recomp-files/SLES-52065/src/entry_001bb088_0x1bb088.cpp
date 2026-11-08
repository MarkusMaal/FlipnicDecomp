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

// Function: entry_001bb088
// Address: 0x1bb088 - 0x1bb0bc
void entry_001bb088_0x1bb088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb088_0x1bb088");
#endif

    ctx->pc = 0x1bb088u;

    // 0x1bb088: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1bb088u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb08c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bb090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bb094: 0x16620052  bne         $s3, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1BB094u;
    {
        const bool branch_taken_0x1bb094 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb094) {
            ctx->pc = 0x1BB1E0u;
            return;
        }
    }
    ctx->pc = 0x1BB09Cu;
    // 0x1bb09c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bb09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bb0a0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1BB0A0u;
    {
        const bool branch_taken_0x1bb0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0a0) {
            ctx->pc = 0x1BB1E0u;
            return;
        }
    }
    ctx->pc = 0x1BB0A8u;
    // 0x1bb0a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1bb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb0ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB0ACu;
    {
        const bool branch_taken_0x1bb0ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bb0ac) {
            ctx->pc = 0x1BB0BCu;
            return;
        }
    }
    ctx->pc = 0x1BB0B4u;
    // 0x1bb0b4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1BB0B4u;
    {
        const bool branch_taken_0x1bb0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0B4u;
        // 0x1bb0b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0b4) {
            ctx->pc = 0x1BB248u;
            return;
        }
    }
    ctx->pc = 0x1BB0BCu;
}
