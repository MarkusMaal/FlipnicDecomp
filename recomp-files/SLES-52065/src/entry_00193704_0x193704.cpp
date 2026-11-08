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

// Function: entry_00193704
// Address: 0x193704 - 0x19373c
void entry_00193704_0x193704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193704_0x193704");
#endif

    ctx->pc = 0x193704u;

    // 0x193704: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193708: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19370c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x193710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193714: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x193718: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x193718u;
    {
        const bool branch_taken_0x193718 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x19371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193718u;
        // 0x19371c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193718) {
            ctx->pc = 0x19376Cu;
            return;
        }
    }
    ctx->pc = 0x193720u;
    // 0x193720: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x193720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x193724: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x193724u;
    {
        const bool branch_taken_0x193724 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x193728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193724u;
        // 0x193728: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193724) {
            ctx->pc = 0x193754u;
            return;
        }
    }
    ctx->pc = 0x19372Cu;
    // 0x19372c: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19372Cu;
    {
        const bool branch_taken_0x19372c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x19372c) {
            ctx->pc = 0x19373Cu;
            return;
        }
    }
    ctx->pc = 0x193734u;
    // 0x193734: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x193734u;
    {
        const bool branch_taken_0x193734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193734u;
        // 0x193738: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193734) {
            ctx->pc = 0x193784u;
            return;
        }
    }
    ctx->pc = 0x19373Cu;
}
