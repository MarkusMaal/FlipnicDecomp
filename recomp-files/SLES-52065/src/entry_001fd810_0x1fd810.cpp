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

// Function: entry_001fd810
// Address: 0x1fd810 - 0x1fd850
void entry_001fd810_0x1fd810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd810_0x1fd810");
#endif

    switch (ctx->pc) {
        case 0x1fd820u: goto label_1fd820;
        case 0x1fd838u: goto label_1fd838;
        default: break;
    }

    ctx->pc = 0x1fd810u;

label_1fd810:
    // 0x1fd810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd814: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fd814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd818: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1FD818u;
    SET_GPR_U32(ctx, 31, 0x1FD820u);
    ctx->pc = 0x1FD81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD818u;
    // 0x1fd81c: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1FD818u, 0x1FD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD820u;
label_1fd820:
    // 0x1fd820: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x1fd820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1fd824: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fd824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fd828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd82c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1fd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fd830: 0xc080432  jal         func_2010C8
    ctx->pc = 0x1FD830u;
    SET_GPR_U32(ctx, 31, 0x1FD838u);
    ctx->pc = 0x1FD834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD830u;
    // 0x1fd834: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x1FD830u, 0x1FD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD838u;
label_1fd838:
    // 0x1fd838: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1FD838u;
    {
        const bool branch_taken_0x1fd838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD838u;
        // 0x1fd83c: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd838) {
            ctx->pc = 0x1FD7C8u;
            return;
        }
    }
    ctx->pc = 0x1FD840u;
    // 0x1fd840: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1fd840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fd844: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1fd844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1fd848: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1FD848u;
    {
        const bool branch_taken_0x1fd848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd848) {
            ctx->pc = 0x1FD84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD848u;
            // 0x1fd84c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd810;
        }
    }
    ctx->pc = 0x1FD850u;
}
