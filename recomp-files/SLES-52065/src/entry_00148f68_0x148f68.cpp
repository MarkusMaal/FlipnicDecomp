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

// Function: entry_00148f68
// Address: 0x148f68 - 0x148f90
void entry_00148f68_0x148f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148f68_0x148f68");
#endif

    switch (ctx->pc) {
        case 0x148f70u: goto label_148f70;
        default: break;
    }

    ctx->pc = 0x148f68u;

    // 0x148f68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x148F68u;
    SET_GPR_U32(ctx, 31, 0x148F70u);
    ctx->pc = 0x148F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F68u;
    // 0x148f6c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x148F68u, 0x148F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F70u;
label_148f70:
    // 0x148f70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x148f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148f74: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x148f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x148f78: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x148f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x148f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148f80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x148f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x148f84: 0x16630002  bne         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x148F84u;
    {
        const bool branch_taken_0x148f84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x148F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F84u;
        // 0x148f88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f84) {
            ctx->pc = 0x148F90u;
            return;
        }
    }
    ctx->pc = 0x148F8Cu;
    // 0x148f8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x148f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x148f90u;
}
