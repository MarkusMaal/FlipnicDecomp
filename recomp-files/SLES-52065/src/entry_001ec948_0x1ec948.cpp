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

// Function: entry_001ec948
// Address: 0x1ec948 - 0x1ec974
void entry_001ec948_0x1ec948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec948_0x1ec948");
#endif

    ctx->pc = 0x1ec948u;

    // 0x1ec948: 0x1880004f  blez        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1EC948u;
    {
        const bool branch_taken_0x1ec948 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1EC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC948u;
        // 0x1ec94c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec948) {
            ctx->pc = 0x1ECA88u;
            return;
        }
    }
    ctx->pc = 0x1EC950u;
    // 0x1ec950: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EC950u;
    {
        const bool branch_taken_0x1ec950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec950) {
            ctx->pc = 0x1EC954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC950u;
            // 0x1ec954: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC9B8u;
            return;
        }
    }
    ctx->pc = 0x1EC958u;
    // 0x1ec958: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ec958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ec95c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ec95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ec960: 0x2c420141  sltiu       $v0, $v0, 0x141
    ctx->pc = 0x1ec960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x1ec964: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC964u;
    {
        const bool branch_taken_0x1ec964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC964u;
        // 0x1ec968: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec964) {
            ctx->pc = 0x1EC974u;
            return;
        }
    }
    ctx->pc = 0x1EC96Cu;
    // 0x1ec96c: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1EC96Cu;
    SET_GPR_U32(ctx, 31, 0x1EC974u);
    ctx->pc = 0x1EC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC96Cu;
    // 0x1ec970: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1EC96Cu, 0x1EC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC974u;
}
