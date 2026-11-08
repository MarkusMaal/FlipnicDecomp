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

// Function: FUN_001714c0
// Address: 0x1714c0 - 0x171540
void FUN_001714c0_0x1714c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001714c0_0x1714c0");
#endif

    switch (ctx->pc) {
        case 0x17152cu: goto label_17152c;
        default: break;
    }

    ctx->pc = 0x1714c0u;

    // 0x1714c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1714c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1714c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1714c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1714c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1714cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1714ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714d0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1714D0u;
    {
        const bool branch_taken_0x1714d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714D0u;
        // 0x1714d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714d0) {
            ctx->pc = 0x171530u;
            goto label_171530;
        }
    }
    ctx->pc = 0x1714D8u;
    // 0x1714d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1714d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1714dc: 0x2442aa90  addiu       $v0, $v0, -0x5570
    ctx->pc = 0x1714dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945424));
    // 0x1714e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1714E0u;
    {
        const bool branch_taken_0x1714e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714E0u;
        // 0x1714e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714e0) {
            ctx->pc = 0x171514u;
            goto label_171514;
        }
    }
    ctx->pc = 0x1714E8u;
    // 0x1714e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1714ec: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1714ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1714f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1714F0u;
    {
        const bool branch_taken_0x1714f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1714F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714F0u;
        // 0x1714f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714f0) {
            ctx->pc = 0x171514u;
            goto label_171514;
        }
    }
    ctx->pc = 0x1714F8u;
    // 0x1714f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1714f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1714fc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1714fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x171500: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x171500u;
    {
        const bool branch_taken_0x171500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x171504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171500u;
        // 0x171504: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171500) {
            ctx->pc = 0x171514u;
            goto label_171514;
        }
    }
    ctx->pc = 0x171508u;
    // 0x171508: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17150c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x17150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x171510: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x171510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_171514:
    // 0x171514: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x171514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x171518: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x171518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17151c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17151Cu;
    {
        const bool branch_taken_0x17151c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x171520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17151Cu;
        // 0x171520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17151c) {
            ctx->pc = 0x17152Cu;
            goto label_17152c;
        }
    }
    ctx->pc = 0x171524u;
    // 0x171524: 0xc0401a4  jal         func_100690
    ctx->pc = 0x171524u;
    SET_GPR_U32(ctx, 31, 0x17152Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x171524u, 0x17152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17152Cu;
label_17152c:
    // 0x17152c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17152cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171530:
    // 0x171530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171538: 0x3e00008  jr          $ra
    ctx->pc = 0x171538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171538u;
        // 0x17153c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171540u;
}
