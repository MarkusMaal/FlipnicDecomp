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

// Function: entry_001f6648
// Address: 0x1f6648 - 0x1f6690
void entry_001f6648_0x1f6648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6648_0x1f6648");
#endif

    switch (ctx->pc) {
        case 0x1f6684u: goto label_1f6684;
        default: break;
    }

    ctx->pc = 0x1f6648u;

label_1f6648:
    // 0x1f6648: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1f6648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1f664c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1f664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1f6650: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f6650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6654: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f6654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f6658: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1f6658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f665c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f665cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6660: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6660u;
    {
        const bool branch_taken_0x1f6660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6660) {
            ctx->pc = 0x1F6648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6648;
        }
    }
    ctx->pc = 0x1F6668u;
    // 0x1f6668: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f6668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f666c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f6670: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1f6670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1f6674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6678: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1f6678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1f667c: 0xc07d634  jal         func_1F58D0
    ctx->pc = 0x1F667Cu;
    SET_GPR_U32(ctx, 31, 0x1F6684u);
    ctx->pc = 0x1F6680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F667Cu;
    // 0x1f6680: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F58D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F58D0u, 0x1F667Cu, 0x1F6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6684u;
label_1f6684:
    // 0x1f6684: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f6684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f6688: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1f6688u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1f668c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f668cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f6690u;
}
