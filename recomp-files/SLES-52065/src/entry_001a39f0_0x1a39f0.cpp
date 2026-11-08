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

// Function: entry_001a39f0
// Address: 0x1a39f0 - 0x1a3a74
void entry_001a39f0_0x1a39f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a39f0_0x1a39f0");
#endif

    switch (ctx->pc) {
        case 0x1a3a04u: goto label_1a3a04;
        case 0x1a3a18u: goto label_1a3a18;
        case 0x1a3a30u: goto label_1a3a30;
        case 0x1a3a3cu: goto label_1a3a3c;
        case 0x1a3a6cu: goto label_1a3a6c;
        default: break;
    }

    ctx->pc = 0x1a39f0u;

    // 0x1a39f0: 0x8e220680  lw          $v0, 0x680($s1)
    ctx->pc = 0x1a39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1664)));
    // 0x1a39f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1a39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a39f8: 0xae220680  sw          $v0, 0x680($s1)
    ctx->pc = 0x1a39f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 2));
    // 0x1a39fc: 0xc04bde8  jal         func_12F7A0
    ctx->pc = 0x1A39FCu;
    SET_GPR_U32(ctx, 31, 0x1A3A04u);
    ctx->pc = 0x1A3A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A39FCu;
    // 0x1a3a00: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F7A0u, 0x1A39FCu, 0x1A3A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A04u;
label_1a3a04:
    // 0x1a3a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a3a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a10: 0xc064b08  jal         func_192C20
    ctx->pc = 0x1A3A10u;
    SET_GPR_U32(ctx, 31, 0x1A3A18u);
    ctx->pc = 0x1A3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A10u;
    // 0x1a3a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x1A3A10u, 0x1A3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A18u;
label_1a3a18:
    // 0x1a3a18: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x1a3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1a3a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a20: 0x8e460034  lw          $a2, 0x34($s2)
    ctx->pc = 0x1a3a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1a3a24: 0x8e270678  lw          $a3, 0x678($s1)
    ctx->pc = 0x1a3a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x1a3a28: 0xc064f7c  jal         func_193DF0
    ctx->pc = 0x1A3A28u;
    SET_GPR_U32(ctx, 31, 0x1A3A30u);
    ctx->pc = 0x1A3A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A28u;
    // 0x1a3a2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A3A28u, 0x1A3A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A30u;
label_1a3a30:
    // 0x1a3a30: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1a3a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1a3a34: 0xc064ee0  jal         func_193B80
    ctx->pc = 0x1A3A34u;
    SET_GPR_U32(ctx, 31, 0x1A3A3Cu);
    ctx->pc = 0x1A3A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A34u;
    // 0x1a3a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B80u, 0x1A3A34u, 0x1A3A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A3Cu;
label_1a3a3c:
    // 0x1a3a3c: 0x8e240684  lw          $a0, 0x684($s1)
    ctx->pc = 0x1a3a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
    // 0x1a3a40: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1a3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a3a44: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x1a3a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a3a48: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1a3a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a3a4c: 0xae230670  sw          $v1, 0x670($s1)
    ctx->pc = 0x1a3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 3));
    // 0x1a3a50: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1a3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a3a54: 0x146000d0  bnez        $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1A3A54u;
    {
        const bool branch_taken_0x1a3a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a54) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3A5Cu;
    // 0x1a3a5c: 0xae20067c  sw          $zero, 0x67C($s1)
    ctx->pc = 0x1a3a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 0));
    // 0x1a3a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a64: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A3A64u;
    SET_GPR_U32(ctx, 31, 0x1A3A6Cu);
    ctx->pc = 0x1A3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A64u;
    // 0x1a3a68: 0xae200790  sw          $zero, 0x790($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A3A64u, 0x1A3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3A6Cu;
label_1a3a6c:
    // 0x1a3a6c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1A3A6Cu;
    {
        const bool branch_taken_0x1a3a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a6c) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3A74u;
}
