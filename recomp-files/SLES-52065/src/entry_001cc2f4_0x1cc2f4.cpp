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

// Function: entry_001cc2f4
// Address: 0x1cc2f4 - 0x1cc344
void entry_001cc2f4_0x1cc2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc2f4_0x1cc2f4");
#endif

    switch (ctx->pc) {
        case 0x1cc314u: goto label_1cc314;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc328u: goto label_1cc328;
        case 0x1cc334u: goto label_1cc334;
        default: break;
    }

    ctx->pc = 0x1cc2f4u;

label_1cc2f4:
    // 0x1cc2f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc2f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1cc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1cc2fc: 0x26480001  addiu       $t0, $s2, 0x1
    ctx->pc = 0x1cc2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cc300: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x1cc300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cc304: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cc304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cc308: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x1cc308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x1cc30c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1CC30Cu;
    SET_GPR_U32(ctx, 31, 0x1CC314u);
    ctx->pc = 0x1CC310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC30Cu;
    // 0x1cc310: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1CC30Cu, 0x1CC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC314u;
label_1cc314:
    // 0x1cc314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc318: 0xc0714e8  jal         func_1C53A0
    ctx->pc = 0x1CC318u;
    SET_GPR_U32(ctx, 31, 0x1CC320u);
    ctx->pc = 0x1CC31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC318u;
    // 0x1cc31c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53A0u, 0x1CC318u, 0x1CC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC320u;
label_1cc320:
    // 0x1cc320: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1CC320u;
    SET_GPR_U32(ctx, 31, 0x1CC328u);
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1CC320u, 0x1CC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC328u;
label_1cc328:
    // 0x1cc328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc32c: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1CC32Cu;
    SET_GPR_U32(ctx, 31, 0x1CC334u);
    ctx->pc = 0x1CC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC32Cu;
    // 0x1cc330: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1CC32Cu, 0x1CC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC334u;
label_1cc334:
    // 0x1cc334: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cc334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cc338: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x1cc338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cc33c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CC33Cu;
    {
        const bool branch_taken_0x1cc33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC33Cu;
        // 0x1cc340: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc33c) {
            ctx->pc = 0x1CC2F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc2f4;
        }
    }
    ctx->pc = 0x1CC344u;
}
