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

// Function: entry_0013d328
// Address: 0x13d328 - 0x13d380
void entry_0013d328_0x13d328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d328_0x13d328");
#endif

    switch (ctx->pc) {
        case 0x13d378u: goto label_13d378;
        default: break;
    }

    ctx->pc = 0x13d328u;

    // 0x13d328: 0x8e08017c  lw          $t0, 0x17C($s0)
    ctx->pc = 0x13d328u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x13d32c: 0x11030023  beq         $t0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x13D32Cu;
    {
        const bool branch_taken_0x13d32c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x13D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D32Cu;
        // 0x13d330: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d32c) {
            ctx->pc = 0x13D3BCu;
            return;
        }
    }
    ctx->pc = 0x13D334u;
    // 0x13d334: 0x10c40021  beq         $a2, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x13D334u;
    {
        const bool branch_taken_0x13d334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x13d334) {
            ctx->pc = 0x13D3BCu;
            return;
        }
    }
    ctx->pc = 0x13D33Cu;
    // 0x13d33c: 0x8e060178  lw          $a2, 0x178($s0)
    ctx->pc = 0x13d33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x13d340: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x13D340u;
    {
        const bool branch_taken_0x13d340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D340u;
        // 0x13d344: 0x107082a  slt         $at, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d340) {
            ctx->pc = 0x13D3BCu;
            return;
        }
    }
    ctx->pc = 0x13D348u;
    // 0x13d348: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x13D348u;
    {
        const bool branch_taken_0x13d348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D348u;
        // 0x13d34c: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d348) {
            ctx->pc = 0x13D3BCu;
            return;
        }
    }
    ctx->pc = 0x13D350u;
    // 0x13d350: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x13d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x13d354: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x13d354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d358: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x13D358u;
    {
        const bool branch_taken_0x13d358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13d358) {
            ctx->pc = 0x13D404u;
            return;
        }
    }
    ctx->pc = 0x13D360u;
    // 0x13d360: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d364: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D364u;
    {
        const bool branch_taken_0x13d364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D364u;
        // 0x13d368: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d364) {
            ctx->pc = 0x13D380u;
            return;
        }
    }
    ctx->pc = 0x13D36Cu;
    // 0x13d36c: 0x2604019c  addiu       $a0, $s0, 0x19C
    ctx->pc = 0x13d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
    // 0x13d370: 0xc04fd04  jal         func_13F410
    ctx->pc = 0x13D370u;
    SET_GPR_U32(ctx, 31, 0x13D378u);
    ctx->pc = 0x13D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D370u;
    // 0x13d374: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F410u, 0x13D370u, 0x13D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D378u;
label_13d378:
    // 0x13d378: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13D378u;
    {
        const bool branch_taken_0x13d378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D378u;
        // 0x13d37c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d378) {
            ctx->pc = 0x13D408u;
            return;
        }
    }
    ctx->pc = 0x13D380u;
}
