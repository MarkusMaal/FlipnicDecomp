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

// Function: entry_00144600
// Address: 0x144600 - 0x144628
void entry_00144600_0x144600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144600_0x144600");
#endif

    switch (ctx->pc) {
        case 0x14460cu: goto label_14460c;
        case 0x144620u: goto label_144620;
        default: break;
    }

    ctx->pc = 0x144600u;

    // 0x144600: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x144600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144604: 0xc04c558  jal         func_131560
    ctx->pc = 0x144604u;
    SET_GPR_U32(ctx, 31, 0x14460Cu);
    ctx->pc = 0x144608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144604u;
    // 0x144608: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x144604u, 0x14460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14460Cu;
label_14460c:
    // 0x14460c: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x14460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x144610: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x144610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x144614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144618: 0xc04cee4  jal         func_133B90
    ctx->pc = 0x144618u;
    SET_GPR_U32(ctx, 31, 0x144620u);
    ctx->pc = 0x14461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144618u;
    // 0x14461c: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133B90u, 0x144618u, 0x144620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144620u;
label_144620:
    // 0x144620: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x144620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x144624: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x144624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x144628u;
}
