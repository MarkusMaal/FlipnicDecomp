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

// Function: FUN_001281f0
// Address: 0x1281f0 - 0x128248
void FUN_001281f0_0x1281f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001281f0_0x1281f0");
#endif

    switch (ctx->pc) {
        case 0x128218u: goto label_128218;
        case 0x12822cu: goto label_12822c;
        default: break;
    }

    ctx->pc = 0x1281f0u;

    // 0x1281f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1281f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1281f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1281f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1281f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1281f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1281fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1281fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x128200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128204: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x128204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x128208: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x128208u;
    {
        const bool branch_taken_0x128208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x128208) {
            ctx->pc = 0x128238u;
            goto label_128238;
        }
    }
    ctx->pc = 0x128210u;
    // 0x128210: 0xc049c48  jal         func_127120
    ctx->pc = 0x128210u;
    SET_GPR_U32(ctx, 31, 0x128218u);
    ctx->pc = 0x128214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128210u;
    // 0x128214: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x128210u, 0x128218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128218u;
label_128218:
    // 0x128218: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x128218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12821c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x12821cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x128220: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x128220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x128224: 0xc049b0c  jal         func_126C30
    ctx->pc = 0x128224u;
    SET_GPR_U32(ctx, 31, 0x12822Cu);
    ctx->pc = 0x128228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128224u;
    // 0x128228: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C30u, 0x128224u, 0x12822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12822Cu;
label_12822c:
    // 0x12822c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12822Cu;
    {
        const bool branch_taken_0x12822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12822Cu;
        // 0x128230: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12822c) {
            ctx->pc = 0x128238u;
            goto label_128238;
        }
    }
    ctx->pc = 0x128234u;
    // 0x128234: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x128234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_128238:
    // 0x128238: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12823c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12823cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128240: 0x3e00008  jr          $ra
    ctx->pc = 0x128240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128240u;
        // 0x128244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128248u;
}
