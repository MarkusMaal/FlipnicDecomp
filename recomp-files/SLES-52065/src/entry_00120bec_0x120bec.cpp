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

// Function: entry_00120bec
// Address: 0x120bec - 0x120c04
void entry_00120bec_0x120bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120bec_0x120bec");
#endif

    switch (ctx->pc) {
        case 0x120c00u: goto label_120c00;
        default: break;
    }

    ctx->pc = 0x120becu;

label_120bec:
    // 0x120bec: 0x0  nop
    ctx->pc = 0x120becu;
    // NOP
label_120bf0:
    // 0x120bf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120bf4:
    // 0x120bf4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x120bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_120bf8:
    // 0x120bf8: 0x320f809  jalr        $t9
label_120bfc:
    if (ctx->pc == 0x120BFCu) {
        ctx->pc = 0x120BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BF8u;
        // 0x120bfc: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x120C00u;
        goto label_120c00;
    }
    ctx->pc = 0x120BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120C00u);
        ctx->pc = 0x120BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120BF8u;
        // 0x120bfc: 0x326500ff  andi        $a1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120BF8u, 0x120C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120C00u;
label_120c00:
    // 0x120c00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x120c04u;
}
