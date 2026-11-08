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

// Function: entry_0015cff4
// Address: 0x15cff4 - 0x15d02c
void entry_0015cff4_0x15cff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cff4_0x15cff4");
#endif

    ctx->pc = 0x15cff4u;

    // 0x15cff4: 0x84a301e8  lh          $v1, 0x1E8($a1)
    ctx->pc = 0x15cff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x15cff8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x15cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15cffc: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15CFFCu;
    {
        const bool branch_taken_0x15cffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFFCu;
        // 0x15d000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cffc) {
            ctx->pc = 0x15D02Cu;
            return;
        }
    }
    ctx->pc = 0x15D004u;
    // 0x15d004: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D004u;
    {
        const bool branch_taken_0x15d004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15d004) {
            ctx->pc = 0x15D02Cu;
            return;
        }
    }
    ctx->pc = 0x15D00Cu;
    // 0x15d00c: 0x84a201ea  lh          $v0, 0x1EA($a1)
    ctx->pc = 0x15d00cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 490)));
    // 0x15d010: 0x2841ffff  slti        $at, $v0, -0x1
    ctx->pc = 0x15d010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x15d014: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D014u;
    {
        const bool branch_taken_0x15d014 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D014u;
        // 0x15d018: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d014) {
            ctx->pc = 0x15D02Cu;
            return;
        }
    }
    ctx->pc = 0x15D01Cu;
    // 0x15d01c: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D01Cu;
    {
        const bool branch_taken_0x15d01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x15D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D01Cu;
        // 0x15d020: 0x26042c00  addiu       $a0, $s0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d01c) {
            ctx->pc = 0x15D02Cu;
            return;
        }
    }
    ctx->pc = 0x15D024u;
    // 0x15d024: 0xc058174  jal         func_1605D0
    ctx->pc = 0x15D024u;
    SET_GPR_U32(ctx, 31, 0x15D02Cu);
    ctx->pc = 0x1605D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1605D0u, 0x15D024u, 0x15D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D02Cu;
}
