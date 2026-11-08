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

// Function: entry_0019bc6c
// Address: 0x19bc6c - 0x19bcbc
void entry_0019bc6c_0x19bc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bc6c_0x19bc6c");
#endif

    ctx->pc = 0x19bc6cu;

    // 0x19bc6c: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x19bc6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19bc70: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x19BC70u;
    {
        const bool branch_taken_0x19bc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc70) {
            ctx->pc = 0x19BDE4u;
            return;
        }
    }
    ctx->pc = 0x19BC78u;
    // 0x19bc78: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x19bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x19bc7c: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x19BC7Cu;
    {
        const bool branch_taken_0x19bc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bc7c) {
            ctx->pc = 0x19BDD0u;
            return;
        }
    }
    ctx->pc = 0x19BC84u;
    // 0x19bc84: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x19bc88: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x19BC88u;
    {
        const bool branch_taken_0x19bc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bc88) {
            ctx->pc = 0x19BD80u;
            return;
        }
    }
    ctx->pc = 0x19BC90u;
    // 0x19bc90: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x19bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x19bc94: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x19BC94u;
    {
        const bool branch_taken_0x19bc94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bc94) {
            ctx->pc = 0x19BD30u;
            return;
        }
    }
    ctx->pc = 0x19BC9Cu;
    // 0x19bc9c: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x19bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x19bca0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19BCA0u;
    {
        const bool branch_taken_0x19bca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bca0) {
            ctx->pc = 0x19BCDCu;
            return;
        }
    }
    ctx->pc = 0x19BCA8u;
    // 0x19bca8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x19bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19bcac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BCACu;
    {
        const bool branch_taken_0x19bcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19bcac) {
            ctx->pc = 0x19BCBCu;
            return;
        }
    }
    ctx->pc = 0x19BCB4u;
    // 0x19bcb4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x19BCB4u;
    {
        const bool branch_taken_0x19bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bcb4) {
            ctx->pc = 0x19BDE4u;
            return;
        }
    }
    ctx->pc = 0x19BCBCu;
}
