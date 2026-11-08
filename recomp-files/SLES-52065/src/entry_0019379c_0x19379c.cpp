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

// Function: entry_0019379c
// Address: 0x19379c - 0x1937d4
void entry_0019379c_0x19379c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019379c_0x19379c");
#endif

    ctx->pc = 0x19379cu;

    // 0x19379c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19379cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1937a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1937a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1937a4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1937a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1937a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1937a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1937ac: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1937acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1937b0: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1937B0u;
    {
        const bool branch_taken_0x1937b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1937B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937B0u;
        // 0x1937b4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937b0) {
            ctx->pc = 0x193804u;
            return;
        }
    }
    ctx->pc = 0x1937B8u;
    // 0x1937b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1937b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1937bc: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1937BCu;
    {
        const bool branch_taken_0x1937bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1937C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937BCu;
        // 0x1937c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937bc) {
            ctx->pc = 0x1937ECu;
            return;
        }
    }
    ctx->pc = 0x1937C4u;
    // 0x1937c4: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1937C4u;
    {
        const bool branch_taken_0x1937c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x1937c4) {
            ctx->pc = 0x1937D4u;
            return;
        }
    }
    ctx->pc = 0x1937CCu;
    // 0x1937cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1937CCu;
    {
        const bool branch_taken_0x1937cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1937D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937CCu;
        // 0x1937d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937cc) {
            ctx->pc = 0x19381Cu;
            return;
        }
    }
    ctx->pc = 0x1937D4u;
}
