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

// Function: entry_001e9424
// Address: 0x1e9424 - 0x1e943c
void entry_001e9424_0x1e9424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9424_0x1e9424");
#endif

    ctx->pc = 0x1e9424u;

    // 0x1e9424: 0x0  nop
    ctx->pc = 0x1e9424u;
    // NOP
    // 0x1e9428: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e942c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1e942cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9430: 0x10a3fff6  beq         $a1, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E9430u;
    {
        const bool branch_taken_0x1e9430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e9430) {
            ctx->pc = 0x1E940Cu;
            return;
        }
    }
    ctx->pc = 0x1E9438u;
    // 0x1e9438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e943cu;
}
