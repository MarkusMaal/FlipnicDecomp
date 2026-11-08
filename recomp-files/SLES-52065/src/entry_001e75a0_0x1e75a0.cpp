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

// Function: entry_001e75a0
// Address: 0x1e75a0 - 0x1e760c
void entry_001e75a0_0x1e75a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e75a0_0x1e75a0");
#endif

    switch (ctx->pc) {
        case 0x1e7604u: goto label_1e7604;
        default: break;
    }

    ctx->pc = 0x1e75a0u;

    // 0x1e75a0: 0xa62023  subu        $a0, $a1, $a2
    ctx->pc = 0x1e75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e75a4: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1e75a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x1e75a8: 0x44fc2  srl         $t1, $a0, 31
    ctx->pc = 0x1e75a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1e75ac: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1e75acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e75b0: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x1e75b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e75b4: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1e75b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e75b8: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x1e75b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e75bc: 0x4010  mfhi        $t0
    ctx->pc = 0x1e75bcu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1e75c0: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x1e75c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e75c4: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x1e75c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e75c8: 0xa4e40002  sh          $a0, 0x2($a3)
    ctx->pc = 0x1e75c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e75cc: 0xa4e30004  sh          $v1, 0x4($a3)
    ctx->pc = 0x1e75ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e75d0: 0x97a40068  lhu         $a0, 0x68($sp)
    ctx->pc = 0x1e75d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e75d4: 0x97a30060  lhu         $v1, 0x60($sp)
    ctx->pc = 0x1e75d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e75d8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e75d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e75dc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1E75DCu;
    {
        const bool branch_taken_0x1e75dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75DCu;
        // 0x1e75e0: 0x1098021  addu        $s0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75dc) {
            ctx->pc = 0x1E760Cu;
            return;
        }
    }
    ctx->pc = 0x1E75E4u;
    // 0x1e75e4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1e75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e75e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e75e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75ec: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1e75ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e75f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e75f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e75f4: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1e75f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1e75f8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1e75f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e75fc: 0xc079ebc  jal         func_1E7AF0
    ctx->pc = 0x1E75FCu;
    SET_GPR_U32(ctx, 31, 0x1E7604u);
    ctx->pc = 0x1E7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E75FCu;
    // 0x1e7600: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AF0u, 0x1E75FCu, 0x1E7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7604u;
label_1e7604:
    // 0x1e7604: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7604u;
    {
        const bool branch_taken_0x1e7604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7604u;
        // 0x1e7608: 0x96440000  lhu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7604) {
            ctx->pc = 0x1E762Cu;
            return;
        }
    }
    ctx->pc = 0x1E760Cu;
}
