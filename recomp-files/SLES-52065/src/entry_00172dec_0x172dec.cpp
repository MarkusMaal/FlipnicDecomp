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

// Function: entry_00172dec
// Address: 0x172dec - 0x172e0c
void entry_00172dec_0x172dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172dec_0x172dec");
#endif

    switch (ctx->pc) {
        case 0x172e04u: goto label_172e04;
        default: break;
    }

    ctx->pc = 0x172decu;

label_172dec:
    // 0x172dec: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172df0:
    // 0x172df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x172df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172df4:
    // 0x172df4: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172df8:
    // 0x172df8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172dfc:
    // 0x172dfc: 0x320f809  jalr        $t9
label_172e00:
    if (ctx->pc == 0x172E00u) {
        ctx->pc = 0x172E04u;
        goto label_172e04;
    }
    ctx->pc = 0x172DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172E04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172DFCu, 0x172E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172E04u;
label_172e04:
    // 0x172e04: 0x10000055  b           . + 4 + (0x55 << 2)
label_172e08:
    if (ctx->pc == 0x172E08u) {
        ctx->pc = 0x172E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E04u;
        // 0x172e08: 0x8e226020  lw          $v0, 0x6020($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172E0Cu;
        goto label_fallthrough_0x172e04;
    }
    ctx->pc = 0x172E04u;
    {
        const bool branch_taken_0x172e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E04u;
        // 0x172e08: 0x8e226020  lw          $v0, 0x6020($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e04) {
            ctx->pc = 0x172F5Cu;
            return;
        }
    }
label_fallthrough_0x172e04:
    ctx->pc = 0x172E0Cu;
}
