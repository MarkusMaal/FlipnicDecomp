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

// Function: entry_0018dbf0
// Address: 0x18dbf0 - 0x18dc10
void entry_0018dbf0_0x18dbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dbf0_0x18dbf0");
#endif

    switch (ctx->pc) {
        case 0x18dc0cu: goto label_18dc0c;
        default: break;
    }

    ctx->pc = 0x18dbf0u;

    // 0x18dbf0: 0x8e220478  lw          $v0, 0x478($s1)
    ctx->pc = 0x18dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
    // 0x18dbf4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x18dbf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18dbf8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DBF8u;
    {
        const bool branch_taken_0x18dbf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DBF8u;
        // 0x18dbfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dbf8) {
            ctx->pc = 0x18DC10u;
            return;
        }
    }
    ctx->pc = 0x18DC00u;
    // 0x18dc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dc04: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18DC04u;
    SET_GPR_U32(ctx, 31, 0x18DC0Cu);
    ctx->pc = 0x18DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DC04u;
    // 0x18dc08: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18DC04u, 0x18DC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DC0Cu;
label_18dc0c:
    // 0x18dc0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18dc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18dc10u;
}
