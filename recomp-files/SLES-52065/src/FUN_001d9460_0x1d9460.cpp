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

// Function: FUN_001d9460
// Address: 0x1d9460 - 0x1d9534
void FUN_001d9460_0x1d9460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d9460_0x1d9460");
#endif

    switch (ctx->pc) {
        case 0x1d94bcu: goto label_1d94bc;
        case 0x1d94e0u: goto label_1d94e0;
        case 0x1d94f4u: goto label_1d94f4;
        case 0x1d9510u: goto label_1d9510;
        default: break;
    }

    ctx->pc = 0x1d9460u;

    // 0x1d9460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9464: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d9464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9468: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x1d9468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d946c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9470: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9474: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d9474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d947c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1d947cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d9480: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9484: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d9484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d9488: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D9488u;
    {
        const bool branch_taken_0x1d9488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9488u;
        // 0x1d948c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9488) {
            ctx->pc = 0x1D9510u;
            goto label_1d9510;
        }
    }
    ctx->pc = 0x1D9490u;
    // 0x1d9490: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d9490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d9494: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1d9494u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d9498: 0x245266c0  addiu       $s2, $v0, 0x66C0
    ctx->pc = 0x1d9498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
    // 0x1d949c: 0x2128821  addu        $s1, $s0, $s2
    ctx->pc = 0x1d949cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d94a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d94a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d94a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d94a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d94a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d94ac: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D94ACu;
    {
        const bool branch_taken_0x1d94ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94ac) {
            ctx->pc = 0x1D94B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D94ACu;
            // 0x1d94b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9514u;
            goto label_1d9514;
        }
    }
    ctx->pc = 0x1D94B4u;
    // 0x1d94b4: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D94B4u;
    SET_GPR_U32(ctx, 31, 0x1D94BCu);
    ctx->pc = 0x1D94B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94B4u;
    // 0x1d94b8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D94B4u, 0x1D94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94BCu;
label_1d94bc:
    // 0x1d94bc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d94bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d94c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d94c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d94c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d94c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94cc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1d94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1d94d0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1d94d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d94d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d94d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94d8: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D94D8u;
    SET_GPR_U32(ctx, 31, 0x1D94E0u);
    ctx->pc = 0x1D94DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94D8u;
    // 0x1d94dc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D94D8u, 0x1D94E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94E0u;
label_1d94e0:
    // 0x1d94e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d94e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d94e4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d94e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d94e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d94e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ec: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D94ECu;
    SET_GPR_U32(ctx, 31, 0x1D94F4u);
    ctx->pc = 0x1D94F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94ECu;
    // 0x1d94f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D94ECu, 0x1D94F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94F4u;
label_1d94f4:
    // 0x1d94f4: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D94F4u;
    {
        const bool branch_taken_0x1d94f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94F4u;
        // 0x1d94f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94f4) {
            ctx->pc = 0x1D9500u;
            goto label_1d9500;
        }
    }
    ctx->pc = 0x1D94FCu;
    // 0x1d94fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d9500:
    // 0x1d9500: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9500u;
    {
        const bool branch_taken_0x1d9500 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9500u;
        // 0x1d9504: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9500) {
            ctx->pc = 0x1D9510u;
            goto label_1d9510;
        }
    }
    ctx->pc = 0x1D9508u;
    // 0x1d9508: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D9508u;
    SET_GPR_U32(ctx, 31, 0x1D9510u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D9508u, 0x1D9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9510u;
label_1d9510:
    // 0x1d9510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9514:
    // 0x1d9514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9518: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d951c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d951cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9520: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9524: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d9524u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9528: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d9528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d952c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D952Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D952Cu;
        // 0x1d9530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D952Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9534u;
}
