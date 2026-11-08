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

// Function: FUN_001ec568
// Address: 0x1ec568 - 0x1ec5e4
void FUN_001ec568_0x1ec568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec568_0x1ec568");
#endif

    switch (ctx->pc) {
        case 0x1ec5d0u: goto label_1ec5d0;
        default: break;
    }

    ctx->pc = 0x1ec568u;

    // 0x1ec568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec56c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec574: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x1ec574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1ec578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC578u;
    {
        const bool branch_taken_0x1ec578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC578u;
        // 0x1ec57c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec578) {
            ctx->pc = 0x1EC590u;
            goto label_1ec590;
        }
    }
    ctx->pc = 0x1EC580u;
    // 0x1ec580: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ec580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ec584: 0x8c43a3b8  lw          $v1, -0x5C48($v0)
    ctx->pc = 0x1ec584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A3B8u));
    // 0x1ec588: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC588u;
    {
        const bool branch_taken_0x1ec588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC588u;
        // 0x1ec58c: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec588) {
            ctx->pc = 0x1EC598u;
            goto label_1ec598;
        }
    }
    ctx->pc = 0x1EC590u;
label_1ec590:
    // 0x1ec590: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EC590u;
    {
        const bool branch_taken_0x1ec590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC590u;
        // 0x1ec594: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec590) {
            ctx->pc = 0x1EC5D4u;
            goto label_1ec5d4;
        }
    }
    ctx->pc = 0x1EC598u;
label_1ec598:
    // 0x1ec598: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ec598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ec59c: 0x2463be58  addiu       $v1, $v1, -0x41A8
    ctx->pc = 0x1ec59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950488));
    // 0x1ec5a0: 0x8ca4be50  lw          $a0, -0x41B0($a1)
    ctx->pc = 0x1ec5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x38BE50u));
    // 0x1ec5a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ec5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ec5a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ec5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec5ac: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x1ec5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x1ec5b0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1ec5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ec5b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ec5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ec5b8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1ec5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ec5bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ec5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ec5c0: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x1ec5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ec5c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ec5c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5c8: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1EC5C8u;
    SET_GPR_U32(ctx, 31, 0x1EC5D0u);
    ctx->pc = 0x1EC5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC5C8u;
    // 0x1ec5cc: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1EC5C8u, 0x1EC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC5D0u;
label_1ec5d0:
    // 0x1ec5d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec5d4:
    // 0x1ec5d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec5d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5DCu;
        // 0x1ec5e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC5E4u;
}
