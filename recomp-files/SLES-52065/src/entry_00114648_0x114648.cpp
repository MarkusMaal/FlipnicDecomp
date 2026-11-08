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

// Function: entry_00114648
// Address: 0x114648 - 0x11467c
void entry_00114648_0x114648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114648_0x114648");
#endif

    switch (ctx->pc) {
        case 0x114668u: goto label_114668;
        default: break;
    }

    ctx->pc = 0x114648u;

    // 0x114648: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x11464c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11464cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x114650: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x114650u;
    {
        const bool branch_taken_0x114650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114650u;
        // 0x114654: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114650) {
            ctx->pc = 0x11467Cu;
            return;
        }
    }
    ctx->pc = 0x114658u;
    // 0x114658: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x114658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11465c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11465cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114660: 0xc05bc3c  jal         func_16F0F0
    ctx->pc = 0x114660u;
    SET_GPR_U32(ctx, 31, 0x114668u);
    ctx->pc = 0x114664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114660u;
    // 0x114664: 0x24847520  addiu       $a0, $a0, 0x7520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F0F0u, 0x114660u, 0x114668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114668u;
label_114668:
    // 0x114668: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114668u;
    {
        const bool branch_taken_0x114668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114668u;
        // 0x11466c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114668) {
            ctx->pc = 0x11467Cu;
            return;
        }
    }
    ctx->pc = 0x114670u;
    // 0x114670: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x114670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x114674: 0xc045018  jal         func_114060
    ctx->pc = 0x114674u;
    SET_GPR_U32(ctx, 31, 0x11467Cu);
    ctx->pc = 0x114678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114674u;
    // 0x114678: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x114060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114060u, 0x114674u, 0x11467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11467Cu;
}
