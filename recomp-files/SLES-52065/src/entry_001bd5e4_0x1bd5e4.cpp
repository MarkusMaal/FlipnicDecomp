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

// Function: entry_001bd5e4
// Address: 0x1bd5e4 - 0x1bd634
void entry_001bd5e4_0x1bd5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd5e4_0x1bd5e4");
#endif

    ctx->pc = 0x1bd5e4u;

    // 0x1bd5e4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x1bd5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x1bd5e8: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x1bd5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1bd5ec: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1bd5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1bd5f0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1bd5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1bd5f4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1bd5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1bd5f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bd5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bd5fc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1bd5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bd600: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bd600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd604: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1bd604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd608: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x1bd608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bd60c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1bd60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1bd610: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1bd610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bd614: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1bd614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bd618: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD618u;
    {
        const bool branch_taken_0x1bd618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD618u;
        // 0x1bd61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd618) {
            ctx->pc = 0x1BD634u;
            return;
        }
    }
    ctx->pc = 0x1BD620u;
    // 0x1bd620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd624: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd628: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x1bd628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bd62c: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1BD62Cu;
    SET_GPR_U32(ctx, 31, 0x1BD634u);
    ctx->pc = 0x1BD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD62Cu;
    // 0x1bd630: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1BD62Cu, 0x1BD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD634u;
}
