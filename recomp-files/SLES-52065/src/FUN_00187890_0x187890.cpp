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

// Function: FUN_00187890
// Address: 0x187890 - 0x187918
void FUN_00187890_0x187890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187890_0x187890");
#endif

    switch (ctx->pc) {
        case 0x1878c0u: goto label_1878c0;
        case 0x187904u: goto label_187904;
        default: break;
    }

    ctx->pc = 0x187890u;

    // 0x187890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187894: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x187894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18789c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x18789cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1878a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1878a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1878a4: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1878a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1878a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1878ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1878acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878b0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1878B0u;
    {
        const bool branch_taken_0x1878b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878B0u;
        // 0x1878b4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878b0) {
            ctx->pc = 0x1878F8u;
            goto label_1878f8;
        }
    }
    ctx->pc = 0x1878B8u;
    // 0x1878b8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1878b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1878bc: 0x0  nop
    ctx->pc = 0x1878bcu;
    // NOP
label_1878c0:
    // 0x1878c0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1878c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1878c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1878c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1878c8: 0x0  nop
    ctx->pc = 0x1878c8u;
    // NOP
    // 0x1878cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1878CCu;
    {
        const bool branch_taken_0x1878cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1878D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878CCu;
        // 0x1878d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878cc) {
            ctx->pc = 0x1878E0u;
            goto label_1878e0;
        }
    }
    ctx->pc = 0x1878D4u;
    // 0x1878d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1878d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1878d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1878D8u;
    {
        const bool branch_taken_0x1878d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1878DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878D8u;
        // 0x1878dc: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878d8) {
            ctx->pc = 0x1878ECu;
            goto label_1878ec;
        }
    }
    ctx->pc = 0x1878E0u;
label_1878e0:
    // 0x1878e0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1878e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1878e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1878e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1878e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1878ec:
    // 0x1878ec: 0x0  nop
    ctx->pc = 0x1878ecu;
    // NOP
    // 0x1878f0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1878F0u;
    {
        const bool branch_taken_0x1878f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1878f0) {
            ctx->pc = 0x1878C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1878c0;
        }
    }
    ctx->pc = 0x1878F8u;
label_1878f8:
    // 0x1878f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1878f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878fc: 0xc061e50  jal         func_187940
    ctx->pc = 0x1878FCu;
    SET_GPR_U32(ctx, 31, 0x187904u);
    ctx->pc = 0x187900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878FCu;
    // 0x187900: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187940u, 0x1878FCu, 0x187904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187904u;
label_187904:
    // 0x187904: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x187904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x187908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18790c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18790cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187910: 0x3e00008  jr          $ra
    ctx->pc = 0x187910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187910u;
        // 0x187914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187918u;
}
