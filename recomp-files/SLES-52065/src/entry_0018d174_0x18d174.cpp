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

// Function: entry_0018d174
// Address: 0x18d174 - 0x18d198
void entry_0018d174_0x18d174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d174_0x18d174");
#endif

    switch (ctx->pc) {
        case 0x18d17cu: goto label_18d17c;
        case 0x18d188u: goto label_18d188;
        case 0x18d190u: goto label_18d190;
        default: break;
    }

    ctx->pc = 0x18d174u;

    // 0x18d174: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D174u;
    SET_GPR_U32(ctx, 31, 0x18D17Cu);
    ctx->pc = 0x18D178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D174u;
    // 0x18d178: 0xc64c048c  lwc1        $f12, 0x48C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D174u, 0x18D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D17Cu;
label_18d17c:
    // 0x18d17c: 0xc64c0490  lwc1        $f12, 0x490($s2)
    ctx->pc = 0x18d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d180: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D180u;
    SET_GPR_U32(ctx, 31, 0x18D188u);
    ctx->pc = 0x18D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D180u;
    // 0x18d184: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D180u, 0x18D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D188u;
label_18d188:
    // 0x18d188: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18D188u;
    SET_GPR_U32(ctx, 31, 0x18D190u);
    ctx->pc = 0x18D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D188u;
    // 0x18d18c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18D188u, 0x18D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D190u;
label_18d190:
    // 0x18d190: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x18D190u;
    {
        const bool branch_taken_0x18d190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D190u;
        // 0x18d194: 0xe6400488  swc1        $f0, 0x488($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d190) {
            ctx->pc = 0x18D338u;
            return;
        }
    }
    ctx->pc = 0x18D198u;
}
