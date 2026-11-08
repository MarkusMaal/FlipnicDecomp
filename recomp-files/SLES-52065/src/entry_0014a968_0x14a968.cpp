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

// Function: entry_0014a968
// Address: 0x14a968 - 0x14a984
void entry_0014a968_0x14a968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a968_0x14a968");
#endif

    ctx->pc = 0x14a968u;

    // 0x14a968: 0x27b106cc  addiu       $s1, $sp, 0x6CC
    ctx->pc = 0x14a968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1740));
    // 0x14a96c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a970: 0x8fa306ac  lw          $v1, 0x6AC($sp)
    ctx->pc = 0x14a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1708)));
    // 0x14a974: 0x1483ffe1  bne         $a0, $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14A974u;
    {
        const bool branch_taken_0x14a974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a974) {
            ctx->pc = 0x14A8FCu;
            return;
        }
    }
    ctx->pc = 0x14A97Cu;
    // 0x14a97c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x14A97Cu;
    {
        const bool branch_taken_0x14a97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a97c) {
            ctx->pc = 0x14AB20u;
            return;
        }
    }
    ctx->pc = 0x14A984u;
}
