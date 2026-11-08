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

// Function: entry_001feadc
// Address: 0x1feadc - 0x1feb00
void entry_001feadc_0x1feadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feadc_0x1feadc");
#endif

    switch (ctx->pc) {
        case 0x1feaecu: goto label_1feaec;
        default: break;
    }

    ctx->pc = 0x1feadcu;

    // 0x1feadc: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x1feadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1feae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1feae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feae4: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1FEAE4u;
    SET_GPR_U32(ctx, 31, 0x1FEAECu);
    ctx->pc = 0x1FEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAE4u;
    // 0x1feae8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1FEAE4u, 0x1FEAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAECu;
label_1feaec:
    // 0x1feaec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1feaecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feaf0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEAF0u;
    {
        const bool branch_taken_0x1feaf0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAF0u;
        // 0x1feaf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaf0) {
            ctx->pc = 0x1FEB00u;
            return;
        }
    }
    ctx->pc = 0x1FEAF8u;
    // 0x1feaf8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1FEAF8u;
    {
        const bool branch_taken_0x1feaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAF8u;
        // 0x1feafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaf8) {
            ctx->pc = 0x1FEC14u;
            return;
        }
    }
    ctx->pc = 0x1FEB00u;
}
