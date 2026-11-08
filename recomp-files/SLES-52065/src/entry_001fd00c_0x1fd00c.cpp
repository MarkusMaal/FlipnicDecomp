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

// Function: entry_001fd00c
// Address: 0x1fd00c - 0x1fd060
void entry_001fd00c_0x1fd00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd00c_0x1fd00c");
#endif

    switch (ctx->pc) {
        case 0x1fd028u: goto label_1fd028;
        case 0x1fd04cu: goto label_1fd04c;
        case 0x1fd05cu: goto label_1fd05c;
        default: break;
    }

    ctx->pc = 0x1fd00cu;

    // 0x1fd00c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1fd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd010: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1fd010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fd014: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD014u;
    {
        const bool branch_taken_0x1fd014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD014u;
        // 0x1fd018: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd014) {
            ctx->pc = 0x1FD060u;
            return;
        }
    }
    ctx->pc = 0x1FD01Cu;
    // 0x1fd01c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1fd01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fd020: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x1FD020u;
    SET_GPR_U32(ctx, 31, 0x1FD028u);
    ctx->pc = 0x1FD024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD020u;
    // 0x1fd024: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x1FD020u, 0x1FD028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD028u;
label_1fd028:
    // 0x1fd028: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1fd028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1fd02c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x1fd02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fd030: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1fd034: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1fd034u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fd038: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1fd038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1fd03c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1fd03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1fd040: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1fd040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1fd044: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1FD044u;
    SET_GPR_U32(ctx, 31, 0x1FD04Cu);
    ctx->pc = 0x1FD048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD044u;
    // 0x1fd048: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1FD044u, 0x1FD04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD04Cu;
label_1fd04c:
    // 0x1fd04c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1fd04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fd050: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd054: 0xc08009a  jal         func_200268
    ctx->pc = 0x1FD054u;
    SET_GPR_U32(ctx, 31, 0x1FD05Cu);
    ctx->pc = 0x1FD058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD054u;
    // 0x1fd058: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x1FD054u, 0x1FD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD05Cu;
label_1fd05c:
    // 0x1fd05c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1fd05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x1fd060u;
}
