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

// Function: entry_001783b8
// Address: 0x1783b8 - 0x1783dc
void entry_001783b8_0x1783b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001783b8_0x1783b8");
#endif

    ctx->pc = 0x1783b8u;

    // 0x1783b8: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1783b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1783bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1783bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1783c0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1783C0u;
    {
        const bool branch_taken_0x1783c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1783c0) {
            ctx->pc = 0x1783DCu;
            return;
        }
    }
    ctx->pc = 0x1783C8u;
    // 0x1783c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1783c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1783cc: 0x2e030200  sltiu       $v1, $s0, 0x200
    ctx->pc = 0x1783ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1783d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1783D0u;
    {
        const bool branch_taken_0x1783d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1783d0) {
            ctx->pc = 0x1783DCu;
            return;
        }
    }
    ctx->pc = 0x1783D8u;
    // 0x1783d8: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x1783d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->pc = 0x1783dcu;
}
