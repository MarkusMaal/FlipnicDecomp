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

// Function: entry_00204cbc
// Address: 0x204cbc - 0x204d10
void entry_00204cbc_0x204cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204cbc_0x204cbc");
#endif

    switch (ctx->pc) {
        case 0x204cc8u: goto label_204cc8;
        default: break;
    }

    ctx->pc = 0x204cbcu;

    // 0x204cbc: 0xdfa40200  ld          $a0, 0x200($sp)
    ctx->pc = 0x204cbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x204cc0: 0xc082178  jal         func_2085E0
    ctx->pc = 0x204CC0u;
    SET_GPR_U32(ctx, 31, 0x204CC8u);
    ctx->pc = 0x204CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CC0u;
    // 0x204cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x204CC0u, 0x204CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CC8u;
label_204cc8:
    // 0x204cc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x204CC8u;
    {
        const bool branch_taken_0x204cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CC8u;
        // 0x204ccc: 0x8fa201e0  lw          $v0, 0x1E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cc8) {
            ctx->pc = 0x204D10u;
            return;
        }
    }
    ctx->pc = 0x204CD0u;
    // 0x204cd0: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204cd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204cd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204cdc: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204ce0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204ce4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204ce8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x204ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204cec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204cf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204cf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x204cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204cf8: 0x28650008  slti        $a1, $v1, 0x8
    ctx->pc = 0x204cf8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204cfc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x204cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x204d00: 0x14a0003e  bnez        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x204D00u;
    {
        const bool branch_taken_0x204d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x204D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D00u;
        // 0x204d04: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d00) {
            ctx->pc = 0x204DFCu;
            return;
        }
    }
    ctx->pc = 0x204D08u;
    // 0x204d08: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x204D08u;
    {
        const bool branch_taken_0x204d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D08u;
        // 0x204d0c: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d08) {
            ctx->pc = 0x204DECu;
            return;
        }
    }
    ctx->pc = 0x204D10u;
}
