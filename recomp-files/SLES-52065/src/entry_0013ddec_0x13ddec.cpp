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

// Function: entry_0013ddec
// Address: 0x13ddec - 0x13de14
void entry_0013ddec_0x13ddec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ddec_0x13ddec");
#endif

    switch (ctx->pc) {
        case 0x13de00u: goto label_13de00;
        default: break;
    }

    ctx->pc = 0x13ddecu;

label_13ddec:
    // 0x13ddec: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x13ddecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_13ddf0:
    // 0x13ddf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13ddf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13ddf4:
    // 0x13ddf4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13ddf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13ddf8:
    // 0x13ddf8: 0x320f809  jalr        $t9
label_13ddfc:
    if (ctx->pc == 0x13DDFCu) {
        ctx->pc = 0x13DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDF8u;
        // 0x13ddfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DE00u;
        goto label_13de00;
    }
    ctx->pc = 0x13DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DE00u);
        ctx->pc = 0x13DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDF8u;
        // 0x13ddfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DDF8u, 0x13DE00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DE00u;
label_13de00:
    // 0x13de00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13de04:
    if (ctx->pc == 0x13DE04u) {
        ctx->pc = 0x13DE08u;
        goto label_13de08;
    }
    ctx->pc = 0x13DE00u;
    {
        const bool branch_taken_0x13de00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13de00) {
            ctx->pc = 0x13DE14u;
            return;
        }
    }
    ctx->pc = 0x13DE08u;
label_13de08:
    // 0x13de08: 0x8ea30198  lw          $v1, 0x198($s5)
    ctx->pc = 0x13de08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
label_13de0c:
    // 0x13de0c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_13de10:
    // 0x13de10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13de10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13de14u;
}
