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

// Function: FUN_001430f0
// Address: 0x1430f0 - 0x143184
void FUN_001430f0_0x1430f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001430f0_0x1430f0");
#endif

    switch (ctx->pc) {
        case 0x14312cu: goto label_14312c;
        case 0x143138u: goto label_143138;
        case 0x143140u: goto label_143140;
        default: break;
    }

    ctx->pc = 0x1430f0u;

    // 0x1430f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1430f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1430f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1430f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1430f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1430f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1430fc: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1430fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x143100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143100u;
    {
        const bool branch_taken_0x143100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143100u;
        // 0x143104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143100) {
            ctx->pc = 0x143110u;
            goto label_143110;
        }
    }
    ctx->pc = 0x143108u;
    // 0x143108: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x143108u;
    {
        const bool branch_taken_0x143108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143108u;
        // 0x14310c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143108) {
            ctx->pc = 0x143178u;
            goto label_143178;
        }
    }
    ctx->pc = 0x143110u;
label_143110:
    // 0x143110: 0x90820029  lbu         $v0, 0x29($a0)
    ctx->pc = 0x143110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x143114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143114u;
    {
        const bool branch_taken_0x143114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143114u;
        // 0x143118: 0x24900030  addiu       $s0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143114) {
            ctx->pc = 0x143124u;
            goto label_143124;
        }
    }
    ctx->pc = 0x14311Cu;
    // 0x14311c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14311Cu;
    {
        const bool branch_taken_0x14311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14311Cu;
        // 0x143120: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14311c) {
            ctx->pc = 0x143174u;
            goto label_143174;
        }
    }
    ctx->pc = 0x143124u;
label_143124:
    // 0x143124: 0xc05077c  jal         func_141DF0
    ctx->pc = 0x143124u;
    SET_GPR_U32(ctx, 31, 0x14312Cu);
    ctx->pc = 0x143128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143124u;
    // 0x143128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DF0u, 0x143124u, 0x14312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14312Cu;
label_14312c:
    // 0x14312c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14312cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143130: 0xc050778  jal         func_141DE0
    ctx->pc = 0x143130u;
    SET_GPR_U32(ctx, 31, 0x143138u);
    ctx->pc = 0x143134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143130u;
    // 0x143134: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DE0u, 0x143130u, 0x143138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143138u;
label_143138:
    // 0x143138: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x143138u;
    {
        const bool branch_taken_0x143138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x143138) {
            ctx->pc = 0x14316Cu;
            goto label_14316c;
        }
    }
    ctx->pc = 0x143140u;
label_143140:
    // 0x143140: 0x8e03fffc  lw          $v1, -0x4($s0)
    ctx->pc = 0x143140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x143144: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x143144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x143148: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x143148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14314c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x14314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x143150: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143150u;
    {
        const bool branch_taken_0x143150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143150) {
            ctx->pc = 0x143160u;
            goto label_143160;
        }
    }
    ctx->pc = 0x143158u;
    // 0x143158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143158u;
    {
        const bool branch_taken_0x143158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143158u;
        // 0x14315c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143158) {
            ctx->pc = 0x143174u;
            goto label_143174;
        }
    }
    ctx->pc = 0x143160u;
label_143160:
    // 0x143160: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x143160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x143164: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x143164u;
    {
        const bool branch_taken_0x143164 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x143164) {
            ctx->pc = 0x143140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143140;
        }
    }
    ctx->pc = 0x14316Cu;
label_14316c:
    // 0x14316c: 0x0  nop
    ctx->pc = 0x14316cu;
    // NOP
    // 0x143170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143174:
    // 0x143174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_143178:
    // 0x143178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14317c: 0x3e00008  jr          $ra
    ctx->pc = 0x14317Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14317Cu;
        // 0x143180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14317Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143184u;
}
