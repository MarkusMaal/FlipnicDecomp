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

// Function: entry_00199910
// Address: 0x199910 - 0x19993c
void entry_00199910_0x199910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199910_0x199910");
#endif

    switch (ctx->pc) {
        case 0x199934u: goto label_199934;
        default: break;
    }

    ctx->pc = 0x199910u;

label_199910:
    // 0x199910: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x199910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_199914:
    // 0x199914: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x199914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_199918:
    // 0x199918: 0x128000a9  beqz        $s4, . + 4 + (0xA9 << 2)
label_19991c:
    if (ctx->pc == 0x19991Cu) {
        ctx->pc = 0x19991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199918u;
        // 0x19991c: 0xac6002dc  sw          $zero, 0x2DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199920u;
        goto label_199920;
    }
    ctx->pc = 0x199918u;
    {
        const bool branch_taken_0x199918 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199918u;
        // 0x19991c: 0xac6002dc  sw          $zero, 0x2DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199918) {
            ctx->pc = 0x199BC0u;
            return;
        }
    }
    ctx->pc = 0x199920u;
label_199920:
    // 0x199920: 0x8e99031c  lw          $t9, 0x31C($s4)
    ctx->pc = 0x199920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
label_199924:
    // 0x199924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_199928:
    // 0x199928: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x199928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19992c:
    // 0x19992c: 0x320f809  jalr        $t9
label_199930:
    if (ctx->pc == 0x199930u) {
        ctx->pc = 0x199930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19992Cu;
        // 0x199930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199934u;
        goto label_199934;
    }
    ctx->pc = 0x19992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199934u);
        ctx->pc = 0x199930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19992Cu;
        // 0x199930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19992Cu, 0x199934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199934u;
label_199934:
    // 0x199934: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_199938:
    if (ctx->pc == 0x199938u) {
        ctx->pc = 0x199938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199934u;
        // 0x199938: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19993Cu;
        goto label_fallthrough_0x199934;
    }
    ctx->pc = 0x199934u;
    {
        const bool branch_taken_0x199934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199934u;
        // 0x199938: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199934) {
            ctx->pc = 0x199BC4u;
            return;
        }
    }
label_fallthrough_0x199934:
    ctx->pc = 0x19993Cu;
}
