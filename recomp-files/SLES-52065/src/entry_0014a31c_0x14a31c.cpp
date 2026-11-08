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

// Function: entry_0014a31c
// Address: 0x14a31c - 0x14a370
void entry_0014a31c_0x14a31c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a31c_0x14a31c");
#endif

    ctx->pc = 0x14a31cu;

    // 0x14a31c: 0xafa0087c  sw          $zero, 0x87C($sp)
    ctx->pc = 0x14a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2172), GPR_U32(ctx, 0));
    // 0x14a320: 0x27a2017c  addiu       $v0, $sp, 0x17C
    ctx->pc = 0x14a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x14a324: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x14a324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x14a328: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x14a328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x14a32c: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x14a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x14a330: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14a330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14a334: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x14a334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14a338: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x14a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14a33c: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x14a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14a340: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14a344: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x14a344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14a348: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x14a348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14a34c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a350: 0x822823  subu        $a1, $a0, $v0
    ctx->pc = 0x14a350u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14a354: 0xb4082b  sltu        $at, $a1, $s4
    ctx->pc = 0x14a354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14a358: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A358u;
    {
        const bool branch_taken_0x14a358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A358u;
        // 0x14a35c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a358) {
            ctx->pc = 0x14A370u;
            return;
        }
    }
    ctx->pc = 0x14A360u;
    // 0x14a360: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x14a360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14a364: 0x27a7087c  addiu       $a3, $sp, 0x87C
    ctx->pc = 0x14a364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2172));
    // 0x14a368: 0xc052c8c  jal         func_14B230
    ctx->pc = 0x14A368u;
    SET_GPR_U32(ctx, 31, 0x14A370u);
    ctx->pc = 0x14A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A368u;
    // 0x14a36c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B230u, 0x14A368u, 0x14A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A370u;
}
