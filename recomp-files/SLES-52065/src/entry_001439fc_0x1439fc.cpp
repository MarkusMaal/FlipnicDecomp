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

// Function: entry_001439fc
// Address: 0x1439fc - 0x143a34
void entry_001439fc_0x1439fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001439fc_0x1439fc");
#endif

    switch (ctx->pc) {
        case 0x143a14u: goto label_143a14;
        default: break;
    }

    ctx->pc = 0x1439fcu;

    // 0x1439fc: 0x0  nop
    ctx->pc = 0x1439fcu;
    // NOP
    // 0x143a00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x143a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x143a04: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x143A04u;
    {
        const bool branch_taken_0x143a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x143A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A04u;
        // 0x143a08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a04) {
            ctx->pc = 0x143A34u;
            return;
        }
    }
    ctx->pc = 0x143A0Cu;
    // 0x143a0c: 0xc050ea0  jal         func_143A80
    ctx->pc = 0x143A0Cu;
    SET_GPR_U32(ctx, 31, 0x143A14u);
    ctx->pc = 0x143A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A80u, 0x143A0Cu, 0x143A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A14u;
label_143a14:
    // 0x143a14: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x143a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x143a18: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x143a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x143a1c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x143a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x143a20: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x143a20u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
    // 0x143a24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x143a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x143a28: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x143a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143a2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x143a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x143a30: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x143a30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x143a34u;
}
