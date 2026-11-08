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

// Function: FUN_001e7980
// Address: 0x1e7980 - 0x1e7a38
void FUN_001e7980_0x1e7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7980_0x1e7980");
#endif

    switch (ctx->pc) {
        case 0x1e79ecu: goto label_1e79ec;
        case 0x1e79f4u: goto label_1e79f4;
        case 0x1e7a20u: goto label_1e7a20;
        default: break;
    }

    ctx->pc = 0x1e7980u;

    // 0x1e7980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e798c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7994: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E7994u;
    {
        const bool branch_taken_0x1e7994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7994u;
        // 0x1e7998: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7994) {
            ctx->pc = 0x1E7A20u;
            goto label_1e7a20;
        }
    }
    ctx->pc = 0x1E799Cu;
    // 0x1e799c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e79a0: 0x2442c310  addiu       $v0, $v0, -0x3CF0
    ctx->pc = 0x1e79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
    // 0x1e79a4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E79A4u;
    {
        const bool branch_taken_0x1e79a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79A4u;
        // 0x1e79a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e79a4) {
            ctx->pc = 0x1E7A08u;
            goto label_1e7a08;
        }
    }
    ctx->pc = 0x1E79ACu;
    // 0x1e79ac: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e79acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e79b0: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x1e79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e79b4: 0x2463c320  addiu       $v1, $v1, -0x3CE0
    ctx->pc = 0x1e79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951712));
    // 0x1e79b8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E79B8u;
    {
        const bool branch_taken_0x1e79b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79B8u;
        // 0x1e79bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e79b8) {
            ctx->pc = 0x1E79F4u;
            goto label_1e79f4;
        }
    }
    ctx->pc = 0x1E79C0u;
    // 0x1e79c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E79C0u;
    {
        const bool branch_taken_0x1e79c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e79c0) {
            ctx->pc = 0x1E79F4u;
            goto label_1e79f4;
        }
    }
    ctx->pc = 0x1E79C8u;
    // 0x1e79c8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e79c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e79cc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E79CCu;
    {
        const bool branch_taken_0x1e79cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e79cc) {
            ctx->pc = 0x1E79F4u;
            goto label_1e79f4;
        }
    }
    ctx->pc = 0x1E79D4u;
    // 0x1e79d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e79d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e79dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E79DCu;
    {
        const bool branch_taken_0x1e79dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79DCu;
        // 0x1e79e0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e79dc) {
            ctx->pc = 0x1E79F4u;
            goto label_1e79f4;
        }
    }
    ctx->pc = 0x1E79E4u;
    // 0x1e79e4: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E79E4u;
    SET_GPR_U32(ctx, 31, 0x1E79ECu);
    ctx->pc = 0x1E79E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79E4u;
    // 0x1e79e8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E79E4u, 0x1E79ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E79ECu;
label_1e79ec:
    // 0x1e79ec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E79ECu;
    SET_GPR_U32(ctx, 31, 0x1E79F4u);
    ctx->pc = 0x1E79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79ECu;
    // 0x1e79f0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E79ECu, 0x1E79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E79F4u;
label_1e79f4:
    // 0x1e79f4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E79F4u;
    {
        const bool branch_taken_0x1e79f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79F4u;
        // 0x1e79f8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e79f4) {
            ctx->pc = 0x1E7A0Cu;
            goto label_1e7a0c;
        }
    }
    ctx->pc = 0x1E79FCu;
    // 0x1e79fc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e7a00: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e7a04: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e7a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e7a08:
    // 0x1e7a08: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e7a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e7a0c:
    // 0x1e7a0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e7a0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e7a10: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7A10u;
    {
        const bool branch_taken_0x1e7a10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A10u;
        // 0x1e7a14: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a10) {
            ctx->pc = 0x1E7A24u;
            goto label_1e7a24;
        }
    }
    ctx->pc = 0x1E7A18u;
    // 0x1e7a18: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E7A18u;
    SET_GPR_U32(ctx, 31, 0x1E7A20u);
    ctx->pc = 0x1E7A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A18u;
    // 0x1e7a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E7A18u, 0x1E7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7A20u;
label_1e7a20:
    // 0x1e7a20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e7a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7a24:
    // 0x1e7a24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7a28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7a2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7a30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A30u;
        // 0x1e7a34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7A38u;
}
