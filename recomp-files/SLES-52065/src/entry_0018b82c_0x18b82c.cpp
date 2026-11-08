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

// Function: entry_0018b82c
// Address: 0x18b82c - 0x18b84c
void entry_0018b82c_0x18b82c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b82c_0x18b82c");
#endif

    switch (ctx->pc) {
        case 0x18b844u: goto label_18b844;
        default: break;
    }

    ctx->pc = 0x18b82cu;

    // 0x18b82c: 0x8e222724  lw          $v0, 0x2724($s1)
    ctx->pc = 0x18b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18b830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b834: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18b838: 0xc44c00a4  lwc1        $f12, 0xA4($v0)
    ctx->pc = 0x18b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b83c: 0xc0533c8  jal         func_14CF20
    ctx->pc = 0x18B83Cu;
    SET_GPR_U32(ctx, 31, 0x18B844u);
    ctx->pc = 0x18B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B83Cu;
    // 0x18b840: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF20u, 0x18B83Cu, 0x18B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B844u;
label_18b844:
    // 0x18b844: 0x269400a8  addiu       $s4, $s4, 0xA8
    ctx->pc = 0x18b844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 168));
    // 0x18b848: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18b848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x18b84cu;
}
