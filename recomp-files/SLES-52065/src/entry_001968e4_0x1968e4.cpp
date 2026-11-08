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

// Function: entry_001968e4
// Address: 0x1968e4 - 0x196924
void entry_001968e4_0x1968e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001968e4_0x1968e4");
#endif

    switch (ctx->pc) {
        case 0x196904u: goto label_196904;
        default: break;
    }

    ctx->pc = 0x1968e4u;

label_1968e4:
    // 0x1968e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1968e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1968e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1968ec: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1968ECu;
    {
        const bool branch_taken_0x1968ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1968ec) {
            ctx->pc = 0x196924u;
            return;
        }
    }
    ctx->pc = 0x1968F4u;
    // 0x1968f4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1968f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1968f8: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1968f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1968fc: 0xc057040  jal         func_15C100
    ctx->pc = 0x1968FCu;
    SET_GPR_U32(ctx, 31, 0x196904u);
    ctx->pc = 0x196900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968FCu;
    // 0x196900: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1968FCu, 0x196904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196904u;
label_196904:
    // 0x196904: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x196904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x196908: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19690c: 0xac620450  sw          $v0, 0x450($v1)
    ctx->pc = 0x19690cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 2));
    // 0x196910: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x196910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x196914: 0xac710490  sw          $s1, 0x490($v1)
    ctx->pc = 0x196914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1168), GPR_U32(ctx, 17));
    // 0x196918: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x196918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19691c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19691Cu;
    {
        const bool branch_taken_0x19691c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19691Cu;
        // 0x196920: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19691c) {
            ctx->pc = 0x1968E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1968e4;
        }
    }
    ctx->pc = 0x196924u;
}
