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

// Function: FUN_0014d110
// Address: 0x14d110 - 0x14d190
void FUN_0014d110_0x14d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014d110_0x14d110");
#endif

    switch (ctx->pc) {
        case 0x14d160u: goto label_14d160;
        default: break;
    }

    ctx->pc = 0x14d110u;

    // 0x14d110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14d114: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14d114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d118: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14d118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14d11c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14d120: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14d120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14d124: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14d124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14d128: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14d128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d12c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14d130: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x14d130u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14d134: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14d134u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14d138: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x14d138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x14d13c: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x14d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x14d140: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14d140u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x14d144: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14d144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14d148: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D148u;
    {
        const bool branch_taken_0x14d148 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D148u;
        // 0x14d14c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d148) {
            ctx->pc = 0x14D160u;
            goto label_14d160;
        }
    }
    ctx->pc = 0x14D150u;
    // 0x14d150: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x14d150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x14d154: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x14d154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14d158: 0xc0484a8  jal         func_1212A0
    ctx->pc = 0x14D158u;
    SET_GPR_U32(ctx, 31, 0x14D160u);
    ctx->pc = 0x14D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D158u;
    // 0x14d15c: 0x278680ac  addiu       $a2, $gp, -0x7F54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1212A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1212A0u, 0x14D158u, 0x14D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D160u;
label_14d160:
    // 0x14d160: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x14d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x14d164: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x14d164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14d168: 0x8c6300e8  lw          $v1, 0xE8($v1)
    ctx->pc = 0x14d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x14d16c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d170: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x14d170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14d174: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14d174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d178: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d17c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14d17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d180: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d184: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14d184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d188: 0x3e00008  jr          $ra
    ctx->pc = 0x14D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D188u;
        // 0x14d18c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D190u;
}
