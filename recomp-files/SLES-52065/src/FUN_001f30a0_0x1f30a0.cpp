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

// Function: FUN_001f30a0
// Address: 0x1f30a0 - 0x1f3130
void FUN_001f30a0_0x1f30a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f30a0_0x1f30a0");
#endif

    switch (ctx->pc) {
        case 0x1f30b8u: goto label_1f30b8;
        case 0x1f30c8u: goto label_1f30c8;
        case 0x1f310cu: goto label_1f310c;
        default: break;
    }

    ctx->pc = 0x1f30a0u;

    // 0x1f30a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f30a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f30a4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f30a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f30a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f30a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f30ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f30acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30b0: 0xc07cab2  jal         func_1F2AC8
    ctx->pc = 0x1F30B0u;
    SET_GPR_U32(ctx, 31, 0x1F30B8u);
    ctx->pc = 0x1F30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30B0u;
    // 0x1f30b4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AC8u, 0x1F30B0u, 0x1F30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30B8u;
label_1f30b8:
    // 0x1f30b8: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F30B8u;
    {
        const bool branch_taken_0x1f30b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30B8u;
        // 0x1f30bc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30b8) {
            ctx->pc = 0x1F311Cu;
            goto label_1f311c;
        }
    }
    ctx->pc = 0x1F30C0u;
    // 0x1f30c0: 0xc07caf2  jal         func_1F2BC8
    ctx->pc = 0x1F30C0u;
    SET_GPR_U32(ctx, 31, 0x1F30C8u);
    ctx->pc = 0x1F2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2BC8u, 0x1F30C0u, 0x1F30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30C8u;
label_1f30c8:
    // 0x1f30c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F30C8u;
    {
        const bool branch_taken_0x1f30c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30C8u;
        // 0x1f30cc: 0x3c100039  lui         $s0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30c8) {
            ctx->pc = 0x1F30DCu;
            goto label_1f30dc;
        }
    }
    ctx->pc = 0x1F30D0u;
    // 0x1f30d0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f30d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F30D4u;
    {
        const bool branch_taken_0x1f30d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30D4u;
        // 0x1f30d8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30d4) {
            ctx->pc = 0x1F311Cu;
            goto label_1f311c;
        }
    }
    ctx->pc = 0x1F30DCu;
label_1f30dc:
    // 0x1f30dc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f30dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f30e0: 0x2607fb80  addiu       $a3, $s0, -0x480
    ctx->pc = 0x1f30e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966144));
    // 0x1f30e4: 0xae11fb80  sw          $s1, -0x480($s0)
    ctx->pc = 0x1f30e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966144), GPR_U32(ctx, 17));
    // 0x1f30e8: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f30e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f30ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f30f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f30f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f30f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f30f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30f8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f30f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f30fc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f30fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3100: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f3100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f3104: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F3104u;
    SET_GPR_U32(ctx, 31, 0x1F310Cu);
    ctx->pc = 0x1F3108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3104u;
    // 0x1f3108: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F3104u, 0x1F310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F310Cu;
label_1f310c:
    // 0x1f310c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F310Cu;
    {
        const bool branch_taken_0x1f310c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f310c) {
            ctx->pc = 0x1F3110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F310Cu;
            // 0x1f3110: 0x8e02fb80  lw          $v0, -0x480($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F311Cu;
            goto label_1f311c;
        }
    }
    ctx->pc = 0x1F3114u;
    // 0x1f3114: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f3114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3118: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1f311c:
    // 0x1f311c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f311cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3120: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f3120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3124: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3128: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3128u;
        // 0x1f312c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3130u;
}
