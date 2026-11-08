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

// Function: caseD_14
// Address: 0x195ce4 - 0x195d10
void caseD_14_0x195ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x195ce4");
#endif

    switch (ctx->pc) {
        case 0x195ce4u: goto label_195ce4;
        case 0x195ce8u: goto label_195ce8;
        case 0x195cecu: goto label_195cec;
        case 0x195cf0u: goto label_195cf0;
        case 0x195cf4u: goto label_195cf4;
        case 0x195cf8u: goto label_195cf8;
        case 0x195cfcu: goto label_195cfc;
        case 0x195d00u: goto label_195d00;
        case 0x195d04u: goto label_195d04;
        case 0x195d08u: goto label_195d08;
        case 0x195d0cu: goto label_195d0c;
        default: break;
    }

    ctx->pc = 0x195ce4u;

label_195ce4:
    // 0x195ce4: 0x0  nop
    ctx->pc = 0x195ce4u;
    // NOP
label_195ce8:
    // 0x195ce8: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_195cec:
    // 0x195cec: 0xc05f58c  jal         func_17D630
label_195cf0:
    if (ctx->pc == 0x195CF0u) {
        ctx->pc = 0x195CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CECu;
        // 0x195cf0: 0x8e12002c  lw          $s2, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CF4u;
        goto label_195cf4;
    }
    ctx->pc = 0x195CECu;
    SET_GPR_U32(ctx, 31, 0x195CF4u);
    ctx->pc = 0x195CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CECu;
    // 0x195cf0: 0x8e12002c  lw          $s2, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x195CECu, 0x195CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CF4u;
label_195cf4:
    // 0x195cf4: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x195cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
label_195cf8:
    // 0x195cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195cfc:
    // 0x195cfc: 0x2442f270  addiu       $v0, $v0, -0xD90
    ctx->pc = 0x195cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963824));
label_195d00:
    // 0x195d00: 0x40f809  jalr        $v0
label_195d04:
    if (ctx->pc == 0x195D04u) {
        ctx->pc = 0x195D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D00u;
        // 0x195d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D08u;
        goto label_195d08;
    }
    ctx->pc = 0x195D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195D08u);
        ctx->pc = 0x195D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D00u;
        // 0x195d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D00u, 0x195D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D08u;
label_195d08:
    // 0x195d08: 0x10000016  b           . + 4 + (0x16 << 2)
label_195d0c:
    if (ctx->pc == 0x195D0Cu) {
        ctx->pc = 0x195D10u;
        goto label_fallthrough_0x195d08;
    }
    ctx->pc = 0x195D08u;
    {
        const bool branch_taken_0x195d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195d08) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
label_fallthrough_0x195d08:
    ctx->pc = 0x195D10u;
}
