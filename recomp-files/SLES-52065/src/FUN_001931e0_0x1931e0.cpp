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

// Function: FUN_001931e0
// Address: 0x1931e0 - 0x1932a4
void FUN_001931e0_0x1931e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001931e0_0x1931e0");
#endif

    switch (ctx->pc) {
        case 0x1931e0u: goto label_1931e0;
        case 0x1931e4u: goto label_1931e4;
        case 0x1931e8u: goto label_1931e8;
        case 0x1931ecu: goto label_1931ec;
        case 0x1931f0u: goto label_1931f0;
        case 0x1931f4u: goto label_1931f4;
        case 0x1931f8u: goto label_1931f8;
        case 0x1931fcu: goto label_1931fc;
        case 0x193200u: goto label_193200;
        case 0x193204u: goto label_193204;
        case 0x193208u: goto label_193208;
        case 0x19320cu: goto label_19320c;
        case 0x193210u: goto label_193210;
        case 0x193214u: goto label_193214;
        case 0x193218u: goto label_193218;
        case 0x19321cu: goto label_19321c;
        case 0x193220u: goto label_193220;
        case 0x193224u: goto label_193224;
        case 0x193228u: goto label_193228;
        case 0x19322cu: goto label_19322c;
        case 0x193230u: goto label_193230;
        case 0x193234u: goto label_193234;
        case 0x193238u: goto label_193238;
        case 0x19323cu: goto label_19323c;
        case 0x193240u: goto label_193240;
        case 0x193244u: goto label_193244;
        case 0x193248u: goto label_193248;
        case 0x19324cu: goto label_19324c;
        case 0x193250u: goto label_193250;
        case 0x193254u: goto label_193254;
        case 0x193258u: goto label_193258;
        case 0x19325cu: goto label_19325c;
        case 0x193260u: goto label_193260;
        case 0x193264u: goto label_193264;
        case 0x193268u: goto label_193268;
        case 0x19326cu: goto label_19326c;
        case 0x193270u: goto label_193270;
        case 0x193274u: goto label_193274;
        case 0x193278u: goto label_193278;
        case 0x19327cu: goto label_19327c;
        case 0x193280u: goto label_193280;
        case 0x193284u: goto label_193284;
        case 0x193288u: goto label_193288;
        case 0x19328cu: goto label_19328c;
        case 0x193290u: goto label_193290;
        case 0x193294u: goto label_193294;
        case 0x193298u: goto label_193298;
        case 0x19329cu: goto label_19329c;
        case 0x1932a0u: goto label_1932a0;
        default: break;
    }

    ctx->pc = 0x1931e0u;

label_1931e0:
    // 0x1931e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1931e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1931e4:
    // 0x1931e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1931e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1931e8:
    // 0x1931e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1931e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1931ec:
    // 0x1931ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1931ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1931f0:
    // 0x1931f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1931f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1931f4:
    // 0x1931f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1931f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1931f8:
    // 0x1931f8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1931f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1931fc:
    // 0x1931fc: 0xc057040  jal         func_15C100
label_193200:
    if (ctx->pc == 0x193200u) {
        ctx->pc = 0x193200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931FCu;
        // 0x193200: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193204u;
        goto label_193204;
    }
    ctx->pc = 0x1931FCu;
    SET_GPR_U32(ctx, 31, 0x193204u);
    ctx->pc = 0x193200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931FCu;
    // 0x193200: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1931FCu, 0x193204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193204u;
label_193204:
    // 0x193204: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193208:
    // 0x193208: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x193208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19320c:
    // 0x19320c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_193210:
    // 0x193210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193214:
    // 0x193214: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_193218:
    // 0x193218: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
label_19321c:
    if (ctx->pc == 0x19321Cu) {
        ctx->pc = 0x19321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193218u;
        // 0x19321c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193220u;
        goto label_193220;
    }
    ctx->pc = 0x193218u;
    {
        const bool branch_taken_0x193218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193218u;
        // 0x19321c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193218) {
            ctx->pc = 0x19326Cu;
            goto label_19326c;
        }
    }
    ctx->pc = 0x193220u;
label_193220:
    // 0x193220: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x193220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_193224:
    // 0x193224: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_193228:
    if (ctx->pc == 0x193228u) {
        ctx->pc = 0x193228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193224u;
        // 0x193228: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19322Cu;
        goto label_19322c;
    }
    ctx->pc = 0x193224u;
    {
        const bool branch_taken_0x193224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x193228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193224u;
        // 0x193228: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193224) {
            ctx->pc = 0x193254u;
            goto label_193254;
        }
    }
    ctx->pc = 0x19322Cu;
label_19322c:
    // 0x19322c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_193230:
    if (ctx->pc == 0x193230u) {
        ctx->pc = 0x193234u;
        goto label_193234;
    }
    ctx->pc = 0x19322Cu;
    {
        const bool branch_taken_0x19322c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x19322c) {
            ctx->pc = 0x19323Cu;
            goto label_19323c;
        }
    }
    ctx->pc = 0x193234u;
label_193234:
    // 0x193234: 0x10000013  b           . + 4 + (0x13 << 2)
label_193238:
    if (ctx->pc == 0x193238u) {
        ctx->pc = 0x193238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193234u;
        // 0x193238: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19323Cu;
        goto label_19323c;
    }
    ctx->pc = 0x193234u;
    {
        const bool branch_taken_0x193234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193234u;
        // 0x193238: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193234) {
            ctx->pc = 0x193284u;
            goto label_193284;
        }
    }
    ctx->pc = 0x19323Cu;
label_19323c:
    // 0x19323c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19323cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193240:
    // 0x193240: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_193244:
    // 0x193244: 0x320f809  jalr        $t9
label_193248:
    if (ctx->pc == 0x193248u) {
        ctx->pc = 0x193248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193244u;
        // 0x193248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19324Cu;
        goto label_19324c;
    }
    ctx->pc = 0x193244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19324Cu);
        ctx->pc = 0x193248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193244u;
        // 0x193248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193244u, 0x19324Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19324Cu;
label_19324c:
    // 0x19324c: 0x10000012  b           . + 4 + (0x12 << 2)
label_193250:
    if (ctx->pc == 0x193250u) {
        ctx->pc = 0x193250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19324Cu;
        // 0x193250: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193254u;
        goto label_193254;
    }
    ctx->pc = 0x19324Cu;
    {
        const bool branch_taken_0x19324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19324Cu;
        // 0x193250: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19324c) {
            ctx->pc = 0x193298u;
            goto label_193298;
        }
    }
    ctx->pc = 0x193254u;
label_193254:
    // 0x193254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193258:
    // 0x193258: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_19325c:
    // 0x19325c: 0x320f809  jalr        $t9
label_193260:
    if (ctx->pc == 0x193260u) {
        ctx->pc = 0x193260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19325Cu;
        // 0x193260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193264u;
        goto label_193264;
    }
    ctx->pc = 0x19325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193264u);
        ctx->pc = 0x193260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19325Cu;
        // 0x193260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19325Cu, 0x193264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193264u;
label_193264:
    // 0x193264: 0x1000000b  b           . + 4 + (0xB << 2)
label_193268:
    if (ctx->pc == 0x193268u) {
        ctx->pc = 0x19326Cu;
        goto label_19326c;
    }
    ctx->pc = 0x193264u;
    {
        const bool branch_taken_0x193264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193264) {
            ctx->pc = 0x193294u;
            goto label_193294;
        }
    }
    ctx->pc = 0x19326Cu;
label_19326c:
    // 0x19326c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19326cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193270:
    // 0x193270: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x193270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_193274:
    // 0x193274: 0x320f809  jalr        $t9
label_193278:
    if (ctx->pc == 0x193278u) {
        ctx->pc = 0x193278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193274u;
        // 0x193278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19327Cu;
        goto label_19327c;
    }
    ctx->pc = 0x193274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19327Cu);
        ctx->pc = 0x193278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193274u;
        // 0x193278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193274u, 0x19327Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19327Cu;
label_19327c:
    // 0x19327c: 0x10000005  b           . + 4 + (0x5 << 2)
label_193280:
    if (ctx->pc == 0x193280u) {
        ctx->pc = 0x193284u;
        goto label_193284;
    }
    ctx->pc = 0x19327Cu;
    {
        const bool branch_taken_0x19327c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19327c) {
            ctx->pc = 0x193294u;
            goto label_193294;
        }
    }
    ctx->pc = 0x193284u;
label_193284:
    // 0x193284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193288:
    // 0x193288: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_19328c:
    // 0x19328c: 0x320f809  jalr        $t9
label_193290:
    if (ctx->pc == 0x193290u) {
        ctx->pc = 0x193290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19328Cu;
        // 0x193290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193294u;
        goto label_193294;
    }
    ctx->pc = 0x19328Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193294u);
        ctx->pc = 0x193290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19328Cu;
        // 0x193290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19328Cu, 0x193294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193294u;
label_193294:
    // 0x193294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193298:
    // 0x193298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19329c:
    // 0x19329c: 0x3e00008  jr          $ra
label_1932a0:
    if (ctx->pc == 0x1932A0u) {
        ctx->pc = 0x1932A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19329Cu;
        // 0x1932a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1932A4u;
        goto label_fallthrough_0x19329c;
    }
    ctx->pc = 0x19329Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1932A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19329Cu;
        // 0x1932a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19329Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19329c:
    ctx->pc = 0x1932A4u;
}
