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

// Function: entry_001a4098
// Address: 0x1a4098 - 0x1a4104
void entry_001a4098_0x1a4098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4098_0x1a4098");
#endif

    switch (ctx->pc) {
        case 0x1a40a0u: goto label_1a40a0;
        default: break;
    }

    ctx->pc = 0x1a4098u;

    // 0x1a4098: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x1A4098u;
    SET_GPR_U32(ctx, 31, 0x1A40A0u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A4098u, 0x1A40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40A0u;
label_1a40a0:
    // 0x1a40a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a40a4: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x1a40a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1a40a8: 0x104401f0  beq         $v0, $a0, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x1A40A8u;
    {
        const bool branch_taken_0x1a40a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a40a8) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A40B0u;
    // 0x1a40b0: 0x104301ee  beq         $v0, $v1, . + 4 + (0x1EE << 2)
    ctx->pc = 0x1A40B0u;
    {
        const bool branch_taken_0x1a40b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40b0) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A40B8u;
    // 0x1a40b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a40bc: 0x104301e2  beq         $v0, $v1, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x1A40BCu;
    {
        const bool branch_taken_0x1a40bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40bc) {
            ctx->pc = 0x1A4848u;
            return;
        }
    }
    ctx->pc = 0x1A40C4u;
    // 0x1a40c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a40c8: 0x104301b7  beq         $v0, $v1, . + 4 + (0x1B7 << 2)
    ctx->pc = 0x1A40C8u;
    {
        const bool branch_taken_0x1a40c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40c8) {
            ctx->pc = 0x1A47A8u;
            return;
        }
    }
    ctx->pc = 0x1A40D0u;
    // 0x1a40d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a40d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a40d4: 0x10430119  beq         $v0, $v1, . + 4 + (0x119 << 2)
    ctx->pc = 0x1A40D4u;
    {
        const bool branch_taken_0x1a40d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40d4) {
            ctx->pc = 0x1A453Cu;
            return;
        }
    }
    ctx->pc = 0x1A40DCu;
    // 0x1a40dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a40e0: 0x10430104  beq         $v0, $v1, . + 4 + (0x104 << 2)
    ctx->pc = 0x1A40E0u;
    {
        const bool branch_taken_0x1a40e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40e0) {
            ctx->pc = 0x1A44F4u;
            return;
        }
    }
    ctx->pc = 0x1A40E8u;
    // 0x1a40e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a40ec: 0x104300d0  beq         $v0, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1A40ECu;
    {
        const bool branch_taken_0x1a40ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a40ec) {
            ctx->pc = 0x1A4430u;
            return;
        }
    }
    ctx->pc = 0x1A40F4u;
    // 0x1a40f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A40F4u;
    {
        const bool branch_taken_0x1a40f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a40f4) {
            ctx->pc = 0x1A4104u;
            return;
        }
    }
    ctx->pc = 0x1A40FCu;
    // 0x1a40fc: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x1A40FCu;
    {
        const bool branch_taken_0x1a40fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40FCu;
        // 0x1a4100: 0x8e220670  lw          $v0, 0x670($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40fc) {
            ctx->pc = 0x1A4870u;
            return;
        }
    }
    ctx->pc = 0x1A4104u;
}
