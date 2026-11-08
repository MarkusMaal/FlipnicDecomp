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

// Function: entry_0018d220
// Address: 0x18d220 - 0x18d258
void entry_0018d220_0x18d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d220_0x18d220");
#endif

    switch (ctx->pc) {
        case 0x18d228u: goto label_18d228;
        case 0x18d23cu: goto label_18d23c;
        case 0x18d248u: goto label_18d248;
        case 0x18d250u: goto label_18d250;
        default: break;
    }

    ctx->pc = 0x18d220u;

    // 0x18d220: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18D220u;
    SET_GPR_U32(ctx, 31, 0x18D228u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x18D220u, 0x18D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D228u;
label_18d228:
    // 0x18d228: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x18d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d22c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18D22Cu;
    {
        const bool branch_taken_0x18d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d22c) {
            ctx->pc = 0x18D258u;
            return;
        }
    }
    ctx->pc = 0x18D234u;
    // 0x18d234: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D234u;
    SET_GPR_U32(ctx, 31, 0x18D23Cu);
    ctx->pc = 0x18D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D234u;
    // 0x18d238: 0xc64c048c  lwc1        $f12, 0x48C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D234u, 0x18D23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D23Cu;
label_18d23c:
    // 0x18d23c: 0xc64c0490  lwc1        $f12, 0x490($s2)
    ctx->pc = 0x18d23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d240: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D240u;
    SET_GPR_U32(ctx, 31, 0x18D248u);
    ctx->pc = 0x18D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D240u;
    // 0x18d244: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D240u, 0x18D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D248u;
label_18d248:
    // 0x18d248: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18D248u;
    SET_GPR_U32(ctx, 31, 0x18D250u);
    ctx->pc = 0x18D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D248u;
    // 0x18d24c: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18D248u, 0x18D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D250u;
label_18d250:
    // 0x18d250: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x18D250u;
    {
        const bool branch_taken_0x18d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D250u;
        // 0x18d254: 0xe6400488  swc1        $f0, 0x488($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d250) {
            ctx->pc = 0x18D338u;
            return;
        }
    }
    ctx->pc = 0x18D258u;
}
