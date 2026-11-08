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

// Function: FUN_0017c260
// Address: 0x17c260 - 0x17c2cc
void FUN_0017c260_0x17c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c260_0x17c260");
#endif

    switch (ctx->pc) {
        case 0x17c260u: goto label_17c260;
        case 0x17c264u: goto label_17c264;
        case 0x17c268u: goto label_17c268;
        case 0x17c26cu: goto label_17c26c;
        case 0x17c270u: goto label_17c270;
        case 0x17c274u: goto label_17c274;
        case 0x17c278u: goto label_17c278;
        case 0x17c27cu: goto label_17c27c;
        case 0x17c280u: goto label_17c280;
        case 0x17c284u: goto label_17c284;
        case 0x17c288u: goto label_17c288;
        case 0x17c28cu: goto label_17c28c;
        case 0x17c290u: goto label_17c290;
        case 0x17c294u: goto label_17c294;
        case 0x17c298u: goto label_17c298;
        case 0x17c29cu: goto label_17c29c;
        case 0x17c2a0u: goto label_17c2a0;
        case 0x17c2a4u: goto label_17c2a4;
        case 0x17c2a8u: goto label_17c2a8;
        case 0x17c2acu: goto label_17c2ac;
        case 0x17c2b0u: goto label_17c2b0;
        case 0x17c2b4u: goto label_17c2b4;
        case 0x17c2b8u: goto label_17c2b8;
        case 0x17c2bcu: goto label_17c2bc;
        case 0x17c2c0u: goto label_17c2c0;
        case 0x17c2c4u: goto label_17c2c4;
        case 0x17c2c8u: goto label_17c2c8;
        default: break;
    }

    ctx->pc = 0x17c260u;

label_17c260:
    // 0x17c260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17c264:
    // 0x17c264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17c268:
    // 0x17c268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17c26c:
    // 0x17c26c: 0xc0563cc  jal         func_158F30
label_17c270:
    if (ctx->pc == 0x17C270u) {
        ctx->pc = 0x17C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C26Cu;
        // 0x17c270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C274u;
        goto label_17c274;
    }
    ctx->pc = 0x17C26Cu;
    SET_GPR_U32(ctx, 31, 0x17C274u);
    ctx->pc = 0x17C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C26Cu;
    // 0x17c270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17C26Cu, 0x17C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C274u;
label_17c274:
    // 0x17c274: 0xa6000210  sh          $zero, 0x210($s0)
    ctx->pc = 0x17c274u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 528), (uint16_t)GPR_U32(ctx, 0));
label_17c278:
    // 0x17c278: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x17c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_17c27c:
    // 0x17c27c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_17c280:
    if (ctx->pc == 0x17C280u) {
        ctx->pc = 0x17C284u;
        goto label_17c284;
    }
    ctx->pc = 0x17C27Cu;
    {
        const bool branch_taken_0x17c27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c27c) {
            ctx->pc = 0x17C298u;
            goto label_17c298;
        }
    }
    ctx->pc = 0x17C284u;
label_17c284:
    // 0x17c284: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x17c284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17c288:
    // 0x17c288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c28c:
    // 0x17c28c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17c28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17c290:
    // 0x17c290: 0x320f809  jalr        $t9
label_17c294:
    if (ctx->pc == 0x17C294u) {
        ctx->pc = 0x17C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C290u;
        // 0x17c294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C298u;
        goto label_17c298;
    }
    ctx->pc = 0x17C290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C298u);
        ctx->pc = 0x17C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C290u;
        // 0x17c294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C290u, 0x17C298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C298u;
label_17c298:
    // 0x17c298: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17c298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c29c:
    // 0x17c29c: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x17c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
label_17c2a0:
    // 0x17c2a0: 0x90840023  lbu         $a0, 0x23($a0)
    ctx->pc = 0x17c2a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_17c2a4:
    // 0x17c2a4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17c2a8:
    // 0x17c2a8: 0xa6040212  sh          $a0, 0x212($s0)
    ctx->pc = 0x17c2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 4));
label_17c2ac:
    // 0x17c2ac: 0x86040212  lh          $a0, 0x212($s0)
    ctx->pc = 0x17c2acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
label_17c2b0:
    // 0x17c2b0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_17c2b4:
    if (ctx->pc == 0x17C2B4u) {
        ctx->pc = 0x17C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2B0u;
        // 0x17c2b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C2B8u;
        goto label_17c2b8;
    }
    ctx->pc = 0x17C2B0u;
    {
        const bool branch_taken_0x17c2b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2B0u;
        // 0x17c2b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2b0) {
            ctx->pc = 0x17C2BCu;
            goto label_17c2bc;
        }
    }
    ctx->pc = 0x17C2B8u;
label_17c2b8:
    // 0x17c2b8: 0xa6030212  sh          $v1, 0x212($s0)
    ctx->pc = 0x17c2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 3));
label_17c2bc:
    // 0x17c2bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c2c0:
    // 0x17c2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17c2c4:
    // 0x17c2c4: 0x3e00008  jr          $ra
label_17c2c8:
    if (ctx->pc == 0x17C2C8u) {
        ctx->pc = 0x17C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2C4u;
        // 0x17c2c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C2CCu;
        goto label_fallthrough_0x17c2c4;
    }
    ctx->pc = 0x17C2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2C4u;
        // 0x17c2c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17c2c4:
    ctx->pc = 0x17C2CCu;
}
