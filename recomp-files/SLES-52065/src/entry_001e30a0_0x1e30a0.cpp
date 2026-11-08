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

// Function: entry_001e30a0
// Address: 0x1e30a0 - 0x1e30d0
void entry_001e30a0_0x1e30a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e30a0_0x1e30a0");
#endif

    ctx->pc = 0x1e30a0u;

    // 0x1e30a0: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1E30A0u;
    {
        const bool branch_taken_0x1e30a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e30a0) {
            ctx->pc = 0x1E3164u;
            return;
        }
    }
    ctx->pc = 0x1E30A8u;
    // 0x1e30a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e30a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e30ac: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1e30acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1e30b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e30b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e30b4: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1e30b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e30b8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1e30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1e30bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E30BCu;
    {
        const bool branch_taken_0x1e30bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e30bc) {
            ctx->pc = 0x1E30D0u;
            return;
        }
    }
    ctx->pc = 0x1E30C4u;
    // 0x1e30c4: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1e30c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1e30c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e30c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e30cc: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1e30ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e30d0u;
}
