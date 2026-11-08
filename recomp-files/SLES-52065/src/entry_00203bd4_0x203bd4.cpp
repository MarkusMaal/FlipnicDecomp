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

// Function: entry_00203bd4
// Address: 0x203bd4 - 0x203c24
void entry_00203bd4_0x203bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203bd4_0x203bd4");
#endif

    switch (ctx->pc) {
        case 0x203c1cu: goto label_203c1c;
        default: break;
    }

    ctx->pc = 0x203bd4u;

    // 0x203bd4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x203bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203bd8: 0x939023  subu        $s2, $a0, $s3
    ctx->pc = 0x203bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x203bdc: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x203BDCu;
    {
        const bool branch_taken_0x203bdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x203bdc) {
            ctx->pc = 0x203C30u;
            return;
        }
    }
    ctx->pc = 0x203BE4u;
    // 0x203be4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x203be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x203be8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x203be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x203bec: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x203becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x203bf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x203bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x203bf4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x203bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x203bf8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x203bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x203bfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x203bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203c00: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x203c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x203c04: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x203c04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x203c08: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203C08u;
    {
        const bool branch_taken_0x203c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x203C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C08u;
        // 0x203c0c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c08) {
            ctx->pc = 0x203C24u;
            return;
        }
    }
    ctx->pc = 0x203C10u;
    // 0x203c10: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x203c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x203c14: 0xc080e4c  jal         func_203930
    ctx->pc = 0x203C14u;
    SET_GPR_U32(ctx, 31, 0x203C1Cu);
    ctx->pc = 0x203C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203C14u;
    // 0x203c18: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203930u, 0x203C14u, 0x203C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203C1Cu;
label_203c1c:
    // 0x203c1c: 0x144004d6  bnez        $v0, . + 4 + (0x4D6 << 2)
    ctx->pc = 0x203C1Cu;
    {
        const bool branch_taken_0x203c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C1Cu;
        // 0x203c20: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c1c) {
            ctx->pc = 0x204F78u;
            return;
        }
    }
    ctx->pc = 0x203C24u;
}
