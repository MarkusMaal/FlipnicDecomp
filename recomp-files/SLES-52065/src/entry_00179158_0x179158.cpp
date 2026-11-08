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

// Function: entry_00179158
// Address: 0x179158 - 0x1791a8
void entry_00179158_0x179158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179158_0x179158");
#endif

    switch (ctx->pc) {
        case 0x179174u: goto label_179174;
        case 0x17917cu: goto label_17917c;
        case 0x179184u: goto label_179184;
        case 0x17919cu: goto label_17919c;
        default: break;
    }

    ctx->pc = 0x179158u;

    // 0x179158: 0x8e020c20  lw          $v0, 0xC20($s0)
    ctx->pc = 0x179158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x17915c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x179160: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x179160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x179164: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x179164u;
    {
        const bool branch_taken_0x179164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179164u;
        // 0x179168: 0xae030c20  sw          $v1, 0xC20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179164) {
            ctx->pc = 0x1791A8u;
            return;
        }
    }
    ctx->pc = 0x17916Cu;
    // 0x17916c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17916Cu;
    SET_GPR_U32(ctx, 31, 0x179174u);
    ctx->pc = 0x179170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17916Cu;
    // 0x179170: 0xae000c20  sw          $zero, 0xC20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17916Cu, 0x179174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179174u;
label_179174:
    // 0x179174: 0xc045b20  jal         func_116C80
    ctx->pc = 0x179174u;
    SET_GPR_U32(ctx, 31, 0x17917Cu);
    ctx->pc = 0x179178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179174u;
    // 0x179178: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x179174u, 0x17917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17917Cu;
label_17917c:
    // 0x17917c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17917Cu;
    SET_GPR_U32(ctx, 31, 0x179184u);
    ctx->pc = 0x179180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17917Cu;
    // 0x179180: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17917Cu, 0x179184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179184u;
label_179184:
    // 0x179184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x179188: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x179188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17918c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x17918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x179190: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x179190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x179194: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179194u;
    SET_GPR_U32(ctx, 31, 0x17919Cu);
    ctx->pc = 0x179198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179194u;
    // 0x179198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179194u, 0x17919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17919Cu;
label_17919c:
    // 0x17919c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1791a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1791A0u;
    {
        const bool branch_taken_0x1791a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791A0u;
        // 0x1791a4: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791a0) {
            ctx->pc = 0x1791B0u;
            return;
        }
    }
    ctx->pc = 0x1791A8u;
}
