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

// Function: entry_001b7944
// Address: 0x1b7944 - 0x1b7968
void entry_001b7944_0x1b7944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7944_0x1b7944");
#endif

    switch (ctx->pc) {
        case 0x1b7960u: goto label_1b7960;
        default: break;
    }

    ctx->pc = 0x1b7944u;

    // 0x1b7944: 0x0  nop
    ctx->pc = 0x1b7944u;
    // NOP
    // 0x1b7948: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1b7948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b794c: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1b794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7950: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1b7950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7954: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x1b7954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1b7958: 0xc06e990  jal         func_1BA640
    ctx->pc = 0x1B7958u;
    SET_GPR_U32(ctx, 31, 0x1B7960u);
    ctx->pc = 0x1B795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7958u;
    // 0x1b795c: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA640u, 0x1B7958u, 0x1B7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7960u;
label_1b7960:
    // 0x1b7960: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7960u;
    SET_GPR_U32(ctx, 31, 0x1B7968u);
    ctx->pc = 0x1B7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7960u;
    // 0x1b7964: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7960u, 0x1B7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7968u;
}
