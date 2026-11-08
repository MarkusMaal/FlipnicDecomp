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

// Function: entry_0015e3f8
// Address: 0x15e3f8 - 0x15e418
void entry_0015e3f8_0x15e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e3f8_0x15e3f8");
#endif

    ctx->pc = 0x15e3f8u;

    // 0x15e3f8: 0x8262002c  lb          $v0, 0x2C($s3)
    ctx->pc = 0x15e3f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x15e3fc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E3FCu;
    {
        const bool branch_taken_0x15e3fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15e3fc) {
            ctx->pc = 0x15E418u;
            return;
        }
    }
    ctx->pc = 0x15E404u;
    // 0x15e404: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x15e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15e408: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15e408u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15e40c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E40Cu;
    {
        const bool branch_taken_0x15e40c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E40Cu;
        // 0x15e410: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e40c) {
            ctx->pc = 0x15E418u;
            return;
        }
    }
    ctx->pc = 0x15E414u;
    // 0x15e414: 0xa262002c  sb          $v0, 0x2C($s3)
    ctx->pc = 0x15e414u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15e418u;
}
