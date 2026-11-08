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

// Function: FUN_001195e0
// Address: 0x1195e0 - 0x119650
void FUN_001195e0_0x1195e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001195e0_0x1195e0");
#endif

    switch (ctx->pc) {
        case 0x1195e0u: goto label_1195e0;
        case 0x1195e4u: goto label_1195e4;
        case 0x1195e8u: goto label_1195e8;
        case 0x1195ecu: goto label_1195ec;
        case 0x1195f0u: goto label_1195f0;
        case 0x1195f4u: goto label_1195f4;
        case 0x1195f8u: goto label_1195f8;
        case 0x1195fcu: goto label_1195fc;
        case 0x119600u: goto label_119600;
        case 0x119604u: goto label_119604;
        case 0x119608u: goto label_119608;
        case 0x11960cu: goto label_11960c;
        case 0x119610u: goto label_119610;
        case 0x119614u: goto label_119614;
        case 0x119618u: goto label_119618;
        case 0x11961cu: goto label_11961c;
        case 0x119620u: goto label_119620;
        case 0x119624u: goto label_119624;
        case 0x119628u: goto label_119628;
        case 0x11962cu: goto label_11962c;
        case 0x119630u: goto label_119630;
        case 0x119634u: goto label_119634;
        case 0x119638u: goto label_119638;
        case 0x11963cu: goto label_11963c;
        case 0x119640u: goto label_119640;
        case 0x119644u: goto label_119644;
        case 0x119648u: goto label_119648;
        case 0x11964cu: goto label_11964c;
        default: break;
    }

    ctx->pc = 0x1195e0u;

label_1195e0:
    // 0x1195e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1195e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1195e4:
    // 0x1195e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1195e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1195e8:
    // 0x1195e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1195e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1195ec:
    // 0x1195ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1195ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1195f0:
    // 0x1195f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1195f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1195f4:
    // 0x1195f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1195f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1195f8:
    // 0x1195f8: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x1195f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_1195fc:
    // 0x1195fc: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1195fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_119600:
    // 0x119600: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
label_119604:
    if (ctx->pc == 0x119604u) {
        ctx->pc = 0x119604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119600u;
        // 0x119604: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119608u;
        goto label_119608;
    }
    ctx->pc = 0x119600u;
    {
        const bool branch_taken_0x119600 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x119604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119600u;
        // 0x119604: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119600) {
            ctx->pc = 0x119634u;
            goto label_119634;
        }
    }
    ctx->pc = 0x119608u;
label_119608:
    // 0x119608: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x119608u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11960c:
    // 0x11960c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_119610:
    // 0x119610: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_119614:
    // 0x119614: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119618:
    // 0x119618: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11961c:
    // 0x11961c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x11961cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119620:
    // 0x119620: 0x320f809  jalr        $t9
label_119624:
    if (ctx->pc == 0x119624u) {
        ctx->pc = 0x119624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119620u;
        // 0x119624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119628u;
        goto label_119628;
    }
    ctx->pc = 0x119620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119628u);
        ctx->pc = 0x119624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119620u;
        // 0x119624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119620u, 0x119628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119628u;
label_119628:
    // 0x119628: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x119628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_11962c:
    // 0x11962c: 0x601fff7  bgez        $s0, . + 4 + (-0x9 << 2)
label_119630:
    if (ctx->pc == 0x119630u) {
        ctx->pc = 0x119630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11962Cu;
        // 0x119630: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119634u;
        goto label_119634;
    }
    ctx->pc = 0x11962Cu;
    {
        const bool branch_taken_0x11962c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x119630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11962Cu;
        // 0x119630: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11962c) {
            ctx->pc = 0x11960Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11960c;
        }
    }
    ctx->pc = 0x119634u;
label_119634:
    // 0x119634: 0x0  nop
    ctx->pc = 0x119634u;
    // NOP
label_119638:
    // 0x119638: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11963c:
    // 0x11963c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11963cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119640:
    // 0x119640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119644:
    // 0x119644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_119648:
    // 0x119648: 0x3e00008  jr          $ra
label_11964c:
    if (ctx->pc == 0x11964Cu) {
        ctx->pc = 0x11964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119648u;
        // 0x11964c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119650u;
        goto label_fallthrough_0x119648;
    }
    ctx->pc = 0x119648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119648u;
        // 0x11964c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119648:
    ctx->pc = 0x119650u;
}
