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

// Function: FUN_00193130
// Address: 0x193130 - 0x1931d4
void FUN_00193130_0x193130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193130_0x193130");
#endif

    switch (ctx->pc) {
        case 0x193130u: goto label_193130;
        case 0x193134u: goto label_193134;
        case 0x193138u: goto label_193138;
        case 0x19313cu: goto label_19313c;
        case 0x193140u: goto label_193140;
        case 0x193144u: goto label_193144;
        case 0x193148u: goto label_193148;
        case 0x19314cu: goto label_19314c;
        case 0x193150u: goto label_193150;
        case 0x193154u: goto label_193154;
        case 0x193158u: goto label_193158;
        case 0x19315cu: goto label_19315c;
        case 0x193160u: goto label_193160;
        case 0x193164u: goto label_193164;
        case 0x193168u: goto label_193168;
        case 0x19316cu: goto label_19316c;
        case 0x193170u: goto label_193170;
        case 0x193174u: goto label_193174;
        case 0x193178u: goto label_193178;
        case 0x19317cu: goto label_19317c;
        case 0x193180u: goto label_193180;
        case 0x193184u: goto label_193184;
        case 0x193188u: goto label_193188;
        case 0x19318cu: goto label_19318c;
        case 0x193190u: goto label_193190;
        case 0x193194u: goto label_193194;
        case 0x193198u: goto label_193198;
        case 0x19319cu: goto label_19319c;
        case 0x1931a0u: goto label_1931a0;
        case 0x1931a4u: goto label_1931a4;
        case 0x1931a8u: goto label_1931a8;
        case 0x1931acu: goto label_1931ac;
        case 0x1931b0u: goto label_1931b0;
        case 0x1931b4u: goto label_1931b4;
        case 0x1931b8u: goto label_1931b8;
        case 0x1931bcu: goto label_1931bc;
        case 0x1931c0u: goto label_1931c0;
        case 0x1931c4u: goto label_1931c4;
        case 0x1931c8u: goto label_1931c8;
        case 0x1931ccu: goto label_1931cc;
        case 0x1931d0u: goto label_1931d0;
        default: break;
    }

    ctx->pc = 0x193130u;

label_193130:
    // 0x193130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_193134:
    // 0x193134: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_193138:
    // 0x193138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19313c:
    // 0x19313c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_193140:
    // 0x193140: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193144:
    // 0x193144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193148:
    // 0x193148: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_19314c:
    // 0x19314c: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
label_193150:
    if (ctx->pc == 0x193150u) {
        ctx->pc = 0x193150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19314Cu;
        // 0x193150: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193154u;
        goto label_193154;
    }
    ctx->pc = 0x19314Cu;
    {
        const bool branch_taken_0x19314c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x193150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19314Cu;
        // 0x193150: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19314c) {
            ctx->pc = 0x1931A0u;
            goto label_1931a0;
        }
    }
    ctx->pc = 0x193154u;
label_193154:
    // 0x193154: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x193154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_193158:
    // 0x193158: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
label_19315c:
    if (ctx->pc == 0x19315Cu) {
        ctx->pc = 0x19315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193158u;
        // 0x19315c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193160u;
        goto label_193160;
    }
    ctx->pc = 0x193158u;
    {
        const bool branch_taken_0x193158 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x19315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193158u;
        // 0x19315c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193158) {
            ctx->pc = 0x193188u;
            goto label_193188;
        }
    }
    ctx->pc = 0x193160u;
label_193160:
    // 0x193160: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
label_193164:
    if (ctx->pc == 0x193164u) {
        ctx->pc = 0x193168u;
        goto label_193168;
    }
    ctx->pc = 0x193160u;
    {
        const bool branch_taken_0x193160 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x193160) {
            ctx->pc = 0x193170u;
            goto label_193170;
        }
    }
    ctx->pc = 0x193168u;
label_193168:
    // 0x193168: 0x10000013  b           . + 4 + (0x13 << 2)
label_19316c:
    if (ctx->pc == 0x19316Cu) {
        ctx->pc = 0x19316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193168u;
        // 0x19316c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193170u;
        goto label_193170;
    }
    ctx->pc = 0x193168u;
    {
        const bool branch_taken_0x193168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193168u;
        // 0x19316c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193168) {
            ctx->pc = 0x1931B8u;
            goto label_1931b8;
        }
    }
    ctx->pc = 0x193170u;
label_193170:
    // 0x193170: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193174:
    // 0x193174: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_193178:
    // 0x193178: 0x320f809  jalr        $t9
label_19317c:
    if (ctx->pc == 0x19317Cu) {
        ctx->pc = 0x19317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193178u;
        // 0x19317c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193180u;
        goto label_193180;
    }
    ctx->pc = 0x193178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193180u);
        ctx->pc = 0x19317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193178u;
        // 0x19317c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193178u, 0x193180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193180u;
label_193180:
    // 0x193180: 0x10000012  b           . + 4 + (0x12 << 2)
label_193184:
    if (ctx->pc == 0x193184u) {
        ctx->pc = 0x193184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193180u;
        // 0x193184: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193188u;
        goto label_193188;
    }
    ctx->pc = 0x193180u;
    {
        const bool branch_taken_0x193180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193180u;
        // 0x193184: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193180) {
            ctx->pc = 0x1931CCu;
            goto label_1931cc;
        }
    }
    ctx->pc = 0x193188u;
label_193188:
    // 0x193188: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19318c:
    // 0x19318c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x19318cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_193190:
    // 0x193190: 0x320f809  jalr        $t9
label_193194:
    if (ctx->pc == 0x193194u) {
        ctx->pc = 0x193194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193190u;
        // 0x193194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193198u;
        goto label_193198;
    }
    ctx->pc = 0x193190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193198u);
        ctx->pc = 0x193194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193190u;
        // 0x193194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193190u, 0x193198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193198u;
label_193198:
    // 0x193198: 0x1000000b  b           . + 4 + (0xB << 2)
label_19319c:
    if (ctx->pc == 0x19319Cu) {
        ctx->pc = 0x1931A0u;
        goto label_1931a0;
    }
    ctx->pc = 0x193198u;
    {
        const bool branch_taken_0x193198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193198) {
            ctx->pc = 0x1931C8u;
            goto label_1931c8;
        }
    }
    ctx->pc = 0x1931A0u;
label_1931a0:
    // 0x1931a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1931a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1931a4:
    // 0x1931a4: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x1931a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_1931a8:
    // 0x1931a8: 0x320f809  jalr        $t9
label_1931ac:
    if (ctx->pc == 0x1931ACu) {
        ctx->pc = 0x1931ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931A8u;
        // 0x1931ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931B0u;
        goto label_1931b0;
    }
    ctx->pc = 0x1931A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1931B0u);
        ctx->pc = 0x1931ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931A8u;
        // 0x1931ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931A8u, 0x1931B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1931B0u;
label_1931b0:
    // 0x1931b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1931b4:
    if (ctx->pc == 0x1931B4u) {
        ctx->pc = 0x1931B8u;
        goto label_1931b8;
    }
    ctx->pc = 0x1931B0u;
    {
        const bool branch_taken_0x1931b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1931b0) {
            ctx->pc = 0x1931C8u;
            goto label_1931c8;
        }
    }
    ctx->pc = 0x1931B8u;
label_1931b8:
    // 0x1931b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1931b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1931bc:
    // 0x1931bc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1931bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1931c0:
    // 0x1931c0: 0x320f809  jalr        $t9
label_1931c4:
    if (ctx->pc == 0x1931C4u) {
        ctx->pc = 0x1931C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931C0u;
        // 0x1931c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931C8u;
        goto label_1931c8;
    }
    ctx->pc = 0x1931C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1931C8u);
        ctx->pc = 0x1931C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931C0u;
        // 0x1931c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931C0u, 0x1931C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1931C8u;
label_1931c8:
    // 0x1931c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1931c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1931cc:
    // 0x1931cc: 0x3e00008  jr          $ra
label_1931d0:
    if (ctx->pc == 0x1931D0u) {
        ctx->pc = 0x1931D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931CCu;
        // 0x1931d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1931D4u;
        goto label_fallthrough_0x1931cc;
    }
    ctx->pc = 0x1931CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1931D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931CCu;
        // 0x1931d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1931CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1931cc:
    ctx->pc = 0x1931D4u;
}
