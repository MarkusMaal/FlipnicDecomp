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

// Function: entry_00178334
// Address: 0x178334 - 0x178354
void entry_00178334_0x178334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178334_0x178334");
#endif

    ctx->pc = 0x178334u;

    // 0x178334: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x178334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x178338: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x178338u;
    {
        const bool branch_taken_0x178338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178338) {
            ctx->pc = 0x178354u;
            return;
        }
    }
    ctx->pc = 0x178340u;
    // 0x178340: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x178344: 0x2e030200  sltiu       $v1, $s0, 0x200
    ctx->pc = 0x178344u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x178348: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x178348u;
    {
        const bool branch_taken_0x178348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178348) {
            ctx->pc = 0x178354u;
            return;
        }
    }
    ctx->pc = 0x178350u;
    // 0x178350: 0x241001ff  addiu       $s0, $zero, 0x1FF
    ctx->pc = 0x178350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->pc = 0x178354u;
}
