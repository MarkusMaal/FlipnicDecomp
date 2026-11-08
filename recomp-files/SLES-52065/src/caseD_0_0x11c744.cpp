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

// Function: caseD_0
// Address: 0x11c744 - 0x11c79c
void caseD_0_0x11c744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x11c744");
#endif

    ctx->pc = 0x11c744u;

    // 0x11c744: 0x0  nop
    ctx->pc = 0x11c744u;
    // NOP
    // 0x11c748: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x11c748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11c74c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11c750: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x11C750u;
    {
        const bool branch_taken_0x11c750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c750) {
            ctx->pc = 0x11C7E0u;
            return;
        }
    }
    ctx->pc = 0x11C758u;
    // 0x11c758: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11c758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11c75c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x11C75Cu;
    {
        const bool branch_taken_0x11c75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c75c) {
            ctx->pc = 0x11C7E0u;
            return;
        }
    }
    ctx->pc = 0x11C764u;
    // 0x11c764: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c768: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C768u;
    {
        const bool branch_taken_0x11c768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c768) {
            ctx->pc = 0x11C7B0u;
            return;
        }
    }
    ctx->pc = 0x11C770u;
    // 0x11c770: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11c770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c774: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x11C774u;
    {
        const bool branch_taken_0x11c774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c774) {
            ctx->pc = 0x11C7B0u;
            return;
        }
    }
    ctx->pc = 0x11C77Cu;
    // 0x11c77c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11c780: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C780u;
    {
        const bool branch_taken_0x11c780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c780) {
            ctx->pc = 0x11C79Cu;
            return;
        }
    }
    ctx->pc = 0x11C788u;
    // 0x11c788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c78c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C78Cu;
    {
        const bool branch_taken_0x11c78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c78c) {
            ctx->pc = 0x11C79Cu;
            return;
        }
    }
    ctx->pc = 0x11C794u;
    // 0x11c794: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x11C794u;
    {
        const bool branch_taken_0x11c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c794) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11C79Cu;
}
