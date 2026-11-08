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
// Address: 0x191354 - 0x19138c
void caseD_5_0x191354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x191354");
#endif

    ctx->pc = 0x191354u;

    // 0x191354: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x191354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x191358: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x191358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19135c: 0x10a30054  beq         $a1, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x19135Cu;
    {
        const bool branch_taken_0x19135c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x19135c) {
            ctx->pc = 0x1914B0u;
            return;
        }
    }
    ctx->pc = 0x191364u;
    // 0x191364: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x191364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191368: 0x10a4004a  beq         $a1, $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x191368u;
    {
        const bool branch_taken_0x191368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x191368) {
            ctx->pc = 0x191494u;
            return;
        }
    }
    ctx->pc = 0x191370u;
    // 0x191370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191374: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x191374u;
    {
        const bool branch_taken_0x191374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x191374) {
            ctx->pc = 0x19140Cu;
            return;
        }
    }
    ctx->pc = 0x19137Cu;
    // 0x19137c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19137Cu;
    {
        const bool branch_taken_0x19137c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19137c) {
            ctx->pc = 0x19138Cu;
            return;
        }
    }
    ctx->pc = 0x191384u;
    // 0x191384: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x191384u;
    {
        const bool branch_taken_0x191384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191384) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x19138Cu;
}
