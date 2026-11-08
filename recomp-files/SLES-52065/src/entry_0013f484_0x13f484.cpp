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

// Function: entry_0013f484
// Address: 0x13f484 - 0x13f4d4
void entry_0013f484_0x13f484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f484_0x13f484");
#endif

    ctx->pc = 0x13f484u;

    // 0x13f484: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x13f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x13f488: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x13f488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13f48c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x13f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x13f490: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x13f490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x13f494: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x13f494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x13f498: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13f498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13f49c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x13f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13f4a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f4a4: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x13f4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x13f4a8: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x13f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x13f4ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13f4b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x13f4b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13f4b4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x13f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13f4b8: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F4B8u;
    {
        const bool branch_taken_0x13f4b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4B8u;
        // 0x13f4bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4b8) {
            ctx->pc = 0x13F4D4u;
            return;
        }
    }
    ctx->pc = 0x13F4C0u;
    // 0x13f4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13f4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13f4c8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x13f4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x13f4cc: 0xc04ffc0  jal         func_13FF00
    ctx->pc = 0x13F4CCu;
    SET_GPR_U32(ctx, 31, 0x13F4D4u);
    ctx->pc = 0x13F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4CCu;
    // 0x13f4d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FF00u, 0x13F4CCu, 0x13F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4D4u;
}
