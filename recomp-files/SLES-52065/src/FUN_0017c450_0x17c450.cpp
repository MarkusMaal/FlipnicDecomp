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

// Function: FUN_0017c450
// Address: 0x17c450 - 0x17c4bc
void FUN_0017c450_0x17c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017c450_0x17c450");
#endif

    switch (ctx->pc) {
        case 0x17c450u: goto label_17c450;
        case 0x17c454u: goto label_17c454;
        case 0x17c458u: goto label_17c458;
        case 0x17c45cu: goto label_17c45c;
        case 0x17c460u: goto label_17c460;
        case 0x17c464u: goto label_17c464;
        case 0x17c468u: goto label_17c468;
        case 0x17c46cu: goto label_17c46c;
        case 0x17c470u: goto label_17c470;
        case 0x17c474u: goto label_17c474;
        case 0x17c478u: goto label_17c478;
        case 0x17c47cu: goto label_17c47c;
        case 0x17c480u: goto label_17c480;
        case 0x17c484u: goto label_17c484;
        case 0x17c488u: goto label_17c488;
        case 0x17c48cu: goto label_17c48c;
        case 0x17c490u: goto label_17c490;
        case 0x17c494u: goto label_17c494;
        case 0x17c498u: goto label_17c498;
        case 0x17c49cu: goto label_17c49c;
        case 0x17c4a0u: goto label_17c4a0;
        case 0x17c4a4u: goto label_17c4a4;
        case 0x17c4a8u: goto label_17c4a8;
        case 0x17c4acu: goto label_17c4ac;
        case 0x17c4b0u: goto label_17c4b0;
        case 0x17c4b4u: goto label_17c4b4;
        case 0x17c4b8u: goto label_17c4b8;
        default: break;
    }

    ctx->pc = 0x17c450u;

label_17c450:
    // 0x17c450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17c454:
    // 0x17c454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17c458:
    // 0x17c458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17c45c:
    // 0x17c45c: 0xc0563cc  jal         func_158F30
label_17c460:
    if (ctx->pc == 0x17C460u) {
        ctx->pc = 0x17C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C45Cu;
        // 0x17c460: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C464u;
        goto label_17c464;
    }
    ctx->pc = 0x17C45Cu;
    SET_GPR_U32(ctx, 31, 0x17C464u);
    ctx->pc = 0x17C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C45Cu;
    // 0x17c460: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17C45Cu, 0x17C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C464u;
label_17c464:
    // 0x17c464: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x17c464u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
label_17c468:
    // 0x17c468: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x17c468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_17c46c:
    // 0x17c46c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_17c470:
    if (ctx->pc == 0x17C470u) {
        ctx->pc = 0x17C474u;
        goto label_17c474;
    }
    ctx->pc = 0x17C46Cu;
    {
        const bool branch_taken_0x17c46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c46c) {
            ctx->pc = 0x17C488u;
            goto label_17c488;
        }
    }
    ctx->pc = 0x17C474u;
label_17c474:
    // 0x17c474: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x17c474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17c478:
    // 0x17c478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17c47c:
    // 0x17c47c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17c47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17c480:
    // 0x17c480: 0x320f809  jalr        $t9
label_17c484:
    if (ctx->pc == 0x17C484u) {
        ctx->pc = 0x17C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C480u;
        // 0x17c484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C488u;
        goto label_17c488;
    }
    ctx->pc = 0x17C480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17C488u);
        ctx->pc = 0x17C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C480u;
        // 0x17c484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C480u, 0x17C488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17C488u;
label_17c488:
    // 0x17c488: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17c488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17c48c:
    // 0x17c48c: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x17c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
label_17c490:
    // 0x17c490: 0x90840023  lbu         $a0, 0x23($a0)
    ctx->pc = 0x17c490u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_17c494:
    // 0x17c494: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17c494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17c498:
    // 0x17c498: 0xa6040222  sh          $a0, 0x222($s0)
    ctx->pc = 0x17c498u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 4));
label_17c49c:
    // 0x17c49c: 0x86040222  lh          $a0, 0x222($s0)
    ctx->pc = 0x17c49cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
label_17c4a0:
    // 0x17c4a0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_17c4a4:
    if (ctx->pc == 0x17C4A4u) {
        ctx->pc = 0x17C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4A0u;
        // 0x17c4a4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C4A8u;
        goto label_17c4a8;
    }
    ctx->pc = 0x17C4A0u;
    {
        const bool branch_taken_0x17c4a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4A0u;
        // 0x17c4a4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4a0) {
            ctx->pc = 0x17C4ACu;
            goto label_17c4ac;
        }
    }
    ctx->pc = 0x17C4A8u;
label_17c4a8:
    // 0x17c4a8: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x17c4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
label_17c4ac:
    // 0x17c4ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17c4b0:
    // 0x17c4b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17c4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17c4b4:
    // 0x17c4b4: 0x3e00008  jr          $ra
label_17c4b8:
    if (ctx->pc == 0x17C4B8u) {
        ctx->pc = 0x17C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4B4u;
        // 0x17c4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17C4BCu;
        goto label_fallthrough_0x17c4b4;
    }
    ctx->pc = 0x17C4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4B4u;
        // 0x17c4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17c4b4:
    ctx->pc = 0x17C4BCu;
}
