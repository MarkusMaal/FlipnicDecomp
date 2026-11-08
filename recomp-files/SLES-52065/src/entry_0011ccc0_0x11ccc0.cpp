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

// Function: entry_0011ccc0
// Address: 0x11ccc0 - 0x11ccfc
void entry_0011ccc0_0x11ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ccc0_0x11ccc0");
#endif

    switch (ctx->pc) {
        case 0x11ccf0u: goto label_11ccf0;
        default: break;
    }

    ctx->pc = 0x11ccc0u;

    // 0x11ccc0: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x11ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11ccc4: 0x8e270094  lw          $a3, 0x94($s1)
    ctx->pc = 0x11ccc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x11ccc8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11cccc: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x11ccccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11ccd0: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x11ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11ccd4: 0x61800a  movz        $s0, $v1, $at
    ctx->pc = 0x11ccd4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x11ccd8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CCD8u;
    {
        const bool branch_taken_0x11ccd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ccd8) {
            ctx->pc = 0x11CCFCu;
            return;
        }
    }
    ctx->pc = 0x11CCE0u;
    // 0x11cce0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11cce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cce4: 0x26240424  addiu       $a0, $s1, 0x424
    ctx->pc = 0x11cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    // 0x11cce8: 0xc047bec  jal         func_11EFB0
    ctx->pc = 0x11CCE8u;
    SET_GPR_U32(ctx, 31, 0x11CCF0u);
    ctx->pc = 0x11CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCE8u;
    // 0x11ccec: 0x3c080010  lui         $t0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFB0u, 0x11CCE8u, 0x11CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCF0u;
label_11ccf0:
    // 0x11ccf0: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x11ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11ccf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ccf8: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x11ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
    ctx->pc = 0x11ccfcu;
}
