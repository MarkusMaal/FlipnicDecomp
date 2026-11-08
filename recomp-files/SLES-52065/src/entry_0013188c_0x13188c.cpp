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

// Function: entry_0013188c
// Address: 0x13188c - 0x1318dc
void entry_0013188c_0x13188c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013188c_0x13188c");
#endif

    switch (ctx->pc) {
        case 0x131894u: goto label_131894;
        case 0x1318a0u: goto label_1318a0;
        case 0x1318b0u: goto label_1318b0;
        case 0x1318bcu: goto label_1318bc;
        default: break;
    }

    ctx->pc = 0x13188cu;

    // 0x13188c: 0xc04c554  jal         func_131550
    ctx->pc = 0x13188Cu;
    SET_GPR_U32(ctx, 31, 0x131894u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13188Cu, 0x131894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131894u;
label_131894:
    // 0x131894: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x131894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x131898: 0xc04c54c  jal         func_131530
    ctx->pc = 0x131898u;
    SET_GPR_U32(ctx, 31, 0x1318A0u);
    ctx->pc = 0x13189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131898u;
    // 0x13189c: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x131898u, 0x1318A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318A0u;
label_1318a0:
    // 0x1318a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1318a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1318a4: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1318a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1318a8: 0xc04c554  jal         func_131550
    ctx->pc = 0x1318A8u;
    SET_GPR_U32(ctx, 31, 0x1318B0u);
    ctx->pc = 0x1318ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318A8u;
    // 0x1318ac: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1318A8u, 0x1318B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318B0u;
label_1318b0:
    // 0x1318b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1318b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318b4: 0xc04c550  jal         func_131540
    ctx->pc = 0x1318B4u;
    SET_GPR_U32(ctx, 31, 0x1318BCu);
    ctx->pc = 0x1318B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1318B4u;
    // 0x1318b8: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1318B4u, 0x1318BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318BCu;
label_1318bc:
    // 0x1318bc: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x1318bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1318c0: 0x8fb0004c  lw          $s0, 0x4C($sp)
    ctx->pc = 0x1318c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1318c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1318c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1318c8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1318c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1318cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1318ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1318d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1318d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1318d4: 0x10500012  beq         $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1318D4u;
    {
        const bool branch_taken_0x1318d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1318d4) {
            ctx->pc = 0x131920u;
            return;
        }
    }
    ctx->pc = 0x1318DCu;
}
