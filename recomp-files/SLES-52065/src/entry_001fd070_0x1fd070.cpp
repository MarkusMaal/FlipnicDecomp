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

// Function: entry_001fd070
// Address: 0x1fd070 - 0x1fd0b4
void entry_001fd070_0x1fd070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd070_0x1fd070");
#endif

    switch (ctx->pc) {
        case 0x1fd084u: goto label_1fd084;
        case 0x1fd0a8u: goto label_1fd0a8;
        default: break;
    }

    ctx->pc = 0x1fd070u;

    // 0x1fd070: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd074: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd078: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd07c: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD07Cu;
    SET_GPR_U32(ctx, 31, 0x1FD084u);
    ctx->pc = 0x1FD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD07Cu;
    // 0x1fd080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD07Cu, 0x1FD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD084u;
label_1fd084:
    // 0x1fd084: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1fd084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1fd088: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd08c: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FD08Cu;
    {
        const bool branch_taken_0x1fd08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD08Cu;
        // 0x1fd090: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd08c) {
            ctx->pc = 0x1FD0B4u;
            return;
        }
    }
    ctx->pc = 0x1FD094u;
    // 0x1fd094: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fd094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd098: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd09c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0a0: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD0A0u;
    SET_GPR_U32(ctx, 31, 0x1FD0A8u);
    ctx->pc = 0x1FD0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0A0u;
    // 0x1fd0a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD0A0u, 0x1FD0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0A8u;
label_1fd0a8:
    // 0x1fd0a8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1fd0ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FD0ACu;
    {
        const bool branch_taken_0x1fd0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0ACu;
        // 0x1fd0b0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0ac) {
            ctx->pc = 0x1FD0E4u;
            return;
        }
    }
    ctx->pc = 0x1FD0B4u;
}
