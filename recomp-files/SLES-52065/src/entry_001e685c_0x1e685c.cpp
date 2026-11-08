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

// Function: entry_001e685c
// Address: 0x1e685c - 0x1e6880
void entry_001e685c_0x1e685c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e685c_0x1e685c");
#endif

    ctx->pc = 0x1e685cu;

    // 0x1e685c: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e685cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6860: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e6860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e6864: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1e6864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e6868: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1e6868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e686c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E686Cu;
    {
        const bool branch_taken_0x1e686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e686c) {
            ctx->pc = 0x1E6880u;
            return;
        }
    }
    ctx->pc = 0x1E6874u;
    // 0x1e6874: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e6878: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e6878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e687c: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x1e687cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e6880u;
}
