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

// Function: entry_001e7790
// Address: 0x1e7790 - 0x1e77f0
void entry_001e7790_0x1e7790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7790_0x1e7790");
#endif

    switch (ctx->pc) {
        case 0x1e77e8u: goto label_1e77e8;
        default: break;
    }

    ctx->pc = 0x1e7790u;

    // 0x1e7790: 0x84a70000  lh          $a3, 0x0($a1)
    ctx->pc = 0x1e7790u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e7794: 0x27a80068  addiu       $t0, $sp, 0x68
    ctx->pc = 0x1e7794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e7798: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x1e7798u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1e779c: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x1e779cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e77a0: 0x84a30006  lh          $v1, 0x6($a1)
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1e77a4: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x1e77a4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e77a8: 0xa5060002  sh          $a2, 0x2($t0)
    ctx->pc = 0x1e77a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x1e77ac: 0xa5040004  sh          $a0, 0x4($t0)
    ctx->pc = 0x1e77acu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e77b0: 0xa5030006  sh          $v1, 0x6($t0)
    ctx->pc = 0x1e77b0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e77b4: 0x97a40068  lhu         $a0, 0x68($sp)
    ctx->pc = 0x1e77b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e77b8: 0x97a30060  lhu         $v1, 0x60($sp)
    ctx->pc = 0x1e77b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e77bc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e77bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e77c0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1E77C0u;
    {
        const bool branch_taken_0x1e77c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e77c0) {
            ctx->pc = 0x1E77F0u;
            return;
        }
    }
    ctx->pc = 0x1E77C8u;
    // 0x1e77c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1e77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e77cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e77ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e77d0: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x1e77d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e77d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e77d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e77d8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e77d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e77dc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1e77dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e77e0: 0xc07a034  jal         func_1E80D0
    ctx->pc = 0x1E77E0u;
    SET_GPR_U32(ctx, 31, 0x1E77E8u);
    ctx->pc = 0x1E77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77E0u;
    // 0x1e77e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E80D0u, 0x1E77E0u, 0x1E77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77E8u;
label_1e77e8:
    // 0x1e77e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E77E8u;
    {
        const bool branch_taken_0x1e77e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77E8u;
        // 0x1e77ec: 0x96440000  lhu         $a0, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e77e8) {
            ctx->pc = 0x1E7810u;
            return;
        }
    }
    ctx->pc = 0x1E77F0u;
}
