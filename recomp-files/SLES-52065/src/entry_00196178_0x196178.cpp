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

// Function: entry_00196178
// Address: 0x196178 - 0x1961ac
void entry_00196178_0x196178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196178_0x196178");
#endif

    switch (ctx->pc) {
        case 0x196184u: goto label_196184;
        case 0x1961a4u: goto label_1961a4;
        default: break;
    }

    ctx->pc = 0x196178u;

    // 0x196178: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x19617c: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x19617Cu;
    SET_GPR_U32(ctx, 31, 0x196184u);
    ctx->pc = 0x196180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19617Cu;
    // 0x196180: 0x8c440450  lw          $a0, 0x450($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x19617Cu, 0x196184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196184u;
label_196184:
    // 0x196184: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x196184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x196188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19618c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x19618cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x196190: 0x8f828704  lw          $v0, -0x78FC($gp)
    ctx->pc = 0x196190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x196194: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x196194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x196198: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x196198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x19619c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x19619Cu;
    SET_GPR_U32(ctx, 31, 0x1961A4u);
    ctx->pc = 0x1961A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19619Cu;
    // 0x1961a0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x19619Cu, 0x1961A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961A4u;
label_1961a4:
    // 0x1961a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1961A4u;
    {
        const bool branch_taken_0x1961a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1961a4) {
            ctx->pc = 0x1961D8u;
            return;
        }
    }
    ctx->pc = 0x1961ACu;
}
