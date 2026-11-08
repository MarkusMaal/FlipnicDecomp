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

// Function: entry_0018d258
// Address: 0x18d258 - 0x18d28c
void entry_0018d258_0x18d258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d258_0x18d258");
#endif

    switch (ctx->pc) {
        case 0x18d260u: goto label_18d260;
        case 0x18d26cu: goto label_18d26c;
        case 0x18d274u: goto label_18d274;
        default: break;
    }

    ctx->pc = 0x18d258u;

    // 0x18d258: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D258u;
    SET_GPR_U32(ctx, 31, 0x18D260u);
    ctx->pc = 0x18D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D258u;
    // 0x18d25c: 0xc64c048c  lwc1        $f12, 0x48C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D258u, 0x18D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D260u;
label_18d260:
    // 0x18d260: 0xc64c0490  lwc1        $f12, 0x490($s2)
    ctx->pc = 0x18d260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d264: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D264u;
    SET_GPR_U32(ctx, 31, 0x18D26Cu);
    ctx->pc = 0x18D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D264u;
    // 0x18d268: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D264u, 0x18D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D26Cu;
label_18d26c:
    // 0x18d26c: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18D26Cu;
    SET_GPR_U32(ctx, 31, 0x18D274u);
    ctx->pc = 0x18D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D26Cu;
    // 0x18d270: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18D26Cu, 0x18D274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D274u;
label_18d274:
    // 0x18d274: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d27c: 0x0  nop
    ctx->pc = 0x18d27cu;
    // NOP
    // 0x18d280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18d284: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18D284u;
    {
        const bool branch_taken_0x18d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D284u;
        // 0x18d288: 0xe6400488  swc1        $f0, 0x488($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d284) {
            ctx->pc = 0x18D338u;
            return;
        }
    }
    ctx->pc = 0x18D28Cu;
}
