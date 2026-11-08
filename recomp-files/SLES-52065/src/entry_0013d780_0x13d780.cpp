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

// Function: entry_0013d780
// Address: 0x13d780 - 0x13d7dc
void entry_0013d780_0x13d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d780_0x13d780");
#endif

    switch (ctx->pc) {
        case 0x13d788u: goto label_13d788;
        case 0x13d790u: goto label_13d790;
        case 0x13d79cu: goto label_13d79c;
        case 0x13d7b4u: goto label_13d7b4;
        case 0x13d7c0u: goto label_13d7c0;
        default: break;
    }

    ctx->pc = 0x13d780u;

    // 0x13d780: 0xc050714  jal         func_141C50
    ctx->pc = 0x13D780u;
    SET_GPR_U32(ctx, 31, 0x13D788u);
    ctx->pc = 0x141C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141C50u, 0x13D780u, 0x13D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D788u;
label_13d788:
    // 0x13d788: 0xc04c554  jal         func_131550
    ctx->pc = 0x13D788u;
    SET_GPR_U32(ctx, 31, 0x13D790u);
    ctx->pc = 0x13D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D788u;
    // 0x13d78c: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13D788u, 0x13D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D790u;
label_13d790:
    // 0x13d790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d794: 0xc04c550  jal         func_131540
    ctx->pc = 0x13D794u;
    SET_GPR_U32(ctx, 31, 0x13D79Cu);
    ctx->pc = 0x13D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D794u;
    // 0x13d798: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x13D794u, 0x13D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D79Cu;
label_13d79c:
    // 0x13d79c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x13d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x13d7a0: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x13d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x13d7a4: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x13d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x13d7a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x13d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13d7ac: 0xc04c554  jal         func_131550
    ctx->pc = 0x13D7ACu;
    SET_GPR_U32(ctx, 31, 0x13D7B4u);
    ctx->pc = 0x13D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D7ACu;
    // 0x13d7b0: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13D7ACu, 0x13D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D7B4u;
label_13d7b4:
    // 0x13d7b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13d7b8: 0xc04c54c  jal         func_131530
    ctx->pc = 0x13D7B8u;
    SET_GPR_U32(ctx, 31, 0x13D7C0u);
    ctx->pc = 0x13D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D7B8u;
    // 0x13d7bc: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13D7B8u, 0x13D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D7C0u;
label_13d7c0:
    // 0x13d7c0: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x13d7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x13d7c4: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x13d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x13d7c8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x13d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13d7cc: 0xafa5008c  sw          $a1, 0x8C($sp)
    ctx->pc = 0x13d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
    // 0x13d7d0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d7d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13D7D4u;
    {
        const bool branch_taken_0x13d7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7D4u;
        // 0x13d7d8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7d4) {
            ctx->pc = 0x13D830u;
            return;
        }
    }
    ctx->pc = 0x13D7DCu;
}
