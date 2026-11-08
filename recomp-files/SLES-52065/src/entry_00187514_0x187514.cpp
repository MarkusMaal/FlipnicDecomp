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

// Function: entry_00187514
// Address: 0x187514 - 0x187548
void entry_00187514_0x187514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187514_0x187514");
#endif

    switch (ctx->pc) {
        case 0x187540u: goto label_187540;
        default: break;
    }

    ctx->pc = 0x187514u;

    // 0x187514: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x187514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x187518: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x187518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18751c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x187520: 0x27a40154  addiu       $a0, $sp, 0x154
    ctx->pc = 0x187520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x187524: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x187528: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x187528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18752c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x18752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187530: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x187530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x187534: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x187534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x187538: 0xc048974  jal         func_1225D0
    ctx->pc = 0x187538u;
    SET_GPR_U32(ctx, 31, 0x187540u);
    ctx->pc = 0x18753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187538u;
    // 0x18753c: 0xafa2017c  sw          $v0, 0x17C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x187538u, 0x187540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187540u;
label_187540:
    // 0x187540: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x187540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x187544: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x187544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    ctx->pc = 0x187548u;
}
