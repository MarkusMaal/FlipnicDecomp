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

// Function: entry_00202fcc
// Address: 0x202fcc - 0x203000
void entry_00202fcc_0x202fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202fcc_0x202fcc");
#endif

    switch (ctx->pc) {
        case 0x202fdcu: goto label_202fdc;
        case 0x202ff0u: goto label_202ff0;
        default: break;
    }

    ctx->pc = 0x202fccu;

    // 0x202fcc: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x202FCCu;
    {
        const bool branch_taken_0x202fcc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x202FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FCCu;
        // 0x202fd0: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fcc) {
            ctx->pc = 0x203000u;
            return;
        }
    }
    ctx->pc = 0x202FD4u;
    // 0x202fd4: 0xc08005a  jal         func_200168
    ctx->pc = 0x202FD4u;
    SET_GPR_U32(ctx, 31, 0x202FDCu);
    ctx->pc = 0x202FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FD4u;
    // 0x202fd8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x202FD4u, 0x202FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FDCu;
label_202fdc:
    // 0x202fdc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x202fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x202fe0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202fe4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x202fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202fe8: 0xc07ffce  jal         func_1FFF38
    ctx->pc = 0x202FE8u;
    SET_GPR_U32(ctx, 31, 0x202FF0u);
    ctx->pc = 0x202FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FE8u;
    // 0x202fec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF38u, 0x202FE8u, 0x202FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FF0u;
label_202ff0:
    // 0x202ff0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x202ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202ff4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ff8: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202FF8u;
    SET_GPR_U32(ctx, 31, 0x203000u);
    ctx->pc = 0x202FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FF8u;
    // 0x202ffc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202FF8u, 0x203000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203000u;
}
