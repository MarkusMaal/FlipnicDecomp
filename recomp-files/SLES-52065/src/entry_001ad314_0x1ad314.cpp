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

// Function: entry_001ad314
// Address: 0x1ad314 - 0x1ad350
void entry_001ad314_0x1ad314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad314_0x1ad314");
#endif

    switch (ctx->pc) {
        case 0x1ad328u: goto label_1ad328;
        default: break;
    }

    ctx->pc = 0x1ad314u;

    // 0x1ad314: 0x0  nop
    ctx->pc = 0x1ad314u;
    // NOP
    // 0x1ad318: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1ad318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1ad31c: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1ad31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ad320: 0xc057040  jal         func_15C100
    ctx->pc = 0x1AD320u;
    SET_GPR_U32(ctx, 31, 0x1AD328u);
    ctx->pc = 0x1AD324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD320u;
    // 0x1ad324: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AD320u, 0x1AD328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD328u;
label_1ad328:
    // 0x1ad328: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x1ad328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1ad32c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1ad32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1ad330: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1ad330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1ad334: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ad334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ad338: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ad338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ad33c: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x1ad33cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ad340: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD340u;
    {
        const bool branch_taken_0x1ad340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD340u;
        // 0x1ad344: 0xac820680  sw          $v0, 0x680($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad340) {
            ctx->pc = 0x1AD36Cu;
            return;
        }
    }
    ctx->pc = 0x1AD348u;
    // 0x1ad348: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD348u;
    {
        const bool branch_taken_0x1ad348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD348u;
        // 0x1ad34c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad348) {
            ctx->pc = 0x1AD36Cu;
            return;
        }
    }
    ctx->pc = 0x1AD350u;
}
