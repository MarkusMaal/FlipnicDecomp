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

// Function: entry_00135bd8
// Address: 0x135bd8 - 0x135c28
void entry_00135bd8_0x135bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135bd8_0x135bd8");
#endif

    switch (ctx->pc) {
        case 0x135be0u: goto label_135be0;
        case 0x135becu: goto label_135bec;
        case 0x135bf8u: goto label_135bf8;
        case 0x135c04u: goto label_135c04;
        default: break;
    }

    ctx->pc = 0x135bd8u;

    // 0x135bd8: 0xc04c554  jal         func_131550
    ctx->pc = 0x135BD8u;
    SET_GPR_U32(ctx, 31, 0x135BE0u);
    ctx->pc = 0x135BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BD8u;
    // 0x135bdc: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135BD8u, 0x135BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BE0u;
label_135be0:
    // 0x135be0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135be4: 0xc04c550  jal         func_131540
    ctx->pc = 0x135BE4u;
    SET_GPR_U32(ctx, 31, 0x135BECu);
    ctx->pc = 0x135BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BE4u;
    // 0x135be8: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x135BE4u, 0x135BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BECu;
label_135bec:
    // 0x135bec: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x135becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x135bf0: 0xc04c554  jal         func_131550
    ctx->pc = 0x135BF0u;
    SET_GPR_U32(ctx, 31, 0x135BF8u);
    ctx->pc = 0x135BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BF0u;
    // 0x135bf4: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135BF0u, 0x135BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BF8u;
label_135bf8:
    // 0x135bf8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135bfc: 0xc04c54c  jal         func_131530
    ctx->pc = 0x135BFCu;
    SET_GPR_U32(ctx, 31, 0x135C04u);
    ctx->pc = 0x135C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BFCu;
    // 0x135c00: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x135BFCu, 0x135C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C04u;
label_135c04:
    // 0x135c04: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x135c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x135c08: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x135c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x135c0c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x135c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135c10: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x135c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x135c14: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x135c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135c18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x135c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x135c1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135c20: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x135C20u;
    {
        const bool branch_taken_0x135c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x135c20) {
            ctx->pc = 0x135C58u;
            return;
        }
    }
    ctx->pc = 0x135C28u;
}
