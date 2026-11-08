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

// Function: entry_001bbeac
// Address: 0x1bbeac - 0x1bbf04
void entry_001bbeac_0x1bbeac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbeac_0x1bbeac");
#endif

    switch (ctx->pc) {
        case 0x1bbed8u: goto label_1bbed8;
        case 0x1bbefcu: goto label_1bbefc;
        default: break;
    }

    ctx->pc = 0x1bbeacu;

    // 0x1bbeac: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BBEACu;
    {
        const bool branch_taken_0x1bbeac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbeac) {
            ctx->pc = 0x1BBF08u;
            return;
        }
    }
    ctx->pc = 0x1BBEB4u;
    // 0x1bbeb4: 0x26830003  addiu       $v1, $s4, 0x3
    ctx->pc = 0x1bbeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    // 0x1bbeb8: 0x32820003  andi        $v0, $s4, 0x3
    ctx->pc = 0x1bbeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x1bbebc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1bbebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbec4: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x1bbec4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x1bbec8: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1bbec8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1bbecc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1bbeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1bbed0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BBED0u;
    SET_GPR_U32(ctx, 31, 0x1BBED8u);
    ctx->pc = 0x1BBED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBED0u;
    // 0x1bbed4: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BBED0u, 0x1BBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBED8u;
label_1bbed8:
    // 0x1bbed8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1bbed8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbedc: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBEDCu;
    {
        const bool branch_taken_0x1bbedc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbedc) {
            ctx->pc = 0x1BBF04u;
            return;
        }
    }
    ctx->pc = 0x1BBEE4u;
    // 0x1bbee4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bbee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bbee8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbeec: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bbef0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbef4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBEF4u;
    SET_GPR_U32(ctx, 31, 0x1BBEFCu);
    ctx->pc = 0x1BBEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBEF4u;
    // 0x1bbef8: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBEF4u, 0x1BBEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEFCu;
label_1bbefc:
    // 0x1bbefc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBEFCu;
    SET_GPR_U32(ctx, 31, 0x1BBF04u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBEFCu, 0x1BBF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF04u;
}
