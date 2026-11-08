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

// Function: entry_001a4bb8
// Address: 0x1a4bb8 - 0x1a4bf4
void entry_001a4bb8_0x1a4bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4bb8_0x1a4bb8");
#endif

    switch (ctx->pc) {
        case 0x1a4bdcu: goto label_1a4bdc;
        case 0x1a4bf0u: goto label_1a4bf0;
        default: break;
    }

    ctx->pc = 0x1a4bb8u;

label_1a4bb8:
    // 0x1a4bb8: 0x8e030680  lw          $v1, 0x680($s0)
    ctx->pc = 0x1a4bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
label_1a4bbc:
    // 0x1a4bbc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1a4bc0:
    if (ctx->pc == 0x1A4BC0u) {
        ctx->pc = 0x1A4BC4u;
        goto label_1a4bc4;
    }
    ctx->pc = 0x1A4BBCu;
    {
        const bool branch_taken_0x1a4bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4bbc) {
            ctx->pc = 0x1A4BF4u;
            return;
        }
    }
    ctx->pc = 0x1A4BC4u;
label_1a4bc4:
    // 0x1a4bc4: 0x8e040684  lw          $a0, 0x684($s0)
    ctx->pc = 0x1a4bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_1a4bc8:
    // 0x1a4bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a4bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4bcc:
    // 0x1a4bcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a4bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4bd0:
    // 0x1a4bd0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a4bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a4bd4:
    // 0x1a4bd4: 0x320f809  jalr        $t9
label_1a4bd8:
    if (ctx->pc == 0x1A4BD8u) {
        ctx->pc = 0x1A4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BD4u;
        // 0x1a4bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BDCu;
        goto label_1a4bdc;
    }
    ctx->pc = 0x1A4BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4BDCu);
        ctx->pc = 0x1A4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BD4u;
        // 0x1a4bd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BD4u, 0x1A4BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4BDCu;
label_1a4bdc:
    // 0x1a4bdc: 0x8e040684  lw          $a0, 0x684($s0)
    ctx->pc = 0x1a4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1668)));
label_1a4be0:
    // 0x1a4be0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4be4:
    // 0x1a4be4: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a4be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a4be8:
    // 0x1a4be8: 0x320f809  jalr        $t9
label_1a4bec:
    if (ctx->pc == 0x1A4BECu) {
        ctx->pc = 0x1A4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BE8u;
        // 0x1a4bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BF0u;
        goto label_1a4bf0;
    }
    ctx->pc = 0x1A4BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4BF0u);
        ctx->pc = 0x1A4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BE8u;
        // 0x1a4bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BE8u, 0x1A4BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4BF0u;
label_1a4bf0:
    // 0x1a4bf0: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x1a4bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    ctx->pc = 0x1a4bf4u;
}
