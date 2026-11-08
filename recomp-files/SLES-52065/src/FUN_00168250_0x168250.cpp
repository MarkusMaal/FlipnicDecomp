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

// Function: FUN_00168250
// Address: 0x168250 - 0x1682d0
void FUN_00168250_0x168250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168250_0x168250");
#endif

    switch (ctx->pc) {
        case 0x1682bcu: goto label_1682bc;
        default: break;
    }

    ctx->pc = 0x168250u;

    // 0x168250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16825c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16825cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168260: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x168260u;
    {
        const bool branch_taken_0x168260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168260u;
        // 0x168264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168260) {
            ctx->pc = 0x1682C0u;
            goto label_1682c0;
        }
    }
    ctx->pc = 0x168268u;
    // 0x168268: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16826c: 0x24429e90  addiu       $v0, $v0, -0x6170
    ctx->pc = 0x16826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942352));
    // 0x168270: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x168270u;
    {
        const bool branch_taken_0x168270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168270u;
        // 0x168274: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168270) {
            ctx->pc = 0x1682A4u;
            goto label_1682a4;
        }
    }
    ctx->pc = 0x168278u;
    // 0x168278: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16827c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x16827cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x168280: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168280u;
    {
        const bool branch_taken_0x168280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168280u;
        // 0x168284: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168280) {
            ctx->pc = 0x1682A4u;
            goto label_1682a4;
        }
    }
    ctx->pc = 0x168288u;
    // 0x168288: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16828c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x16828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x168290: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168290u;
    {
        const bool branch_taken_0x168290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168290u;
        // 0x168294: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168290) {
            ctx->pc = 0x1682A4u;
            goto label_1682a4;
        }
    }
    ctx->pc = 0x168298u;
    // 0x168298: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16829c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x16829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1682a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1682a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1682a4:
    // 0x1682a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1682a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1682a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1682a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1682ac: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1682ACu;
    {
        const bool branch_taken_0x1682ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1682B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682ACu;
        // 0x1682b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682ac) {
            ctx->pc = 0x1682BCu;
            goto label_1682bc;
        }
    }
    ctx->pc = 0x1682B4u;
    // 0x1682b4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1682B4u;
    SET_GPR_U32(ctx, 31, 0x1682BCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1682B4u, 0x1682BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1682BCu;
label_1682bc:
    // 0x1682bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1682bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1682c0:
    // 0x1682c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1682c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1682c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1682c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1682c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1682C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1682CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682C8u;
        // 0x1682cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1682C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1682D0u;
}
