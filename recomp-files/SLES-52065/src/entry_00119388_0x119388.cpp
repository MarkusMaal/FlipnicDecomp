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

// Function: entry_00119388
// Address: 0x119388 - 0x1193c4
void entry_00119388_0x119388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119388_0x119388");
#endif

    switch (ctx->pc) {
        case 0x1193b4u: goto label_1193b4;
        default: break;
    }

    ctx->pc = 0x119388u;

label_119388:
    // 0x119388: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x119388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11938c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x11938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x119390: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x119390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x119394: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x119394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119398: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x119398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11939c: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x11939cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1193a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1193a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1193a4: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x1193a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1193a8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1193a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1193ac: 0xc04be24  jal         func_12F890
    ctx->pc = 0x1193ACu;
    SET_GPR_U32(ctx, 31, 0x1193B4u);
    ctx->pc = 0x1193B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193ACu;
    // 0x1193b0: 0x90850020  lbu         $a1, 0x20($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F890u, 0x1193ACu, 0x1193B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193B4u;
label_1193b4:
    // 0x1193b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1193b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1193b8: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x1193b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1193bc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1193BCu;
    {
        const bool branch_taken_0x1193bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1193bc) {
            ctx->pc = 0x119388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119388;
        }
    }
    ctx->pc = 0x1193C4u;
}
