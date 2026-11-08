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

// Function: caseD_fffffffb
// Address: 0x1914f8 - 0x191530
void caseD_fffffffb_0x1914f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffb_0x1914f8");
#endif

    ctx->pc = 0x1914f8u;

    // 0x1914f8: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x1914f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1914fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1914fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191500: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x191500u;
    {
        const bool branch_taken_0x191500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x191500) {
            ctx->pc = 0x191650u;
            return;
        }
    }
    ctx->pc = 0x191508u;
    // 0x191508: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x191508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19150c: 0x10a40049  beq         $a1, $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x19150Cu;
    {
        const bool branch_taken_0x19150c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x19150c) {
            ctx->pc = 0x191634u;
            return;
        }
    }
    ctx->pc = 0x191514u;
    // 0x191514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191518: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x191518u;
    {
        const bool branch_taken_0x191518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x191518) {
            ctx->pc = 0x1915B0u;
            return;
        }
    }
    ctx->pc = 0x191520u;
    // 0x191520: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x191520u;
    {
        const bool branch_taken_0x191520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191520) {
            ctx->pc = 0x191530u;
            return;
        }
    }
    ctx->pc = 0x191528u;
    // 0x191528: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x191528u;
    {
        const bool branch_taken_0x191528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191528) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x191530u;
}
