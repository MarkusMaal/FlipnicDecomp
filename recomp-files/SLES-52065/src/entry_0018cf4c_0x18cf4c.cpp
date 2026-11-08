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

// Function: entry_0018cf4c
// Address: 0x18cf4c - 0x18cf70
void entry_0018cf4c_0x18cf4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cf4c_0x18cf4c");
#endif

    switch (ctx->pc) {
        case 0x18cf54u: goto label_18cf54;
        case 0x18cf68u: goto label_18cf68;
        default: break;
    }

    ctx->pc = 0x18cf4cu;

    // 0x18cf4c: 0xc053284  jal         func_14CA10
    ctx->pc = 0x18CF4Cu;
    SET_GPR_U32(ctx, 31, 0x18CF54u);
    ctx->pc = 0x14CA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA10u, 0x18CF4Cu, 0x18CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF54u;
label_18cf54:
    // 0x18cf54: 0xe6400488  swc1        $f0, 0x488($s2)
    ctx->pc = 0x18cf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
    // 0x18cf58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cf60: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18CF60u;
    SET_GPR_U32(ctx, 31, 0x18CF68u);
    ctx->pc = 0x18CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF60u;
    // 0x18cf64: 0xae400490  sw          $zero, 0x490($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18CF60u, 0x18CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CF68u;
label_18cf68:
    // 0x18cf68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cf6c: 0xae422710  sw          $v0, 0x2710($s2)
    ctx->pc = 0x18cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 2));
    ctx->pc = 0x18cf70u;
}
