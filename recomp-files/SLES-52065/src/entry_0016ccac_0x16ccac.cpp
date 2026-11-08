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

// Function: entry_0016ccac
// Address: 0x16ccac - 0x16ccc0
void entry_0016ccac_0x16ccac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ccac_0x16ccac");
#endif

    switch (ctx->pc) {
        case 0x16ccbcu: goto label_16ccbc;
        default: break;
    }

    ctx->pc = 0x16ccacu;

label_16ccac:
    // 0x16ccac: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16ccacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16ccb0:
    // 0x16ccb0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16ccb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16ccb4:
    // 0x16ccb4: 0x320f809  jalr        $t9
label_16ccb8:
    if (ctx->pc == 0x16CCB8u) {
        ctx->pc = 0x16CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCB4u;
        // 0x16ccb8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16CCBCu;
        goto label_16ccbc;
    }
    ctx->pc = 0x16CCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16CCBCu);
        ctx->pc = 0x16CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCB4u;
        // 0x16ccb8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CCB4u, 0x16CCBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16CCBCu;
label_16ccbc:
    // 0x16ccbc: 0xc6210210  lwc1        $f1, 0x210($s1)
    ctx->pc = 0x16ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x16ccc0u;
}
