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

// Function: FUN_00203978
// Address: 0x203978 - 0x203a2c
void FUN_00203978_0x203978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203978_0x203978");
#endif

    switch (ctx->pc) {
        case 0x2039dcu: goto label_2039dc;
        case 0x2039f0u: goto label_2039f0;
        default: break;
    }

    ctx->pc = 0x203978u;

    // 0x203978: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x203978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x20397c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x20397cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x203980: 0xffb10470  sd          $s1, 0x470($sp)
    ctx->pc = 0x203980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 17));
    // 0x203984: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x203984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x203988: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x203988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x20398c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20398cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203990: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x203990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x203994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x203994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203998: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x203998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20399c: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x20399cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2039a0: 0x9629000e  lhu         $t1, 0xE($s1)
    ctx->pc = 0x2039a0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2039a4: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2039a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2039a8: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2039ac: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2039acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2039b0: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x2039b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x2039b4: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x2039b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2039b8: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x2039b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x2039bc: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x2039bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x2039c0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2039c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2039c4: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x2039c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x2039c8: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x2039c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x2039cc: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x2039ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x2039d0: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x2039d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x2039d4: 0xc080e8c  jal         func_203A30
    ctx->pc = 0x2039D4u;
    SET_GPR_U32(ctx, 31, 0x2039DCu);
    ctx->pc = 0x2039D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2039D4u;
    // 0x2039d8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203A30u, 0x2039D4u, 0x2039DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039DCu;
label_2039dc:
    // 0x2039dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2039dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2039e0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2039E0u;
    {
        const bool branch_taken_0x2039e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2039E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039E0u;
        // 0x2039e4: 0x97a2000c  lhu         $v0, 0xC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039e0) {
            ctx->pc = 0x2039FCu;
            goto label_2039fc;
        }
    }
    ctx->pc = 0x2039E8u;
    // 0x2039e8: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x2039E8u;
    SET_GPR_U32(ctx, 31, 0x2039F0u);
    ctx->pc = 0x2039ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2039E8u;
    // 0x2039ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x2039E8u, 0x2039F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039F0u;
label_2039f0:
    // 0x2039f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2039f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2039f4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2039f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2039f8: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x2039f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
label_2039fc:
    // 0x2039fc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2039fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x203a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203A00u;
    {
        const bool branch_taken_0x203a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A00u;
        // 0x203a04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a00) {
            ctx->pc = 0x203A18u;
            goto label_203a18;
        }
    }
    ctx->pc = 0x203A08u;
    // 0x203a08: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x203a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x203a0c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x203a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x203a10: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x203a10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x203a14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x203a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203a18:
    // 0x203a18: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x203a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x203a1c: 0xdfb10470  ld          $s1, 0x470($sp)
    ctx->pc = 0x203a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x203a20: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x203a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x203a24: 0x3e00008  jr          $ra
    ctx->pc = 0x203A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A24u;
        // 0x203a28: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203A2Cu;
}
