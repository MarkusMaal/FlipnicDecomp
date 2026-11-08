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

// Function: FUN_001684c0
// Address: 0x1684c0 - 0x168540
void FUN_001684c0_0x1684c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001684c0_0x1684c0");
#endif

    switch (ctx->pc) {
        case 0x16852cu: goto label_16852c;
        default: break;
    }

    ctx->pc = 0x1684c0u;

    // 0x1684c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1684c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1684c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1684c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1684c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1684c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1684cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1684ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684d0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1684D0u;
    {
        const bool branch_taken_0x1684d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D0u;
        // 0x1684d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684d0) {
            ctx->pc = 0x168530u;
            goto label_168530;
        }
    }
    ctx->pc = 0x1684D8u;
    // 0x1684d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1684d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1684dc: 0x2442a190  addiu       $v0, $v0, -0x5E70
    ctx->pc = 0x1684dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943120));
    // 0x1684e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1684E0u;
    {
        const bool branch_taken_0x1684e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684E0u;
        // 0x1684e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684e0) {
            ctx->pc = 0x168514u;
            goto label_168514;
        }
    }
    ctx->pc = 0x1684E8u;
    // 0x1684e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1684e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1684ec: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1684ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1684f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1684F0u;
    {
        const bool branch_taken_0x1684f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684F0u;
        // 0x1684f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684f0) {
            ctx->pc = 0x168514u;
            goto label_168514;
        }
    }
    ctx->pc = 0x1684F8u;
    // 0x1684f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1684f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1684fc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1684fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x168500: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168500u;
    {
        const bool branch_taken_0x168500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168500u;
        // 0x168504: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168500) {
            ctx->pc = 0x168514u;
            goto label_168514;
        }
    }
    ctx->pc = 0x168508u;
    // 0x168508: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16850c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x168510: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x168510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_168514:
    // 0x168514: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x168514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x168518: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16851c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16851Cu;
    {
        const bool branch_taken_0x16851c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x168520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16851Cu;
        // 0x168520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16851c) {
            ctx->pc = 0x16852Cu;
            goto label_16852c;
        }
    }
    ctx->pc = 0x168524u;
    // 0x168524: 0xc0401a4  jal         func_100690
    ctx->pc = 0x168524u;
    SET_GPR_U32(ctx, 31, 0x16852Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x168524u, 0x16852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16852Cu;
label_16852c:
    // 0x16852c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16852cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168530:
    // 0x168530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168538: 0x3e00008  jr          $ra
    ctx->pc = 0x168538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168538u;
        // 0x16853c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168540u;
}
