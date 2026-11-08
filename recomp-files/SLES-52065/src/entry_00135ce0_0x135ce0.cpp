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

// Function: entry_00135ce0
// Address: 0x135ce0 - 0x135d30
void entry_00135ce0_0x135ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135ce0_0x135ce0");
#endif

    switch (ctx->pc) {
        case 0x135ce8u: goto label_135ce8;
        case 0x135cf4u: goto label_135cf4;
        case 0x135d00u: goto label_135d00;
        case 0x135d0cu: goto label_135d0c;
        default: break;
    }

    ctx->pc = 0x135ce0u;

    // 0x135ce0: 0xc04c554  jal         func_131550
    ctx->pc = 0x135CE0u;
    SET_GPR_U32(ctx, 31, 0x135CE8u);
    ctx->pc = 0x135CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CE0u;
    // 0x135ce4: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135CE0u, 0x135CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CE8u;
label_135ce8:
    // 0x135ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cec: 0xc04c550  jal         func_131540
    ctx->pc = 0x135CECu;
    SET_GPR_U32(ctx, 31, 0x135CF4u);
    ctx->pc = 0x135CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CECu;
    // 0x135cf0: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x135CECu, 0x135CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CF4u;
label_135cf4:
    // 0x135cf4: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x135cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x135cf8: 0xc04c554  jal         func_131550
    ctx->pc = 0x135CF8u;
    SET_GPR_U32(ctx, 31, 0x135D00u);
    ctx->pc = 0x135CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CF8u;
    // 0x135cfc: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135CF8u, 0x135D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D00u;
label_135d00:
    // 0x135d00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135d04: 0xc04c54c  jal         func_131530
    ctx->pc = 0x135D04u;
    SET_GPR_U32(ctx, 31, 0x135D0Cu);
    ctx->pc = 0x135D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D04u;
    // 0x135d08: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x135D04u, 0x135D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D0Cu;
label_135d0c:
    // 0x135d0c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x135d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x135d10: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x135d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x135d14: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x135d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135d18: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x135d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x135d1c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x135d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135d20: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x135d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x135d24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135d28: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x135D28u;
    {
        const bool branch_taken_0x135d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x135d28) {
            ctx->pc = 0x135D60u;
            return;
        }
    }
    ctx->pc = 0x135D30u;
}
