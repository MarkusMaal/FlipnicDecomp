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

// Function: entry_00203fb0
// Address: 0x203fb0 - 0x203ff4
void entry_00203fb0_0x203fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203fb0_0x203fb0");
#endif

    switch (ctx->pc) {
        case 0x203fd0u: goto label_203fd0;
        default: break;
    }

    ctx->pc = 0x203fb0u;

    // 0x203fb0: 0x2ae20066  slti        $v0, $s7, 0x66
    ctx->pc = 0x203fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x203fb4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x203FB4u;
    {
        const bool branch_taken_0x203fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FB4u;
        // 0x203fb8: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fb4) {
            ctx->pc = 0x203FFCu;
            return;
        }
    }
    ctx->pc = 0x203FBCu;
    // 0x203fbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x203fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203fc4: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x203fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x203fc8: 0xc08145c  jal         func_205170
    ctx->pc = 0x203FC8u;
    SET_GPR_U32(ctx, 31, 0x203FD0u);
    ctx->pc = 0x203FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FC8u;
    // 0x203fcc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205170u, 0x203FC8u, 0x203FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FD0u;
label_203fd0:
    // 0x203fd0: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x203fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x203fd4: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x203fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x203fd8: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x203fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x203fdc: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x203fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x203fe0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203FE0u;
    {
        const bool branch_taken_0x203fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FE0u;
        // 0x203fe4: 0x82a821  addu        $s5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fe0) {
            ctx->pc = 0x203FF4u;
            return;
        }
    }
    ctx->pc = 0x203FE8u;
    // 0x203fe8: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x203fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x203fec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x203FECu;
    {
        const bool branch_taken_0x203fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FECu;
        // 0x203ff0: 0x83a201d0  lb          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fec) {
            ctx->pc = 0x204058u;
            return;
        }
    }
    ctx->pc = 0x203FF4u;
}
