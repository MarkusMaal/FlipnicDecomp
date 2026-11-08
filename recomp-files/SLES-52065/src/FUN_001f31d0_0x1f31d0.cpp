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

// Function: FUN_001f31d0
// Address: 0x1f31d0 - 0x1f3260
void FUN_001f31d0_0x1f31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f31d0_0x1f31d0");
#endif

    switch (ctx->pc) {
        case 0x1f31e8u: goto label_1f31e8;
        case 0x1f31f8u: goto label_1f31f8;
        case 0x1f323cu: goto label_1f323c;
        default: break;
    }

    ctx->pc = 0x1f31d0u;

    // 0x1f31d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f31d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f31d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f31d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f31d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f31d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f31dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f31dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31e0: 0xc07cab2  jal         func_1F2AC8
    ctx->pc = 0x1F31E0u;
    SET_GPR_U32(ctx, 31, 0x1F31E8u);
    ctx->pc = 0x1F31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F31E0u;
    // 0x1f31e4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2AC8u, 0x1F31E0u, 0x1F31E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31E8u;
label_1f31e8:
    // 0x1f31e8: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F31E8u;
    {
        const bool branch_taken_0x1f31e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31E8u;
        // 0x1f31ec: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31e8) {
            ctx->pc = 0x1F324Cu;
            goto label_1f324c;
        }
    }
    ctx->pc = 0x1F31F0u;
    // 0x1f31f0: 0xc07caf2  jal         func_1F2BC8
    ctx->pc = 0x1F31F0u;
    SET_GPR_U32(ctx, 31, 0x1F31F8u);
    ctx->pc = 0x1F2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2BC8u, 0x1F31F0u, 0x1F31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31F8u;
label_1f31f8:
    // 0x1f31f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F31F8u;
    {
        const bool branch_taken_0x1f31f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31F8u;
        // 0x1f31fc: 0x3c100039  lui         $s0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31f8) {
            ctx->pc = 0x1F320Cu;
            goto label_1f320c;
        }
    }
    ctx->pc = 0x1F3200u;
    // 0x1f3200: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f3200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3204: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F3204u;
    {
        const bool branch_taken_0x1f3204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3204u;
        // 0x1f3208: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3204) {
            ctx->pc = 0x1F324Cu;
            goto label_1f324c;
        }
    }
    ctx->pc = 0x1F320Cu;
label_1f320c:
    // 0x1f320c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f320cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f3210: 0x2607fb80  addiu       $a3, $s0, -0x480
    ctx->pc = 0x1f3210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966144));
    // 0x1f3214: 0xae11fb80  sw          $s1, -0x480($s0)
    ctx->pc = 0x1f3214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966144), GPR_U32(ctx, 17));
    // 0x1f3218: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x1f3218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x1f321c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f321cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f3220: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f3220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f3224: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3228: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f3228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f322c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f322cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3230: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f3230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f3234: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F3234u;
    SET_GPR_U32(ctx, 31, 0x1F323Cu);
    ctx->pc = 0x1F3238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3234u;
    // 0x1f3238: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F3234u, 0x1F323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F323Cu;
label_1f323c:
    // 0x1f323c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F323Cu;
    {
        const bool branch_taken_0x1f323c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f323c) {
            ctx->pc = 0x1F3240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F323Cu;
            // 0x1f3240: 0x8e02fb80  lw          $v0, -0x480($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F324Cu;
            goto label_1f324c;
        }
    }
    ctx->pc = 0x1F3244u;
    // 0x1f3244: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f3244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f3248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1f324c:
    // 0x1f324c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3250: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f3250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3254: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3258: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3258u;
        // 0x1f325c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3260u;
}
