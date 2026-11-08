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

// Function: entry_00194988
// Address: 0x194988 - 0x1949b4
void entry_00194988_0x194988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194988_0x194988");
#endif

    ctx->pc = 0x194988u;

    // 0x194988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x194988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19498c: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19498Cu;
    {
        const bool branch_taken_0x19498c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x19498c) {
            ctx->pc = 0x1949E8u;
            return;
        }
    }
    ctx->pc = 0x194994u;
    // 0x194994: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x194994u;
    {
        const bool branch_taken_0x194994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x194994) {
            ctx->pc = 0x1949D0u;
            return;
        }
    }
    ctx->pc = 0x19499Cu;
    // 0x19499c: 0x1066000a  beq         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x19499Cu;
    {
        const bool branch_taken_0x19499c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x19499c) {
            ctx->pc = 0x1949C8u;
            return;
        }
    }
    ctx->pc = 0x1949A4u;
    // 0x1949a4: 0x10670003  beq         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1949A4u;
    {
        const bool branch_taken_0x1949a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1949a4) {
            ctx->pc = 0x1949B4u;
            return;
        }
    }
    ctx->pc = 0x1949ACu;
    // 0x1949ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1949ACu;
    {
        const bool branch_taken_0x1949ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1949ac) {
            ctx->pc = 0x1949ECu;
            return;
        }
    }
    ctx->pc = 0x1949B4u;
}
