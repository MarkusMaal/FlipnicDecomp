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

// Function: entry_00197bbc
// Address: 0x197bbc - 0x197be4
void entry_00197bbc_0x197bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197bbc_0x197bbc");
#endif

    ctx->pc = 0x197bbcu;

    // 0x197bbc: 0x8ea306d8  lw          $v1, 0x6D8($s5)
    ctx->pc = 0x197bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1752)));
    // 0x197bc0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x197BC0u;
    {
        const bool branch_taken_0x197bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197bc0) {
            ctx->pc = 0x197BE8u;
            return;
        }
    }
    ctx->pc = 0x197BC8u;
    // 0x197bc8: 0x8c640320  lw          $a0, 0x320($v1)
    ctx->pc = 0x197bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x197bcc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x197bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197bd0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197BD0u;
    {
        const bool branch_taken_0x197bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197bd0) {
            ctx->pc = 0x197BE4u;
            return;
        }
    }
    ctx->pc = 0x197BD8u;
    // 0x197bd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197bdc: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197BDCu;
    {
        const bool branch_taken_0x197bdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197bdc) {
            ctx->pc = 0x197BE8u;
            return;
        }
    }
    ctx->pc = 0x197BE4u;
}
