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

// Function: entry_0017efe0
// Address: 0x17efe0 - 0x17f004
void entry_0017efe0_0x17efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017efe0_0x17efe0");
#endif

    ctx->pc = 0x17efe0u;

    // 0x17efe0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x17efe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17efe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17efe8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x17efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x17efec: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x17efecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x17eff0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17eff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17eff4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EFF4u;
    {
        const bool branch_taken_0x17eff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eff4) {
            ctx->pc = 0x17F004u;
            return;
        }
    }
    ctx->pc = 0x17EFFCu;
    // 0x17effc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x17effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17f000: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x17f000u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x17f004u;
}
