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

// Function: entry_001211bc
// Address: 0x1211bc - 0x1211e0
void entry_001211bc_0x1211bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001211bc_0x1211bc");
#endif

    ctx->pc = 0x1211bcu;

    // 0x1211bc: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1211bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1211c0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1211c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1211c4: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1211c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1211c8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1211c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1211cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1211CCu;
    {
        const bool branch_taken_0x1211cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1211cc) {
            ctx->pc = 0x1211E0u;
            return;
        }
    }
    ctx->pc = 0x1211D4u;
    // 0x1211d4: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1211d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1211d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1211d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1211dc: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1211dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1211e0u;
}
