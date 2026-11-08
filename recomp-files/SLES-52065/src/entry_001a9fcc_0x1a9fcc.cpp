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

// Function: entry_001a9fcc
// Address: 0x1a9fcc - 0x1aa004
void entry_001a9fcc_0x1a9fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9fcc_0x1a9fcc");
#endif

    switch (ctx->pc) {
        case 0x1a9fdcu: goto label_1a9fdc;
        default: break;
    }

    ctx->pc = 0x1a9fccu;

label_1a9fcc:
    // 0x1a9fcc: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1a9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x1a9fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9fd4: 0xc069ba0  jal         func_1A6E80
    ctx->pc = 0x1A9FD4u;
    SET_GPR_U32(ctx, 31, 0x1A9FDCu);
    ctx->pc = 0x1A9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FD4u;
    // 0x1a9fd8: 0x24440770  addiu       $a0, $v0, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E80u, 0x1A9FD4u, 0x1A9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FDCu;
label_1a9fdc:
    // 0x1a9fdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a9fe0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a9fe4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A9FE4u;
    {
        const bool branch_taken_0x1a9fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FE4u;
        // 0x1a9fe8: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9fe4) {
            ctx->pc = 0x1A9FCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9fcc;
        }
    }
    ctx->pc = 0x1A9FECu;
    // 0x1a9fec: 0x8ea80690  lw          $t0, 0x690($s5)
    ctx->pc = 0x1a9fecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1680)));
    // 0x1a9ff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9ff4: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9FF4u;
    {
        const bool branch_taken_0x1a9ff4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FF4u;
        // 0x1a9ff8: 0x8f838714  lw          $v1, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ff4) {
            ctx->pc = 0x1AA004u;
            return;
        }
    }
    ctx->pc = 0x1A9FFCu;
    // 0x1a9ffc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A9FFCu;
    {
        const bool branch_taken_0x1a9ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FFCu;
        // 0x1aa000: 0x24107530  addiu       $s0, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ffc) {
            ctx->pc = 0x1AA008u;
            return;
        }
    }
    ctx->pc = 0x1AA004u;
}
