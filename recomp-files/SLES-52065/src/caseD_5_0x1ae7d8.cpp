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

// Function: caseD_5
// Address: 0x1ae7d8 - 0x1ae804
void caseD_5_0x1ae7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1ae7d8");
#endif

    ctx->pc = 0x1ae7d8u;

    // 0x1ae7d8: 0x928206ba  lbu         $v0, 0x6BA($s4)
    ctx->pc = 0x1ae7d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1722)));
    // 0x1ae7dc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AE7DCu;
    {
        const bool branch_taken_0x1ae7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7dc) {
            ctx->pc = 0x1AE820u;
            return;
        }
    }
    ctx->pc = 0x1AE7E4u;
    // 0x1ae7e4: 0x8e820670  lw          $v0, 0x670($s4)
    ctx->pc = 0x1ae7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1ae7e8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1ae7e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ae7ec: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE7ECu;
    {
        const bool branch_taken_0x1ae7ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7ec) {
            ctx->pc = 0x1AE804u;
            return;
        }
    }
    ctx->pc = 0x1AE7F4u;
    // 0x1ae7f4: 0x8e82068c  lw          $v0, 0x68C($s4)
    ctx->pc = 0x1ae7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
    // 0x1ae7f8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1ae7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ae7fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE7FCu;
    {
        const bool branch_taken_0x1ae7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7fc) {
            ctx->pc = 0x1AE820u;
            return;
        }
    }
    ctx->pc = 0x1AE804u;
}
