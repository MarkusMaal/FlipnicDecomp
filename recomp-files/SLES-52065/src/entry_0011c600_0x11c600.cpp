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

// Function: entry_0011c600
// Address: 0x11c600 - 0x11c63c
void entry_0011c600_0x11c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c600_0x11c600");
#endif

    switch (ctx->pc) {
        case 0x11c630u: goto label_11c630;
        default: break;
    }

    ctx->pc = 0x11c600u;

    // 0x11c600: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x11c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11c604: 0x8e270094  lw          $a3, 0x94($s1)
    ctx->pc = 0x11c604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x11c608: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x11c608u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11c60c: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x11c60cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11c610: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x11c610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11c614: 0x41800a  movz        $s0, $v0, $at
    ctx->pc = 0x11c614u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x11c618: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C618u;
    {
        const bool branch_taken_0x11c618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c618) {
            ctx->pc = 0x11C63Cu;
            return;
        }
    }
    ctx->pc = 0x11C620u;
    // 0x11c620: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c624: 0x26240424  addiu       $a0, $s1, 0x424
    ctx->pc = 0x11c624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    // 0x11c628: 0xc047bec  jal         func_11EFB0
    ctx->pc = 0x11C628u;
    SET_GPR_U32(ctx, 31, 0x11C630u);
    ctx->pc = 0x11C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C628u;
    // 0x11c62c: 0x3c080010  lui         $t0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFB0u, 0x11C628u, 0x11C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C630u;
label_11c630:
    // 0x11c630: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x11c630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c634: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c638: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x11c638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    ctx->pc = 0x11c63cu;
}
