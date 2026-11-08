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

// Function: entry_00111ee8
// Address: 0x111ee8 - 0x111f18
void entry_00111ee8_0x111ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111ee8_0x111ee8");
#endif

    switch (ctx->pc) {
        case 0x111f10u: goto label_111f10;
        default: break;
    }

    ctx->pc = 0x111ee8u;

    // 0x111ee8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x111ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x111eec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111ef0: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111ef4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x111ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x111ef8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111efc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111f00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111f04: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x111f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111f08: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x111F08u;
    SET_GPR_U32(ctx, 31, 0x111F10u);
    ctx->pc = 0x111F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F08u;
    // 0x111f0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x111F08u, 0x111F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F10u;
label_111f10:
    // 0x111f10: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x111f10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x111f14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x111f14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x111f18u;
}
