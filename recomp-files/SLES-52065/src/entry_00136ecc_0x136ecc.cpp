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

// Function: entry_00136ecc
// Address: 0x136ecc - 0x136ee8
void entry_00136ecc_0x136ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136ecc_0x136ecc");
#endif

    switch (ctx->pc) {
        case 0x136ee0u: goto label_136ee0;
        default: break;
    }

    ctx->pc = 0x136eccu;

label_136ecc:
    // 0x136ecc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x136eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_136ed0:
    // 0x136ed0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136ed4:
    // 0x136ed4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x136ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_136ed8:
    // 0x136ed8: 0x320f809  jalr        $t9
label_136edc:
    if (ctx->pc == 0x136EDCu) {
        ctx->pc = 0x136EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ED8u;
        // 0x136edc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EE0u;
        goto label_136ee0;
    }
    ctx->pc = 0x136ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136EE0u);
        ctx->pc = 0x136EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ED8u;
        // 0x136edc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136ED8u, 0x136EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136EE0u;
label_136ee0:
    // 0x136ee0: 0xc048974  jal         func_1225D0
label_136ee4:
    if (ctx->pc == 0x136EE4u) {
        ctx->pc = 0x136EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EE0u;
        // 0x136ee4: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EE8u;
        goto label_fallthrough_0x136ee0;
    }
    ctx->pc = 0x136EE0u;
    SET_GPR_U32(ctx, 31, 0x136EE8u);
    ctx->pc = 0x136EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EE0u;
    // 0x136ee4: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x136EE0u, 0x136EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x136ee0:
    ctx->pc = 0x136EE8u;
}
