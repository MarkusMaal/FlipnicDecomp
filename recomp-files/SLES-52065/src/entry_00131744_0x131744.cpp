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

// Function: entry_00131744
// Address: 0x131744 - 0x131798
void entry_00131744_0x131744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131744_0x131744");
#endif

    switch (ctx->pc) {
        case 0x13174cu: goto label_13174c;
        case 0x131758u: goto label_131758;
        case 0x131770u: goto label_131770;
        case 0x13177cu: goto label_13177c;
        default: break;
    }

    ctx->pc = 0x131744u;

    // 0x131744: 0xc04c554  jal         func_131550
    ctx->pc = 0x131744u;
    SET_GPR_U32(ctx, 31, 0x13174Cu);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131744u, 0x13174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13174Cu;
label_13174c:
    // 0x13174c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131750: 0xc04c550  jal         func_131540
    ctx->pc = 0x131750u;
    SET_GPR_U32(ctx, 31, 0x131758u);
    ctx->pc = 0x131754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131750u;
    // 0x131754: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x131750u, 0x131758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131758u;
label_131758:
    // 0x131758: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x131758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13175c: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x13175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x131760: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x131760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x131764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131768: 0xc04c554  jal         func_131550
    ctx->pc = 0x131768u;
    SET_GPR_U32(ctx, 31, 0x131770u);
    ctx->pc = 0x13176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131768u;
    // 0x13176c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131768u, 0x131770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131770u;
label_131770:
    // 0x131770: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x131770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131774: 0xc04c54c  jal         func_131530
    ctx->pc = 0x131774u;
    SET_GPR_U32(ctx, 31, 0x13177Cu);
    ctx->pc = 0x131778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131774u;
    // 0x131778: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x131774u, 0x13177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13177Cu;
label_13177c:
    // 0x13177c: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x13177cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x131780: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x131780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x131784: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x131784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131788: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x131788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x13178c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131790: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x131790u;
    {
        const bool branch_taken_0x131790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131790u;
        // 0x131794: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131790) {
            ctx->pc = 0x1317ECu;
            return;
        }
    }
    ctx->pc = 0x131798u;
}
