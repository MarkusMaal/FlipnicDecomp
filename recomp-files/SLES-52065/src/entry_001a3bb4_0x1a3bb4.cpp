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

// Function: entry_001a3bb4
// Address: 0x1a3bb4 - 0x1a3be4
void entry_001a3bb4_0x1a3bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3bb4_0x1a3bb4");
#endif

    switch (ctx->pc) {
        case 0x1a3bdcu: goto label_1a3bdc;
        default: break;
    }

    ctx->pc = 0x1a3bb4u;

    // 0x1a3bb4: 0x0  nop
    ctx->pc = 0x1a3bb4u;
    // NOP
    // 0x1a3bb8: 0x11a0000a  beqz        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3BB8u;
    {
        const bool branch_taken_0x1a3bb8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3bb8) {
            ctx->pc = 0x1A3BE4u;
            return;
        }
    }
    ctx->pc = 0x1A3BC0u;
    // 0x1a3bc0: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a3bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
    // 0x1a3bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bc8: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a3bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3bd0: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x1a3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1a3bd4: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A3BD4u;
    SET_GPR_U32(ctx, 31, 0x1A3BDCu);
    ctx->pc = 0x1A3BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BD4u;
    // 0x1a3bd8: 0xae220670  sw          $v0, 0x670($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A3BD4u, 0x1A3BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BDCu;
label_1a3bdc:
    // 0x1a3bdc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1A3BDCu;
    {
        const bool branch_taken_0x1a3bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3bdc) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3BE4u;
}
