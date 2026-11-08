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

// Function: entry_00178490
// Address: 0x178490 - 0x1784a8
void entry_00178490_0x178490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178490_0x178490");
#endif

    ctx->pc = 0x178490u;

    // 0x178490: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x178490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x178494: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x178494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x178498: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x178498u;
    {
        const bool branch_taken_0x178498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178498) {
            ctx->pc = 0x178450u;
            return;
        }
    }
    ctx->pc = 0x1784A0u;
    // 0x1784a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1784a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1784a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1784a8u;
}
